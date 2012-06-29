#!/usr/bin/python

import sys;

from pycparser import parse_file, c_parser, c_generator
from pycparser.c_ast import *
from pycparser.c_parser import *


str = '''
typedef struct pixman_image_t pixman_image_t;
typedef struct pixman_glyph_cache_t pixman_glyph_cache_t;
typedef struct pixman_glyph_t pixman_glyph_t;
typedef struct pixman_box16_t pixman_box16_t;
typedef struct pixman_box32_t pixman_box32_t;
typedef struct pixman_point_fixed_t pixman_point_fixed_t;
typedef struct pixman_gradient_stop_t pixman_gradient_stop_t;
typedef struct pixman_edge_t pixman_edge_t;
typedef struct pixman_region32_t pixman_region32_t;
typedef struct pixman_region16_t pixman_region16_t;
typedef struct pixman_indexed_t pixman_indexed_t;
typedef struct pixman_filter_t pixman_filter_t;
typedef struct pixman_transform_t pixman_transform_t;
typedef struct pixman_trapezoid_t pixman_trapezoid_t;
typedef struct pixman_color_t pixman_color_t;
typedef struct region_type_t region_type_t;
typedef struct pixman_triangle_t pixman_triangle_t;
typedef struct box_type_t box_type_t;
typedef struct pixman_line_fixed_t pixman_line_fixed_t;
typedef struct pixman_trap_t pixman_trap_t;
typedef struct pixman_rectangle16_t pixman_rectangle16_t;
typedef unsigned int pixman_format_code_t;
typedef unsigned int pixman_bool_t;
typedef unsigned int pixman_op_t;
typedef unsigned int pixman_repeat_t;
typedef unsigned int uint32_t;
typedef struct pixman_region_overlap_t pixman_region_overlap_t;
typedef int int32_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef unsigned int pixman_fixed_t;
typedef void *pixman_image_destroy_func_t;
typedef void *pixman_read_memory_func_t;
typedef void *pixman_write_memory_func_t;
typedef void *pixman_region16_data_t;

'''

for line in (sys.stdin):
	str = str + line

parser = CParser()
generator = c_generator.CGenerator()

t = parser.parse(str,'x.c')

print '''<?xml version="1.0" encoding="iso-8859-1"?>
<!DOCTYPE library SYSTEM "library.dtd">
<library name="pixman" basename="PixmanBase" basetype="PixmanLibrary" openname="pixman.library">
'''

print ' <interface name="main" version="1.0" flags="protected" struct="PixmanIFace" prefix="" asmprefix="IPixman">'

for ext in t.ext:
	if isinstance(ext, Decl):
		t = ext.type
		params = t.args.params;

		if isinstance(t.type,TypeDecl):
			res = t.type.type.names[0]
		else:
			res = t.type.type.type.names[0]
		if isinstance(t.type,PtrDecl):
			res = res + " *";
		print '  <method name="' + ext.name + '" result="' + res+ '">'

		for p in params:
			if p.name != None:
				t = ""
				if isinstance(p.type,TypeDecl):
					t = p.type.type.names[0]
				else:
					if isinstance(p.type.type.type,Struct):
						t = "struct " + p.type.type.type.name;
					else:
						t = p.type.type.type.names[0];
				if isinstance(p.type,PtrDecl):
					t = t + " *"
				print '    <arg name="' + p.name + '" type="' + t  + '"/>'


#		t.show()
#		print t.type.type.names[0]
		print '  </method>'

print " </interface>"
print '''</library>'''
