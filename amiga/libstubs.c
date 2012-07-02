#include <stdarg.h>
#include <exec/exec.h>
#include <pixman.h>
#include <proto/exec.h>
#include <proto/pixman.h>

void pixman_add_trapezoids(
        pixman_image_t * image,
        int16_t x_off,
        int y_off,
        int ntraps,
       const pixman_trapezoid_t * traps)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_add_trapezoids(image, x_off, y_off, ntraps, traps);
}

void pixman_add_traps(
        pixman_image_t * image,
        int16_t x_off,
        int16_t y_off,
        int ntrap,
        pixman_trap_t * traps)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_add_traps(image, x_off, y_off, ntrap, traps);
}

void pixman_add_triangles(
        pixman_image_t * image,
        int32_t x_off,
        int32_t y_off,
        int n_tris,
       const pixman_triangle_t * tris)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_add_triangles(image, x_off, y_off, n_tris, tris);
}

pixman_bool_t pixman_blt(
        uint32_t * src_bits,
        uint32_t * dst_bits,
        int src_stride,
        int dst_stride,
        int src_bpp,
        int dst_bpp,
        int src_x,
        int src_y,
        int dest_x,
        int dest_y,
        int width,
        int height)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_blt(src_bits, dst_bits, src_stride, dst_stride, src_bpp, dst_bpp, src_x, src_y, dest_x, dest_y, width, height);
}

void pixman_composite_glyphs(
        pixman_op_t op,
        pixman_image_t * src,
        pixman_image_t * dest,
        pixman_format_code_t mask_format,
        int32_t src_x,
        int32_t src_y,
        int32_t mask_x,
        int32_t mask_y,
        int32_t dest_x,
        int32_t dest_y,
        int32_t width,
        int32_t height,
        pixman_glyph_cache_t * cache,
        int n_glyphs,
        pixman_glyph_t * glyphs)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_composite_glyphs(op, src, dest, mask_format, src_x, src_y, mask_x, mask_y, dest_x, dest_y, width, height, cache, n_glyphs, glyphs);
}

void pixman_composite_glyphs_no_mask(
        pixman_op_t op,
        pixman_image_t * src,
        pixman_image_t * dest,
        int32_t src_x,
        int32_t src_y,
        int32_t dest_x,
        int32_t dest_y,
        pixman_glyph_cache_t * cache,
        int n_glyphs,
        pixman_glyph_t * glyphs)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_composite_glyphs_no_mask(op, src, dest, src_x, src_y, dest_x, dest_y, cache, n_glyphs, glyphs);
}

void pixman_composite_trapezoids(
        pixman_op_t op,
        pixman_image_t * src,
        pixman_image_t * dst,
        pixman_format_code_t mask_format,
        int x_src,
        int y_src,
        int x_dst,
        int y_dst,
        int n_traps,
       const pixman_trapezoid_t * traps)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_composite_trapezoids(op, src, dst, mask_format, x_src, y_src, x_dst, y_dst, n_traps, traps);
}

void pixman_composite_triangles(
        pixman_op_t op,
        pixman_image_t * src,
        pixman_image_t * dst,
        pixman_format_code_t mask_format,
        int x_src,
        int y_src,
        int x_dst,
        int y_dst,
        int n_tris,
       const pixman_triangle_t * tris)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_composite_triangles(op, src, dst, mask_format, x_src, y_src, x_dst, y_dst, n_tris, tris);
}

pixman_bool_t pixman_compute_composite_region(
        pixman_region16_t * region,
        pixman_image_t * src_image,
        pixman_image_t * mask_image,
        pixman_image_t * dest_image,
        int16_t src_x,
        int16_t src_y,
        int16_t mask_x,
        int16_t mask_y,
        int16_t dest_x,
        int16_t dest_y,
        uint16_t width,
        uint16_t height)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_compute_composite_region(region, src_image, mask_image, dest_image, src_x, src_y, mask_x, mask_y, dest_x, dest_y, width, height);
}

