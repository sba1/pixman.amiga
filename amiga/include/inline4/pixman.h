#ifndef INLINE4_PIXMAN_H
#define INLINE4_PIXMAN_H

/*
** This file was auto generated by idltool 53.5.
**
** It provides compatibility to OS3 style library
** calls by substituting functions.
**
** Do not edit manually.
*/ 

#ifndef EXEC_TYPES_H
#include <exec/types.h>
#endif
#ifndef EXEC_EXEC_H
#include <exec/exec.h>
#endif
#ifndef EXEC_INTERFACES_H
#include <exec/interfaces.h>
#endif

#ifndef PIXMAN_H
#include <pixman.h>
#endif
#include <interfaces/pixman.h>

/* Inline macros for Interface "main" */
#define pixman_transform_init_identity(matrix) IPrefix->pixman_transform_init_identity((matrix)) 
#define pixman_transform_point_3d(transform, vector) IPrefix->pixman_transform_point_3d((transform), (vector)) 
#define pixman_transform_point(transform, vector) IPrefix->pixman_transform_point((transform), (vector)) 
#define pixman_transform_multiply(dst, l, r) IPrefix->pixman_transform_multiply((dst), (l), (r)) 
#define pixman_transform_init_scale(t, sx, sy) IPrefix->pixman_transform_init_scale((t), (sx), (sy)) 
#define pixman_transform_scale(forward, reverse, sx, sy) IPrefix->pixman_transform_scale((forward), (reverse), (sx), (sy)) 
#define pixman_transform_init_rotate(t, cos, sin) IPrefix->pixman_transform_init_rotate((t), (cos), (sin)) 
#define pixman_transform_rotate(forward, reverse, c, s) IPrefix->pixman_transform_rotate((forward), (reverse), (c), (s)) 
#define pixman_transform_init_translate(t, tx, ty) IPrefix->pixman_transform_init_translate((t), (tx), (ty)) 
#define pixman_transform_translate(forward, reverse, tx, ty) IPrefix->pixman_transform_translate((forward), (reverse), (tx), (ty)) 
#define pixman_transform_bounds(matrix, b) IPrefix->pixman_transform_bounds((matrix), (b)) 
#define pixman_transform_invert(dst, src) IPrefix->pixman_transform_invert((dst), (src)) 
#define pixman_transform_is_identity(t) IPrefix->pixman_transform_is_identity((t)) 
#define pixman_transform_is_scale(t) IPrefix->pixman_transform_is_scale((t)) 
#define pixman_transform_is_int_translate(t) IPrefix->pixman_transform_is_int_translate((t)) 
#define pixman_transform_is_inverse(a, b) IPrefix->pixman_transform_is_inverse((a), (b)) 
#define pixman_transform_from_pixman_f_transform(t, ft) IPrefix->pixman_transform_from_pixman_f_transform((t), (ft)) 
#define pixman_f_transform_from_pixman_transform(ft, t) IPrefix->pixman_f_transform_from_pixman_transform((ft), (t)) 
#define pixman_f_transform_invert(dst, src) IPrefix->pixman_f_transform_invert((dst), (src)) 
#define pixman_f_transform_point(t, v) IPrefix->pixman_f_transform_point((t), (v)) 
#define pixman_f_transform_point_3d(t, v) IPrefix->pixman_f_transform_point_3d((t), (v)) 
#define pixman_f_transform_multiply(dst, l, r) IPrefix->pixman_f_transform_multiply((dst), (l), (r)) 
#define pixman_f_transform_init_scale(t, sx, sy) IPrefix->pixman_f_transform_init_scale((t), (sx), (sy)) 
#define pixman_f_transform_scale(forward, reverse, sx, sy) IPrefix->pixman_f_transform_scale((forward), (reverse), (sx), (sy)) 
#define pixman_f_transform_init_rotate(t, cos, sin) IPrefix->pixman_f_transform_init_rotate((t), (cos), (sin)) 
#define pixman_f_transform_rotate(forward, reverse, c, s) IPrefix->pixman_f_transform_rotate((forward), (reverse), (c), (s)) 
#define pixman_f_transform_init_translate(t, tx, ty) IPrefix->pixman_f_transform_init_translate((t), (tx), (ty)) 
#define pixman_f_transform_translate(forward, reverse, tx, ty) IPrefix->pixman_f_transform_translate((forward), (reverse), (tx), (ty)) 
#define pixman_f_transform_bounds(t, b) IPrefix->pixman_f_transform_bounds((t), (b)) 
#define pixman_f_transform_init_identity(t) IPrefix->pixman_f_transform_init_identity((t)) 
#define pixman_region_set_static_pointers(empty_box, empty_data, broken_data) IPrefix->pixman_region_set_static_pointers((empty_box), (empty_data), (broken_data)) 
#define pixman_region_init(region) IPrefix->pixman_region_init((region)) 
#define pixman_region_init_rect(region, x, y, width, height) IPrefix->pixman_region_init_rect((region), (x), (y), (width), (height)) 
#define pixman_region_init_rects(region, boxes, count) IPrefix->pixman_region_init_rects((region), (boxes), (count)) 
#define pixman_region_init_with_extents(region, extents) IPrefix->pixman_region_init_with_extents((region), (extents)) 
#define pixman_region_init_from_image(region, image) IPrefix->pixman_region_init_from_image((region), (image)) 
#define pixman_region_fini(region) IPrefix->pixman_region_fini((region)) 
#define pixman_region_translate(region, x, y) IPrefix->pixman_region_translate((region), (x), (y)) 
#define pixman_region_copy(dest, source) IPrefix->pixman_region_copy((dest), (source)) 
#define pixman_region_intersect(new_reg, reg1, reg2) IPrefix->pixman_region_intersect((new_reg), (reg1), (reg2)) 
#define pixman_region_union(new_reg, reg1, reg2) IPrefix->pixman_region_union((new_reg), (reg1), (reg2)) 
#define pixman_region_union_rect(dest, source, x, y, width, height) IPrefix->pixman_region_union_rect((dest), (source), (x), (y), (width), (height)) 
#define pixman_region_intersect_rect(dest, source, x, y, width, height) IPrefix->pixman_region_intersect_rect((dest), (source), (x), (y), (width), (height)) 
#define pixman_region_subtract(reg_d, reg_m, reg_s) IPrefix->pixman_region_subtract((reg_d), (reg_m), (reg_s)) 
#define pixman_region_inverse(new_reg, reg1, inv_rect) IPrefix->pixman_region_inverse((new_reg), (reg1), (inv_rect)) 
#define pixman_region_contains_point(region, x, y, box) IPrefix->pixman_region_contains_point((region), (x), (y), (box)) 
#define pixman_region_contains_rectangle(region, prect) IPrefix->pixman_region_contains_rectangle((region), (prect)) 
#define pixman_region_not_empty(region) IPrefix->pixman_region_not_empty((region)) 
#define pixman_region_extents(region) IPrefix->pixman_region_extents((region)) 
#define pixman_region_n_rects(region) IPrefix->pixman_region_n_rects((region)) 
#define pixman_region_rectangles(region, n_rects) IPrefix->pixman_region_rectangles((region), (n_rects)) 
#define pixman_region_equal(region1, region2) IPrefix->pixman_region_equal((region1), (region2)) 
#define pixman_region_selfcheck(region) IPrefix->pixman_region_selfcheck((region)) 
#define pixman_region_reset(region, box) IPrefix->pixman_region_reset((region), (box)) 
#define pixman_region_clear(region) IPrefix->pixman_region_clear((region)) 
#define pixman_region32_init(region) IPrefix->pixman_region32_init((region)) 
#define pixman_region32_init_rect(region, x, y, width, height) IPrefix->pixman_region32_init_rect((region), (x), (y), (width), (height)) 
#define pixman_region32_init_rects(region, boxes, count) IPrefix->pixman_region32_init_rects((region), (boxes), (count)) 
#define pixman_region32_init_with_extents(region, extents) IPrefix->pixman_region32_init_with_extents((region), (extents)) 
#define pixman_region32_init_from_image(region, image) IPrefix->pixman_region32_init_from_image((region), (image)) 
#define pixman_region32_fini(region) IPrefix->pixman_region32_fini((region)) 
#define pixman_region32_translate(region, x, y) IPrefix->pixman_region32_translate((region), (x), (y)) 
#define pixman_region32_copy(dest, source) IPrefix->pixman_region32_copy((dest), (source)) 
#define pixman_region32_intersect(new_reg, reg1, reg2) IPrefix->pixman_region32_intersect((new_reg), (reg1), (reg2)) 
#define pixman_region32_union(new_reg, reg1, reg2) IPrefix->pixman_region32_union((new_reg), (reg1), (reg2)) 
#define pixman_region32_intersect_rect(dest, source, x, y, width, height) IPrefix->pixman_region32_intersect_rect((dest), (source), (x), (y), (width), (height)) 
#define pixman_region32_union_rect(dest, source, x, y, width, height) IPrefix->pixman_region32_union_rect((dest), (source), (x), (y), (width), (height)) 
#define pixman_region32_subtract(reg_d, reg_m, reg_s) IPrefix->pixman_region32_subtract((reg_d), (reg_m), (reg_s)) 
#define pixman_region32_inverse(new_reg, reg1, inv_rect) IPrefix->pixman_region32_inverse((new_reg), (reg1), (inv_rect)) 
#define pixman_region32_contains_point(region, x, y, box) IPrefix->pixman_region32_contains_point((region), (x), (y), (box)) 
#define pixman_region32_contains_rectangle(region, prect) IPrefix->pixman_region32_contains_rectangle((region), (prect)) 
#define pixman_region32_not_empty(region) IPrefix->pixman_region32_not_empty((region)) 
#define pixman_region32_extents(region) IPrefix->pixman_region32_extents((region)) 
#define pixman_region32_n_rects(region) IPrefix->pixman_region32_n_rects((region)) 
#define pixman_region32_rectangles(region, n_rects) IPrefix->pixman_region32_rectangles((region), (n_rects)) 
#define pixman_region32_equal(region1, region2) IPrefix->pixman_region32_equal((region1), (region2)) 
#define pixman_region32_selfcheck(region) IPrefix->pixman_region32_selfcheck((region)) 
#define pixman_region32_reset(region, box) IPrefix->pixman_region32_reset((region), (box)) 
#define pixman_region32_clear(region) IPrefix->pixman_region32_clear((region)) 
#define pixman_blt(src_bits, dst_bits, src_stride, dst_stride, src_bpp, dst_bpp, src_x, src_y, dest_x, dest_y, width, height) IPrefix->pixman_blt((src_bits), (dst_bits), (src_stride), (dst_stride), (src_bpp), (dst_bpp), (src_x), (src_y), (dest_x), (dest_y), (width), (height)) 
#define pixman_fill(bits, stride, bpp, x, y, width, height, _xor) IPrefix->pixman_fill((bits), (stride), (bpp), (x), (y), (width), (height), (_xor)) 
#define pixman_version() IPrefix->pixman_version() 
#define pixman_version_string() IPrefix->pixman_version_string() 
#define pixman_format_supported_destination(format) IPrefix->pixman_format_supported_destination((format)) 
#define pixman_format_supported_source(format) IPrefix->pixman_format_supported_source((format)) 
#define pixman_image_create_solid_fill(color) IPrefix->pixman_image_create_solid_fill((color)) 
#define pixman_image_create_linear_gradient(p1, p2, stops, n_stops) IPrefix->pixman_image_create_linear_gradient((p1), (p2), (stops), (n_stops)) 
#define pixman_image_create_radial_gradient(inner, outer, inner_radius, outer_radius, stops, n_stops) IPrefix->pixman_image_create_radial_gradient((inner), (outer), (inner_radius), (outer_radius), (stops), (n_stops)) 
#define pixman_image_create_conical_gradient(center, angle, stops, n_stops) IPrefix->pixman_image_create_conical_gradient((center), (angle), (stops), (n_stops)) 
#define pixman_image_create_bits(format, width, height, bits, rowstride_bytes) IPrefix->pixman_image_create_bits((format), (width), (height), (bits), (rowstride_bytes)) 
#define pixman_image_ref(image) IPrefix->pixman_image_ref((image)) 
#define pixman_image_unref(image) IPrefix->pixman_image_unref((image)) 
#define pixman_image_set_destroy_function(image, function, data) IPrefix->pixman_image_set_destroy_function((image), (function), (data)) 
#define pixman_image_get_destroy_data(image) IPrefix->pixman_image_get_destroy_data((image)) 
#define pixman_image_set_clip_region(image, region) IPrefix->pixman_image_set_clip_region((image), (region)) 
#define pixman_image_set_clip_region32(image, region) IPrefix->pixman_image_set_clip_region32((image), (region)) 
#define pixman_image_set_has_client_clip(image, clien_clip) IPrefix->pixman_image_set_has_client_clip((image), (clien_clip)) 
#define pixman_image_set_transform(image, transform) IPrefix->pixman_image_set_transform((image), (transform)) 
#define pixman_image_set_repeat(image, repeat) IPrefix->pixman_image_set_repeat((image), (repeat)) 
#define pixman_image_set_filter(image, filter, filter_params, n_filter_params) IPrefix->pixman_image_set_filter((image), (filter), (filter_params), (n_filter_params)) 
#define pixman_image_set_source_clipping(image, source_clipping) IPrefix->pixman_image_set_source_clipping((image), (source_clipping)) 
#define pixman_image_set_alpha_map(image, alpha_map, x, y) IPrefix->pixman_image_set_alpha_map((image), (alpha_map), (x), (y)) 
#define pixman_image_set_component_alpha(image, component_alpha) IPrefix->pixman_image_set_component_alpha((image), (component_alpha)) 
#define pixman_image_get_component_alpha(image) IPrefix->pixman_image_get_component_alpha((image)) 
#define pixman_image_set_accessors(image, read_func, write_func) IPrefix->pixman_image_set_accessors((image), (read_func), (write_func)) 
#define pixman_image_set_indexed(image, indexed) IPrefix->pixman_image_set_indexed((image), (indexed)) 
#define pixman_image_get_data(image) IPrefix->pixman_image_get_data((image)) 
#define pixman_image_get_width(image) IPrefix->pixman_image_get_width((image)) 
#define pixman_image_get_height(image) IPrefix->pixman_image_get_height((image)) 
#define pixman_image_get_stride(image) IPrefix->pixman_image_get_stride((image)) 
#define pixman_image_get_depth(image) IPrefix->pixman_image_get_depth((image)) 
#define pixman_image_get_format(image) IPrefix->pixman_image_get_format((image)) 
#define pixman_image_fill_rectangles(op, image, color, n_rects, rects) IPrefix->pixman_image_fill_rectangles((op), (image), (color), (n_rects), (rects)) 
#define pixman_image_fill_boxes(op, dest, color, n_boxes, boxes) IPrefix->pixman_image_fill_boxes((op), (dest), (color), (n_boxes), (boxes)) 
#define pixman_compute_composite_region(region, src_image, mask_image, dest_image, src_x, src_y, mask_x, mask_y, dest_x, dest_y, width, height) IPrefix->pixman_compute_composite_region((region), (src_image), (mask_image), (dest_image), (src_x), (src_y), (mask_x), (mask_y), (dest_x), (dest_y), (width), (height)) 
#define pixman_image_composite(op, src, mask, dest, src_x, src_y, mask_x, mask_y, dest_x, dest_y, width, height) IPrefix->pixman_image_composite((op), (src), (mask), (dest), (src_x), (src_y), (mask_x), (mask_y), (dest_x), (dest_y), (width), (height)) 
#define pixman_image_composite32(op, src, mask, dest, src_x, src_y, mask_x, mask_y, dest_x, dest_y, width, height) IPrefix->pixman_image_composite32((op), (src), (mask), (dest), (src_x), (src_y), (mask_x), (mask_y), (dest_x), (dest_y), (width), (height)) 
#define pixman_disable_out_of_bounds_workaround() IPrefix->pixman_disable_out_of_bounds_workaround() 
#define pixman_glyph_cache_create() IPrefix->pixman_glyph_cache_create() 
#define pixman_glyph_cache_destroy(cache) IPrefix->pixman_glyph_cache_destroy((cache)) 
#define pixman_glyph_cache_freeze(cache) IPrefix->pixman_glyph_cache_freeze((cache)) 
#define pixman_glyph_cache_thaw(cache) IPrefix->pixman_glyph_cache_thaw((cache)) 
#define pixman_glyph_cache_lookup(cache, font_key, glyph_key) IPrefix->pixman_glyph_cache_lookup((cache), (font_key), (glyph_key)) 
#define pixman_glyph_cache_insert(cache, font_key, glyph_key, origin_x, origin_y, glyph_image) IPrefix->pixman_glyph_cache_insert((cache), (font_key), (glyph_key), (origin_x), (origin_y), (glyph_image)) 
#define pixman_glyph_cache_remove(cache, font_key, glyph_key) IPrefix->pixman_glyph_cache_remove((cache), (font_key), (glyph_key)) 
#define pixman_glyph_get_extents(cache, n_glyphs, glyphs, extents) IPrefix->pixman_glyph_get_extents((cache), (n_glyphs), (glyphs), (extents)) 
#define pixman_glyph_get_mask_format(cache, n_glyphs, glyphs) IPrefix->pixman_glyph_get_mask_format((cache), (n_glyphs), (glyphs)) 
#define pixman_composite_glyphs(op, src, dest, mask_format, src_x, src_y, mask_x, mask_y, dest_x, dest_y, width, height, cache, n_glyphs, glyphs) IPrefix->pixman_composite_glyphs((op), (src), (dest), (mask_format), (src_x), (src_y), (mask_x), (mask_y), (dest_x), (dest_y), (width), (height), (cache), (n_glyphs), (glyphs)) 
#define pixman_composite_glyphs_no_mask(op, src, dest, src_x, src_y, dest_x, dest_y, cache, n_glyphs, glyphs) IPrefix->pixman_composite_glyphs_no_mask((op), (src), (dest), (src_x), (src_y), (dest_x), (dest_y), (cache), (n_glyphs), (glyphs)) 
#define pixman_sample_ceil_y(y, bpp) IPrefix->pixman_sample_ceil_y((y), (bpp)) 
#define pixman_sample_floor_y(y, bpp) IPrefix->pixman_sample_floor_y((y), (bpp)) 
#define pixman_edge_step(e, n) IPrefix->pixman_edge_step((e), (n)) 
#define pixman_edge_init(e, bpp, y_start, x_top, y_top, x_bot, y_bot) IPrefix->pixman_edge_init((e), (bpp), (y_start), (x_top), (y_top), (x_bot), (y_bot)) 
#define pixman_line_fixed_edge_init(e, bpp, y, line, x_off, y_off) IPrefix->pixman_line_fixed_edge_init((e), (bpp), (y), (line), (x_off), (y_off)) 
#define pixman_rasterize_edges(image, l, r, t, b) IPrefix->pixman_rasterize_edges((image), (l), (r), (t), (b)) 
#define pixman_add_traps(image, x_off, y_off, ntrap, traps) IPrefix->pixman_add_traps((image), (x_off), (y_off), (ntrap), (traps)) 
#define pixman_add_trapezoids(image, x_off, y_off, ntraps, traps) IPrefix->pixman_add_trapezoids((image), (x_off), (y_off), (ntraps), (traps)) 
#define pixman_rasterize_trapezoid(image, trap, x_off, y_off) IPrefix->pixman_rasterize_trapezoid((image), (trap), (x_off), (y_off)) 
#define pixman_composite_trapezoids(op, src, dst, mask_format, x_src, y_src, x_dst, y_dst, n_traps, traps) IPrefix->pixman_composite_trapezoids((op), (src), (dst), (mask_format), (x_src), (y_src), (x_dst), (y_dst), (n_traps), (traps)) 
#define pixman_composite_triangles(op, src, dst, mask_format, x_src, y_src, x_dst, y_dst, n_tris, tris) IPrefix->pixman_composite_triangles((op), (src), (dst), (mask_format), (x_src), (y_src), (x_dst), (y_dst), (n_tris), (tris)) 
#define pixman_add_triangles(image, x_off, y_off, n_tris, tris) IPrefix->pixman_add_triangles((image), (x_off), (y_off), (n_tris), (tris)) 

#endif /* INLINE4_PIXMAN_H */
