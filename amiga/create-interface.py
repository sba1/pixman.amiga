#!/usr/bin/python
#
# This is a tiny python script to generate the interface xml
# for pixman from a already cpp-parsed include file.
#

import sys;

from pycparser import parse_file, c_parser, c_generator
from pycparser.c_ast import *
from pycparser.c_parser import *


str = ""

for line in (sys.stdin):
	str = str + line

parser = CParser()
generator = c_generator.CGenerator()
t = parser.parse(str,'x.c')

print '''<?xml version="1.0" encoding="iso-8859-1"?>
<!DOCTYPE library SYSTEM "library.dtd">
<library name="pixman" basename="PixmanBase" basetype="PixmanLibrary" openname="pixman.library">

 <include>
  pixman.h
 </include>

 <interface name="main" version="1.0" flags="protected" struct="PixmanIFace" global="IPrefix" prefix="_impl_" asmprefix="IPixman">

  <method name="Obtain" result="uint32"/>
  <method name="Release" result="uint32"/>
  <method name="Expunge" result="void" status="unimplemented"/>
  <method name="Clone" result="struct Interface *" status="unimplemented"/>
'''

for ext in t.ext:
	if isinstance(ext, Decl) and isinstance(ext.type,FuncDecl):
		ty = ext.type
		params = ty.args.params;

		if isinstance(ty.type,TypeDecl):
			res = ty.type.type.names[0]
		else:
			if len(ty.type.type.quals) > 0:
				res = ' '.join(ty.type.type.quals) + ' ' + ty.type.type.type.names[0]
			else:
				res = ty.type.type.type.names[0]
		if isinstance(ty.type,PtrDecl):
			res = res + " *";
		print '  <method name="' + ext.name + '" result="' + res + '">'

		for p in params:
			quals = ' '.join(p.quals)
			
			if p.name != None:
				ty = ""
				if isinstance(p.type,TypeDecl):
					ty = p.type.type.names[0]
				else:
					if isinstance(p.type.type.type,Struct):
						ty = "struct " + p.type.type.type.name;
					else:
						ty = p.type.type.type.names[0];
				if isinstance(p.type,PtrDecl):
					ty = ty + " *"
				print '    <arg name="' + p.name + '" type="' + quals + ' ' + ty  + '"/>'


#		t.show()
#		print t.type.type.names[0]
		print '  </method>'

print " </interface>"
print '''</library>'''