void pixman_disable_out_of_bounds_workaround(void)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_disable_out_of_bounds_workaround();
}

void pixman_edge_init(
        pixman_edge_t * e,
        int bpp,
        pixman_fixed_t y_start,
        pixman_fixed_t x_top,
        pixman_fixed_t y_top,
        pixman_fixed_t x_bot,
        pixman_fixed_t y_bot)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_edge_init(e, bpp, y_start, x_top, y_top, x_bot, y_bot);
}

void pixman_edge_step(
        pixman_edge_t * e,
        int n)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_edge_step(e, n);
}

pixman_bool_t pixman_fill(
        uint32_t * bits,
        int stride,
        int bpp,
        int x,
        int y,
        int width,
        int height,
        uint32_t _xor)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_fill(bits, stride, bpp, x, y, width, height, _xor);
}

pixman_bool_t pixman_format_supported_destination(
        pixman_format_code_t format)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_format_supported_destination(format);
}

pixman_bool_t pixman_format_supported_source(
        pixman_format_code_t format)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_format_supported_source(format);
}

pixman_bool_t pixman_f_transform_bounds(
       const struct pixman_f_transform * t,
        struct pixman_box16 * b)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_f_transform_bounds(t, b);
}

void pixman_f_transform_from_pixman_transform(
        struct pixman_f_transform * ft,
       const struct pixman_transform * t)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_f_transform_from_pixman_transform(ft, t);
}

void pixman_f_transform_init_identity(
        struct pixman_f_transform * t)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_f_transform_init_identity(t);
}

void pixman_f_transform_init_rotate(
        struct pixman_f_transform * t,
        double cos,
        double sin)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_f_transform_init_rotate(t, cos, sin);
}

void pixman_f_transform_init_scale(
        struct pixman_f_transform * t,
        double sx,
        double sy)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_f_transform_init_scale(t, sx, sy);
}

void pixman_f_transform_init_translate(
        struct pixman_f_transform * t,
        double tx,
        double ty)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_f_transform_init_translate(t, tx, ty);
}

pixman_bool_t pixman_f_transform_invert(
        struct pixman_f_transform * dst,
       const struct pixman_f_transform * src)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_f_transform_invert(dst, src);
}

void pixman_f_transform_multiply(
        struct pixman_f_transform * dst,
       const struct pixman_f_transform * l,
       const struct pixman_f_transform * r)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_f_transform_multiply(dst, l, r);
}

void pixman_f_transform_point_3d(
       const struct pixman_f_transform * t,
        struct pixman_f_vector * v)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_f_transform_point_3d(t, v);
}

pixman_bool_t pixman_f_transform_point(
       const struct pixman_f_transform * t,
        struct pixman_f_vector * v)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_f_transform_point(t, v);
}

pixman_bool_t pixman_f_transform_rotate(
        struct pixman_f_transform * forward,
        struct pixman_f_transform * reverse,
        double c,
        double s)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_f_transform_rotate(forward, reverse, c, s);
}

pixman_bool_t pixman_f_transform_scale(
        struct pixman_f_transform * forward,
        struct pixman_f_transform * reverse,
        double sx,
        double sy)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_f_transform_scale(forward, reverse, sx, sy);
}

pixman_bool_t pixman_f_transform_translate(
        struct pixman_f_transform * forward,
        struct pixman_f_transform * reverse,
        double tx,
        double ty)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_f_transform_translate(forward, reverse, tx, ty);
}

pixman_glyph_cache_t * pixman_glyph_cache_create(void)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_glyph_cache_create();
}

void pixman_glyph_cache_destroy(
        pixman_glyph_cache_t * cache)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_glyph_cache_destroy(cache);
}

void pixman_glyph_cache_freeze(
        pixman_glyph_cache_t * cache)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_glyph_cache_freeze(cache);
}

