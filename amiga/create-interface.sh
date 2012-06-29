#!/bin/sh
#
# This script feeds the include file that defines the main interface
# of pixman to create-interface.py, which in turn generates the
# pixman.xml
#

cpp ../pixman/pixman.h -I . -D__extension__= | ./create-interface.py
