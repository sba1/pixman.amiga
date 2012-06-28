#!/bin/sh

cat ../pixman/*.c | perl -e 'undef $/; $_=<>; while ($_ =~ /PIXMAN\_EXPORT([^{]+)/g){ $proto = $1;  $proto =~ s/^\s*//; $proto =~ s/\s*$//  ; $proto = $proto . ";\n\n"; if ($proto =~ m/([^.]*)PREFIX\s*\(([^)]*)\)([^.]*)/ ) { print "$1 pixman_region$2$3" . "\n"; print "$1 pixman_region32$2$3" ."\n"} else { print $proto }}'