const void * pixman_glyph_cache_insert(
        pixman_glyph_cache_t * cache,
        void * font_key,
        void * glyph_key,
        int origin_x,
        int origin_y,
        pixman_image_t * glyph_image)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_glyph_cache_insert(cache, font_key, glyph_key, origin_x, origin_y, glyph_image);
}

const void * pixman_glyph_cache_lookup(
        pixman_glyph_cache_t * cache,
        void * font_key,
        void * glyph_key)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_glyph_cache_lookup(cache, font_key, glyph_key);
}

void pixman_glyph_cache_remove(
        pixman_glyph_cache_t * cache,
        void * font_key,
        void * glyph_key)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_glyph_cache_remove(cache, font_key, glyph_key);
}

void pixman_glyph_cache_thaw(
        pixman_glyph_cache_t * cache)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_glyph_cache_thaw(cache);
}

void pixman_glyph_get_extents(
        pixman_glyph_cache_t * cache,
        int n_glyphs,
        pixman_glyph_t * glyphs,
        pixman_box32_t * extents)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_glyph_get_extents(cache, n_glyphs, glyphs, extents);
}

pixman_format_code_t pixman_glyph_get_mask_format(
        pixman_glyph_cache_t * cache,
        int n_glyphs,
        pixman_glyph_t * glyphs)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_glyph_get_mask_format(cache, n_glyphs, glyphs);
}

void pixman_image_composite32(
        pixman_op_t op,
        pixman_image_t * src,
        pixman_image_t * mask,
        pixman_image_t * dest,
        int32_t src_x,
        int32_t src_y,
        int32_t mask_x,
        int32_t mask_y,
        int32_t dest_x,
        int32_t dest_y,
        int32_t width,
        int32_t height)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_image_composite32(op, src, mask, dest, src_x, src_y, mask_x, mask_y, dest_x, dest_y, width, height);
}

void pixman_image_composite(
        pixman_op_t op,
        pixman_image_t * src,
        pixman_image_t * mask,
        pixman_image_t * dest,
        int16_t src_x,
        int16_t src_y,
        int16_t mask_x,
        int16_t mask_y,
        int16_t dest_x,
        int16_t dest_y,
        uint16_t width,
        uint16_t height)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_image_composite(op, src, mask, dest, src_x, src_y, mask_x, mask_y, dest_x, dest_y, width, height);
}

pixman_image_t * pixman_image_create_bits(
        pixman_format_code_t format,
        int width,
        int height,
        uint32_t * bits,
        int rowstride_bytes)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_create_bits(format, width, height, bits, rowstride_bytes);
}

pixman_image_t * pixman_image_create_conical_gradient(
        pixman_point_fixed_t * center,
        pixman_fixed_t angle,
       const pixman_gradient_stop_t * stops,
        int n_stops)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_create_conical_gradient(center, angle, stops, n_stops);
}

pixman_image_t * pixman_image_create_linear_gradient(
        pixman_point_fixed_t * p1,
        pixman_point_fixed_t * p2,
       const pixman_gradient_stop_t * stops,
        int n_stops)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_create_linear_gradient(p1, p2, stops, n_stops);
}

pixman_image_t * pixman_image_create_radial_gradient(
        pixman_point_fixed_t * inner,
        pixman_point_fixed_t * outer,
        pixman_fixed_t inner_radius,
        pixman_fixed_t outer_radius,
       const pixman_gradient_stop_t * stops,
        int n_stops)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_create_radial_gradient(inner, outer, inner_radius, outer_radius, stops, n_stops);
}

pixman_image_t * pixman_image_create_solid_fill(
        pixman_color_t * color)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_create_solid_fill(color);
}

pixman_bool_t pixman_image_fill_boxes(
        pixman_op_t op,
        pixman_image_t * dest,
        pixman_color_t * color,
        int n_boxes,
       const pixman_box32_t * boxes)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_fill_boxes(op, dest, color, n_boxes, boxes);
}

pixman_bool_t pixman_image_fill_rectangles(
        pixman_op_t op,
        pixman_image_t * image,
        pixman_color_t * color,
        int n_rects,
       const pixman_rectangle16_t * rects)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_fill_rectangles(op, image, color, n_rects, rects);
}

pixman_bool_t pixman_image_get_component_alpha(
        pixman_image_t * image)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_get_component_alpha(image);
}

uint32_t * pixman_image_get_data(
        pixman_image_t * image)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_get_data(image);
}

int pixman_image_get_depth(
        pixman_image_t * image)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_get_depth(image);
}

void * pixman_image_get_destroy_data(
        pixman_image_t * image)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_get_destroy_data(image);
}

pixman_format_code_t pixman_image_get_format(
        pixman_image_t * image)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_get_format(image);
}

int pixman_image_get_height(
        pixman_image_t * image)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_get_height(image);
}

int pixman_image_get_stride(
        pixman_image_t * image)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_get_stride(image);
}

int pixman_image_get_width(
        pixman_image_t * image)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_get_width(image);
}

pixman_image_t * pixman_image_ref(
        pixman_image_t * image)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_ref(image);
}

void pixman_image_set_accessors(
        pixman_image_t * image,
        pixman_read_memory_func_t read_func,
        pixman_write_memory_func_t write_func)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_image_set_accessors(image, read_func, write_func);
}

void pixman_image_set_alpha_map(
        pixman_image_t * image,
        pixman_image_t * alpha_map,
        int16_t x,
        int16_t y)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_image_set_alpha_map(image, alpha_map, x, y);
}

pixman_bool_t pixman_image_set_clip_region32(
        pixman_image_t * image,
        pixman_region32_t * region)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_set_clip_region32(image, region);
}

pixman_bool_t pixman_image_set_clip_region(
        pixman_image_t * image,
        pixman_region16_t * region)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_set_clip_region(image, region);
}

void pixman_image_set_component_alpha(
        pixman_image_t * image,
        pixman_bool_t component_alpha)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_image_set_component_alpha(image, component_alpha);
}

void pixman_image_set_destroy_function(
        pixman_image_t * image,
        pixman_image_destroy_func_t function,
        void * data)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_image_set_destroy_function(image, function, data);
}

pixman_bool_t pixman_image_set_filter(
        pixman_image_t * image,
        pixman_filter_t filter,
       const pixman_fixed_t * filter_params,
        int n_filter_params)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_set_filter(image, filter, filter_params, n_filter_params);
}

void pixman_image_set_has_client_clip(
        pixman_image_t * image,
        pixman_bool_t clien_clip)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_image_set_has_client_clip(image, clien_clip);
}

void pixman_image_set_indexed(
        pixman_image_t * image,
       const pixman_indexed_t * indexed)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_image_set_indexed(image, indexed);
}

void pixman_image_set_repeat(
        pixman_image_t * image,
        pixman_repeat_t repeat)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_image_set_repeat(image, repeat);
}

void pixman_image_set_source_clipping(
        pixman_image_t * image,
        pixman_bool_t source_clipping)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_image_set_source_clipping(image, source_clipping);
}

pixman_bool_t pixman_image_set_transform(
        pixman_image_t * image,
       const pixman_transform_t * transform)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_set_transform(image, transform);
}

pixman_bool_t pixman_image_unref(
        pixman_image_t * image)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_image_unref(image);
}

void pixman_line_fixed_edge_init(
        pixman_edge_t * e,
        int bpp,
        pixman_fixed_t y,
       const pixman_line_fixed_t * line,
        int x_off,
        int y_off)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_line_fixed_edge_init(e, bpp, y, line, x_off, y_off);
}

void pixman_rasterize_edges(
        pixman_image_t * image,
        pixman_edge_t * l,
        pixman_edge_t * r,
        pixman_fixed_t t,
        pixman_fixed_t b)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_rasterize_edges(image, l, r, t, b);
}

void pixman_rasterize_trapezoid(
        pixman_image_t * image,
       const pixman_trapezoid_t * trap,
        int x_off,
        int y_off)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_rasterize_trapezoid(image, trap, x_off, y_off);
}

void pixman_region32_clear(
        pixman_region32_t * region)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region32_clear(region);
}

pixman_bool_t pixman_region32_contains_point(
        pixman_region32_t * region,
        int x,
        int y,
        pixman_box32_t * box)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_contains_point(region, x, y, box);
}

pixman_region_overlap_t pixman_region32_contains_rectangle(
        pixman_region32_t * region,
        pixman_box32_t * prect)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_contains_rectangle(region, prect);
}

pixman_bool_t pixman_region32_copy(
        pixman_region32_t * dest,
        pixman_region32_t * source)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_copy(dest, source);
}

pixman_bool_t pixman_region32_equal(
        pixman_region32_t * region1,
        pixman_region32_t * region2)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_equal(region1, region2);
}

pixman_box32_t * pixman_region32_extents(
        pixman_region32_t * region)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_extents(region);
}

void pixman_region32_fini(
        pixman_region32_t * region)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region32_fini(region);
}

void pixman_region32_init(
        pixman_region32_t * region)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region32_init(region);
}

void pixman_region32_init_from_image(
        pixman_region32_t * region,
        pixman_image_t * image)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region32_init_from_image(region, image);
}

void pixman_region32_init_rect(
        pixman_region32_t * region,
        int x,
        int y,
        unsigned width,
        unsigned height)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region32_init_rect(region, x, y, width, height);
}

pixman_bool_t pixman_region32_init_rects(
        pixman_region32_t * region,
       const pixman_box32_t * boxes,
        int count)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_init_rects(region, boxes, count);
}

void pixman_region32_init_with_extents(
        pixman_region32_t * region,
        pixman_box32_t * extents)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region32_init_with_extents(region, extents);
}

pixman_bool_t pixman_region32_intersect(
        pixman_region32_t * new_reg,
        pixman_region32_t * reg1,
        pixman_region32_t * reg2)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_intersect(new_reg, reg1, reg2);
}

pixman_bool_t pixman_region32_intersect_rect(
        pixman_region32_t * dest,
        pixman_region32_t * source,
        int x,
        int y,
        unsigned width,
        unsigned height)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_intersect_rect(dest, source, x, y, width, height);
}

pixman_bool_t pixman_region32_inverse(
        pixman_region32_t * new_reg,
        pixman_region32_t * reg1,
        pixman_box32_t * inv_rect)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_inverse(new_reg, reg1, inv_rect);
}

pixman_bool_t pixman_region32_not_empty(
        pixman_region32_t * region)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_not_empty(region);
}

int pixman_region32_n_rects(
        pixman_region32_t * region)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_n_rects(region);
}

pixman_box32_t * pixman_region32_rectangles(
        pixman_region32_t * region,
        int * n_rects)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_rectangles(region, n_rects);
}

void pixman_region32_reset(
        pixman_region32_t * region,
        pixman_box32_t * box)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region32_reset(region, box);
}

pixman_bool_t pixman_region32_selfcheck(
        pixman_region32_t * region)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_selfcheck(region);
}

pixman_bool_t pixman_region32_subtract(
        pixman_region32_t * reg_d,
        pixman_region32_t * reg_m,
        pixman_region32_t * reg_s)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_subtract(reg_d, reg_m, reg_s);
}

void pixman_region32_translate(
        pixman_region32_t * region,
        int x,
        int y)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region32_translate(region, x, y);
}

pixman_bool_t pixman_region32_union(
        pixman_region32_t * new_reg,
        pixman_region32_t * reg1,
        pixman_region32_t * reg2)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_union(new_reg, reg1, reg2);
}

pixman_bool_t pixman_region32_union_rect(
        pixman_region32_t * dest,
        pixman_region32_t * source,
        int x,
        int y,
        unsigned width,
        unsigned height)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region32_union_rect(dest, source, x, y, width, height);
}

void pixman_region_clear(
        pixman_region16_t * region)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region_clear(region);
}

pixman_bool_t pixman_region_contains_point(
        pixman_region16_t * region,
        int x,
        int y,
        pixman_box16_t * box)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_contains_point(region, x, y, box);
}

pixman_region_overlap_t pixman_region_contains_rectangle(
        pixman_region16_t * region,
        pixman_box16_t * prect)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_contains_rectangle(region, prect);
}

pixman_bool_t pixman_region_copy(
        pixman_region16_t * dest,
        pixman_region16_t * source)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_copy(dest, source);
}

pixman_bool_t pixman_region_equal(
        pixman_region16_t * region1,
        pixman_region16_t * region2)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_equal(region1, region2);
}

pixman_box16_t * pixman_region_extents(
        pixman_region16_t * region)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_extents(region);
}

void pixman_region_fini(
        pixman_region16_t * region)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region_fini(region);
}

void pixman_region_init(
        pixman_region16_t * region)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region_init(region);
}

void pixman_region_init_from_image(
        pixman_region16_t * region,
        pixman_image_t * image)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region_init_from_image(region, image);
}

void pixman_region_init_rect(
        pixman_region16_t * region,
        int x,
        int y,
        unsigned width,
        unsigned height)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region_init_rect(region, x, y, width, height);
}

pixman_bool_t pixman_region_init_rects(
        pixman_region16_t * region,
       const pixman_box16_t * boxes,
        int count)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_init_rects(region, boxes, count);
}

void pixman_region_init_with_extents(
        pixman_region16_t * region,
        pixman_box16_t * extents)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region_init_with_extents(region, extents);
}

pixman_bool_t pixman_region_intersect(
        pixman_region16_t * new_reg,
        pixman_region16_t * reg1,
        pixman_region16_t * reg2)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_intersect(new_reg, reg1, reg2);
}

pixman_bool_t pixman_region_intersect_rect(
        pixman_region16_t * dest,
        pixman_region16_t * source,
        int x,
        int y,
        unsigned width,
        unsigned height)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_intersect_rect(dest, source, x, y, width, height);
}

pixman_bool_t pixman_region_inverse(
        pixman_region16_t * new_reg,
        pixman_region16_t * reg1,
        pixman_box16_t * inv_rect)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_inverse(new_reg, reg1, inv_rect);
}

pixman_bool_t pixman_region_not_empty(
        pixman_region16_t * region)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_not_empty(region);
}

int pixman_region_n_rects(
        pixman_region16_t * region)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_n_rects(region);
}

pixman_box16_t * pixman_region_rectangles(
        pixman_region16_t * region,
        int * n_rects)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_rectangles(region, n_rects);
}

void pixman_region_reset(
        pixman_region16_t * region,
        pixman_box16_t * box)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region_reset(region, box);
}

pixman_bool_t pixman_region_selfcheck(
        pixman_region16_t * region)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_selfcheck(region);
}

void pixman_region_set_static_pointers(
        pixman_box16_t * empty_box,
        pixman_region16_data_t * empty_data,
        pixman_region16_data_t * broken_data)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region_set_static_pointers(empty_box, empty_data, broken_data);
}

pixman_bool_t pixman_region_subtract(
        pixman_region16_t * reg_d,
        pixman_region16_t * reg_m,
        pixman_region16_t * reg_s)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_subtract(reg_d, reg_m, reg_s);
}

void pixman_region_translate(
        pixman_region16_t * region,
        int x,
        int y)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_region_translate(region, x, y);
}

pixman_bool_t pixman_region_union(
        pixman_region16_t * new_reg,
        pixman_region16_t * reg1,
        pixman_region16_t * reg2)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_union(new_reg, reg1, reg2);
}

pixman_bool_t pixman_region_union_rect(
        pixman_region16_t * dest,
        pixman_region16_t * source,
        int x,
        int y,
        unsigned width,
        unsigned height)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_region_union_rect(dest, source, x, y, width, height);
}

pixman_fixed_t pixman_sample_ceil_y(
        pixman_fixed_t y,
        int bpp)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_sample_ceil_y(y, bpp);
}

pixman_fixed_t pixman_sample_floor_y(
        pixman_fixed_t y,
        int bpp)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_sample_floor_y(y, bpp);
}

pixman_bool_t pixman_transform_bounds(
       const struct pixman_transform * matrix,
        struct pixman_box16 * b)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_transform_bounds(matrix, b);
}

pixman_bool_t pixman_transform_from_pixman_f_transform(
        struct pixman_transform * t,
       const struct pixman_f_transform * ft)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_transform_from_pixman_f_transform(t, ft);
}

void pixman_transform_init_identity(
        struct pixman_transform * matrix)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_transform_init_identity(matrix);
}

void pixman_transform_init_rotate(
        struct pixman_transform * t,
        pixman_fixed_t cos,
        pixman_fixed_t sin)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_transform_init_rotate(t, cos, sin);
}

void pixman_transform_init_scale(
        struct pixman_transform * t,
        pixman_fixed_t sx,
        pixman_fixed_t sy)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_transform_init_scale(t, sx, sy);
}

void pixman_transform_init_translate(
        struct pixman_transform * t,
        pixman_fixed_t tx,
        pixman_fixed_t ty)
{
    extern struct PixmanIFace *IPixman;

    IPixman->pixman_transform_init_translate(t, tx, ty);
}

pixman_bool_t pixman_transform_invert(
        struct pixman_transform * dst,
       const struct pixman_transform * src)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_transform_invert(dst, src);
}

pixman_bool_t pixman_transform_is_identity(
       const struct pixman_transform * t)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_transform_is_identity(t);
}

pixman_bool_t pixman_transform_is_int_translate(
       const struct pixman_transform * t)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_transform_is_int_translate(t);
}

pixman_bool_t pixman_transform_is_inverse(
       const struct pixman_transform * a,
       const struct pixman_transform * b)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_transform_is_inverse(a, b);
}

pixman_bool_t pixman_transform_is_scale(
       const struct pixman_transform * t)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_transform_is_scale(t);
}

pixman_bool_t pixman_transform_multiply(
        struct pixman_transform * dst,
       const struct pixman_transform * l,
       const struct pixman_transform * r)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_transform_multiply(dst, l, r);
}

pixman_bool_t pixman_transform_point_3d(
       const struct pixman_transform * transform,
        struct pixman_vector * vector)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_transform_point_3d(transform, vector);
}

pixman_bool_t pixman_transform_point(
       const struct pixman_transform * transform,
        struct pixman_vector * vector)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_transform_point(transform, vector);
}

pixman_bool_t pixman_transform_rotate(
        struct pixman_transform * forward,
        struct pixman_transform * reverse,
        pixman_fixed_t c,
        pixman_fixed_t s)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_transform_rotate(forward, reverse, c, s);
}

pixman_bool_t pixman_transform_scale(
        struct pixman_transform * forward,
        struct pixman_transform * reverse,
        pixman_fixed_t sx,
        pixman_fixed_t sy)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_transform_scale(forward, reverse, sx, sy);
}

pixman_bool_t pixman_transform_translate(
        struct pixman_transform * forward,
        struct pixman_transform * reverse,
        pixman_fixed_t tx,
        pixman_fixed_t ty)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_transform_translate(forward, reverse, tx, ty);
}

int pixman_version(void)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_version();
}

const char * pixman_version_string(void)
{
    extern struct PixmanIFace *IPixman;

    return IPixman->pixman_version_string();
}
