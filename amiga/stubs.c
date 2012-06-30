/* :ts=4
 *  $VER: pixman_add_trapezoids.c $Revision$ (30-Jun-2012)
 *
 *  This file is part of pixman.
 *
 */


#include <exec/exec.h>
#include <proto/exec.h>
#include <dos/dos.h>
#include <pixman.h>
#include <proto/pixman.h>
#include <stdarg.h>

/****** pixman/main/pixman_add_trapezoids ******************************************
*
*   NAME
*      pixman_add_trapezoids -- Description
*
*   SYNOPSIS
*      void pixman_add_trapezoids( pixman_image_t * image,  int16_t x_off, 
*           int y_off,  int ntraps, const pixman_trapezoid_t * traps);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       x_off - 
*       y_off - 
*       ntraps - 
*       traps - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_add_trapezoids(struct PixmanIFace *Self,
        pixman_image_t * image,
        int16_t x_off,
        int y_off,
        int ntraps,
       const pixman_trapezoid_t * traps)
{
  pixman_add_trapezoids(image, x_off, y_off, ntraps, traps);
}

/****** pixman/main/pixman_add_traps ******************************************
*
*   NAME
*      pixman_add_traps -- Description
*
*   SYNOPSIS
*      void pixman_add_traps( pixman_image_t * image,  int16_t x_off, 
*           int16_t y_off,  int ntrap,  pixman_trap_t * traps);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       x_off - 
*       y_off - 
*       ntrap - 
*       traps - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_add_traps(struct PixmanIFace *Self,
        pixman_image_t * image,
        int16_t x_off,
        int16_t y_off,
        int ntrap,
        pixman_trap_t * traps)
{
  pixman_add_traps(image, x_off, y_off, ntrap, traps);
}

/****** pixman/main/pixman_add_triangles ******************************************
*
*   NAME
*      pixman_add_triangles -- Description
*
*   SYNOPSIS
*      void pixman_add_triangles( pixman_image_t * image,  int32_t x_off, 
*           int32_t y_off,  int n_tris, const pixman_triangle_t * tris);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       x_off - 
*       y_off - 
*       n_tris - 
*       tris - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_add_triangles(struct PixmanIFace *Self,
        pixman_image_t * image,
        int32_t x_off,
        int32_t y_off,
        int n_tris,
       const pixman_triangle_t * tris)
{
  pixman_add_triangles(image, x_off, y_off, n_tris, tris);
}

/****** pixman/main/pixman_blt ******************************************
*
*   NAME
*      pixman_blt -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_blt( uint32_t * src_bits,  uint32_t * dst_bits, 
*           int src_stride,  int dst_stride,  int src_bpp,  int dst_bpp, 
*           int src_x,  int src_y,  int dest_x,  int dest_y,  int width, 
*           int height);
*
*   FUNCTION
*
*   INPUTS
*       src_bits - 
*       dst_bits - 
*       src_stride - 
*       dst_stride - 
*       src_bpp - 
*       dst_bpp - 
*       src_x - 
*       src_y - 
*       dest_x - 
*       dest_y - 
*       width - 
*       height - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_blt(struct PixmanIFace *Self,
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
  return pixman_blt(src_bits, dst_bits, src_stride, dst_stride, src_bpp, dst_bpp, src_x, src_y, dest_x, dest_y, width, height);
}

/****** pixman/main/pixman_composite_glyphs ******************************************
*
*   NAME
*      pixman_composite_glyphs -- Description
*
*   SYNOPSIS
*      void pixman_composite_glyphs( pixman_op_t op,  pixman_image_t * src, 
*           pixman_image_t * dest,  pixman_format_code_t mask_format, 
*           int32_t src_x,  int32_t src_y,  int32_t mask_x,  int32_t mask_y, 
*           int32_t dest_x,  int32_t dest_y,  int32_t width, 
*           int32_t height,  pixman_glyph_cache_t * cache,  int n_glyphs, 
*           pixman_glyph_t * glyphs);
*
*   FUNCTION
*
*   INPUTS
*       op - 
*       src - 
*       dest - 
*       mask_format - 
*       src_x - 
*       src_y - 
*       mask_x - 
*       mask_y - 
*       dest_x - 
*       dest_y - 
*       width - 
*       height - 
*       cache - 
*       n_glyphs - 
*       glyphs - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_composite_glyphs(struct PixmanIFace *Self,
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
  pixman_composite_glyphs(op, src, dest, mask_format, src_x, src_y, mask_x, mask_y, dest_x, dest_y, width, height, cache, n_glyphs, glyphs);
}

/****** pixman/main/pixman_composite_glyphs_no_mask ******************************************
*
*   NAME
*      pixman_composite_glyphs_no_mask -- Description
*
*   SYNOPSIS
*      void pixman_composite_glyphs_no_mask( pixman_op_t op, 
*           pixman_image_t * src,  pixman_image_t * dest,  int32_t src_x, 
*           int32_t src_y,  int32_t dest_x,  int32_t dest_y, 
*           pixman_glyph_cache_t * cache,  int n_glyphs, 
*           pixman_glyph_t * glyphs);
*
*   FUNCTION
*
*   INPUTS
*       op - 
*       src - 
*       dest - 
*       src_x - 
*       src_y - 
*       dest_x - 
*       dest_y - 
*       cache - 
*       n_glyphs - 
*       glyphs - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_composite_glyphs_no_mask(struct PixmanIFace *Self,
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
  pixman_composite_glyphs_no_mask(op, src, dest, src_x, src_y, dest_x, dest_y, cache, n_glyphs, glyphs);
}

/****** pixman/main/pixman_composite_trapezoids ******************************************
*
*   NAME
*      pixman_composite_trapezoids -- Description
*
*   SYNOPSIS
*      void pixman_composite_trapezoids( pixman_op_t op, 
*           pixman_image_t * src,  pixman_image_t * dst, 
*           pixman_format_code_t mask_format,  int x_src,  int y_src, 
*           int x_dst,  int y_dst,  int n_traps, 
*          const pixman_trapezoid_t * traps);
*
*   FUNCTION
*
*   INPUTS
*       op - 
*       src - 
*       dst - 
*       mask_format - 
*       x_src - 
*       y_src - 
*       x_dst - 
*       y_dst - 
*       n_traps - 
*       traps - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_composite_trapezoids(struct PixmanIFace *Self,
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
  pixman_composite_trapezoids(op, src, dst, mask_format, x_src, y_src, x_dst, y_dst, n_traps, traps);
}

/****** pixman/main/pixman_composite_triangles ******************************************
*
*   NAME
*      pixman_composite_triangles -- Description
*
*   SYNOPSIS
*      void pixman_composite_triangles( pixman_op_t op,
*           pixman_image_t * src,  pixman_image_t * dst, 
*           pixman_format_code_t mask_format,  int x_src,  int y_src, 
*           int x_dst,  int y_dst,  int n_tris, 
*          const pixman_triangle_t * tris);
*
*   FUNCTION
*
*   INPUTS
*       op - 
*       src - 
*       dst - 
*       mask_format - 
*       x_src - 
*       y_src - 
*       x_dst - 
*       y_dst - 
*       n_tris - 
*       tris - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_composite_triangles(struct PixmanIFace *Self,
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
  pixman_composite_triangles(op, src, dst, mask_format, x_src, y_src, x_dst, y_dst, n_tris, tris);
}

/****** pixman/main/pixman_compute_composite_region ******************************************
*
*   NAME
*      pixman_compute_composite_region -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_compute_composite_region(
*           pixman_region16_t * region,  pixman_image_t * src_image, 
*           pixman_image_t * mask_image,  pixman_image_t * dest_image, 
*           int16_t src_x,  int16_t src_y,  int16_t mask_x,  int16_t mask_y, 
*           int16_t dest_x,  int16_t dest_y,  uint16_t width, 
*           uint16_t height);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       src_image - 
*       mask_image - 
*       dest_image - 
*       src_x - 
*       src_y - 
*       mask_x - 
*       mask_y - 
*       dest_x - 
*       dest_y - 
*       width - 
*       height - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_compute_composite_region(struct PixmanIFace *Self,
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
  return pixman_compute_composite_region(region, src_image, mask_image, dest_image, src_x, src_y, mask_x, mask_y, dest_x, dest_y, width, height);
}

/****** pixman/main/pixman_disable_out_of_bounds_workaround ******************************************
*
*   NAME
*      pixman_disable_out_of_bounds_workaround -- Description
*
*   SYNOPSIS
*      void pixman_disable_out_of_bounds_workaround(void);
*
*   FUNCTION
*
*   INPUTS
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_disable_out_of_bounds_workaround(struct PixmanIFace *Self)
{
  pixman_disable_out_of_bounds_workaround();
}

/****** pixman/main/pixman_edge_init ******************************************
*
*   NAME
*      pixman_edge_init -- Description
*
*   SYNOPSIS
*      void pixman_edge_init( pixman_edge_t * e,  int bpp,
*           pixman_fixed_t y_start,  pixman_fixed_t x_top,
*           pixman_fixed_t y_top,  pixman_fixed_t x_bot, 
*           pixman_fixed_t y_bot);
*
*   FUNCTION
*
*   INPUTS
*       e - 
*       bpp - 
*       y_start - 
*       x_top - 
*       y_top - 
*       x_bot - 
*       y_bot - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_edge_init(struct PixmanIFace *Self,
        pixman_edge_t * e,
        int bpp,
        pixman_fixed_t y_start,
        pixman_fixed_t x_top,
        pixman_fixed_t y_top,
        pixman_fixed_t x_bot,
        pixman_fixed_t y_bot)
{
  pixman_edge_init(e, bpp, y_start, x_top, y_top, x_bot, y_bot);
}

/****** pixman/main/pixman_edge_step ******************************************
*
*   NAME
*      pixman_edge_step -- Description
*
*   SYNOPSIS
*      void pixman_edge_step( pixman_edge_t * e,  int n);
*
*   FUNCTION
*
*   INPUTS
*       e - 
*       n - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_edge_step(struct PixmanIFace *Self,
        pixman_edge_t * e,
        int n)
{
  pixman_edge_step(e, n);
}

/****** pixman/main/pixman_fill ******************************************
*
*   NAME
*      pixman_fill -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_fill( uint32_t * bits,  int stride,  int bpp, 
*           int x,  int y,  int width,  int height,  uint32_t _xor);
*
*   FUNCTION
*
*   INPUTS
*       bits - 
*       stride - 
*       bpp - 
*       x - 
*       y - 
*       width - 
*       height - 
*       _xor - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_fill(struct PixmanIFace *Self,
        uint32_t * bits,
        int stride,
        int bpp,
        int x,
        int y,
        int width,
        int height,
        uint32_t _xor)
{
  return pixman_fill(bits, stride, bpp, x, y, width, height, _xor);
}

/****** pixman/main/pixman_format_supported_destination ******************************************
*
*   NAME
*      pixman_format_supported_destination -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_format_supported_destination(
*           pixman_format_code_t format);
*
*   FUNCTION
*
*   INPUTS
*       format - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_format_supported_destination(struct PixmanIFace *Self,
        pixman_format_code_t format)
{
  return pixman_format_supported_destination(format);
}

/****** pixman/main/pixman_format_supported_source ******************************************
*
*   NAME
*      pixman_format_supported_source -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_format_supported_source(
*           pixman_format_code_t format);
*
*   FUNCTION
*
*   INPUTS
*       format - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_format_supported_source(struct PixmanIFace *Self,
        pixman_format_code_t format)
{
  return pixman_format_supported_source(format);
}

/****** pixman/main/pixman_f_transform_bounds ******************************************
*
*   NAME
*      pixman_f_transform_bounds -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_f_transform_bounds(
*          const struct pixman_f_transform * t,  struct pixman_box16 * b);
*
*   FUNCTION
*
*   INPUTS
*       t - 
*       b - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_f_transform_bounds(struct PixmanIFace *Self,
       const struct pixman_f_transform * t,
        struct pixman_box16 * b)
{
  return pixman_f_transform_bounds(t, b);
}

/****** pixman/main/pixman_f_transform_from_pixman_transform ******************************************
*
*   NAME
*      pixman_f_transform_from_pixman_transform -- Description
*
*   SYNOPSIS
*      void pixman_f_transform_from_pixman_transform(
*           struct pixman_f_transform * ft,
*          const struct pixman_transform * t);
*
*   FUNCTION
*
*   INPUTS
*       ft - 
*       t - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_f_transform_from_pixman_transform(struct PixmanIFace *Self,
        struct pixman_f_transform * ft,
       const struct pixman_transform * t)
{
  pixman_f_transform_from_pixman_transform(ft, t);
}

/****** pixman/main/pixman_f_transform_init_identity ******************************************
*
*   NAME
*      pixman_f_transform_init_identity -- Description
*
*   SYNOPSIS
*      void pixman_f_transform_init_identity( struct pixman_f_transform * t);
*
*   FUNCTION
*
*   INPUTS
*       t - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_f_transform_init_identity(struct PixmanIFace *Self,
        struct pixman_f_transform * t)
{
  pixman_f_transform_init_identity(t);
}

/****** pixman/main/pixman_f_transform_init_rotate ******************************************
*
*   NAME
*      pixman_f_transform_init_rotate -- Description
*
*   SYNOPSIS
*      void pixman_f_transform_init_rotate( struct pixman_f_transform * t, 
*           double cos,  double sin);
*
*   FUNCTION
*
*   INPUTS
*       t - 
*       cos - 
*       sin - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_f_transform_init_rotate(struct PixmanIFace *Self,
        struct pixman_f_transform * t,
        double cos,
        double sin)
{
  pixman_f_transform_init_rotate(t, cos, sin);
}

/****** pixman/main/pixman_f_transform_init_scale ******************************************
*
*   NAME
*      pixman_f_transform_init_scale -- Description
*
*   SYNOPSIS
*      void pixman_f_transform_init_scale( struct pixman_f_transform * t,
*           double sx,  double sy);
*
*   FUNCTION
*
*   INPUTS
*       t - 
*       sx - 
*       sy - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_f_transform_init_scale(struct PixmanIFace *Self,
        struct pixman_f_transform * t,
        double sx,
        double sy)
{
  pixman_f_transform_init_scale(t, sx, sy);
}

/****** pixman/main/pixman_f_transform_init_translate ******************************************
*
*   NAME
*      pixman_f_transform_init_translate -- Description
*
*   SYNOPSIS
*      void pixman_f_transform_init_translate(
*           struct pixman_f_transform * t,  double tx,  double ty);
*
*   FUNCTION
*
*   INPUTS
*       t - 
*       tx - 
*       ty - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_f_transform_init_translate(struct PixmanIFace *Self,
        struct pixman_f_transform * t,
        double tx,
        double ty)
{
  pixman_f_transform_init_translate(t, tx, ty);
}

/****** pixman/main/pixman_f_transform_invert ******************************************
*
*   NAME
*      pixman_f_transform_invert -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_f_transform_invert(
*           struct pixman_f_transform * dst, 
*          const struct pixman_f_transform * src);
*
*   FUNCTION
*
*   INPUTS
*       dst - 
*       src - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_f_transform_invert(struct PixmanIFace *Self,
        struct pixman_f_transform * dst,
       const struct pixman_f_transform * src)
{
  return pixman_f_transform_invert(dst, src);
}

/****** pixman/main/pixman_f_transform_multiply ******************************************
*
*   NAME
*      pixman_f_transform_multiply -- Description
*
*   SYNOPSIS
*      void pixman_f_transform_multiply( struct pixman_f_transform * dst,
*          const struct pixman_f_transform * l,
*          const struct pixman_f_transform * r);
*
*   FUNCTION
*
*   INPUTS
*       dst - 
*       l - 
*       r - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_f_transform_multiply(struct PixmanIFace *Self,
        struct pixman_f_transform * dst,
       const struct pixman_f_transform * l,
       const struct pixman_f_transform * r)
{
  pixman_f_transform_multiply(dst, l, r);
}

/****** pixman/main/pixman_f_transform_point_3d ******************************************
*
*   NAME
*      pixman_f_transform_point_3d -- Description
*
*   SYNOPSIS
*      void pixman_f_transform_point_3d(const struct pixman_f_transform * t, 
*           struct pixman_f_vector * v);
*
*   FUNCTION
*
*   INPUTS
*       t - 
*       v - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_f_transform_point_3d(struct PixmanIFace *Self,
       const struct pixman_f_transform * t,
        struct pixman_f_vector * v)
{
  pixman_f_transform_point_3d(t, v);
}

/****** pixman/main/pixman_f_transform_point ******************************************
*
*   NAME
*      pixman_f_transform_point -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_f_transform_point(
*          const struct pixman_f_transform * t,  struct pixman_f_vector * v);
*
*   FUNCTION
*
*   INPUTS
*       t - 
*       v - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_f_transform_point(struct PixmanIFace *Self,
       const struct pixman_f_transform * t,
        struct pixman_f_vector * v)
{
  return pixman_f_transform_point(t, v);
}

/****** pixman/main/pixman_f_transform_rotate ******************************************
*
*   NAME
*      pixman_f_transform_rotate -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_f_transform_rotate(
*           struct pixman_f_transform * forward, 
*           struct pixman_f_transform * reverse,  double c,  double s);
*
*   FUNCTION
*
*   INPUTS
*       forward - 
*       reverse - 
*       c - 
*       s - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_f_transform_rotate(struct PixmanIFace *Self,
        struct pixman_f_transform * forward,
        struct pixman_f_transform * reverse,
        double c,
        double s)
{
  return pixman_f_transform_rotate(forward, reverse, c, s);
}

/****** pixman/main/pixman_f_transform_scale ******************************************
*
*   NAME
*      pixman_f_transform_scale -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_f_transform_scale(
*           struct pixman_f_transform * forward, 
*           struct pixman_f_transform * reverse,  double sx,  double sy);
*
*   FUNCTION
*
*   INPUTS
*       forward - 
*       reverse - 
*       sx - 
*       sy - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_f_transform_scale(struct PixmanIFace *Self,
        struct pixman_f_transform * forward,
        struct pixman_f_transform * reverse,
        double sx,
        double sy)
{
  return pixman_f_transform_scale(forward, reverse, sx, sy);
}

/****** pixman/main/pixman_f_transform_translate ******************************************
*
*   NAME
*      pixman_f_transform_translate -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_f_transform_translate(
*           struct pixman_f_transform * forward, 
*           struct pixman_f_transform * reverse,  double tx,  double ty);
*
*   FUNCTION
*
*   INPUTS
*       forward - 
*       reverse - 
*       tx - 
*       ty - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_f_transform_translate(struct PixmanIFace *Self,
        struct pixman_f_transform * forward,
        struct pixman_f_transform * reverse,
        double tx,
        double ty)
{
  return pixman_f_transform_translate(forward, reverse, tx, ty);
}

/****** pixman/main/pixman_glyph_cache_create ******************************************
*
*   NAME
*      pixman_glyph_cache_create -- Description
*
*   SYNOPSIS
*      pixman_glyph_cache_t * pixman_glyph_cache_create(void);
*
*   FUNCTION
*
*   INPUTS
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_glyph_cache_t * _impl_pixman_glyph_cache_create(struct PixmanIFace *Self)
{
  return pixman_glyph_cache_create();
}

/****** pixman/main/pixman_glyph_cache_destroy ******************************************
*
*   NAME
*      pixman_glyph_cache_destroy -- Description
*
*   SYNOPSIS
*      void pixman_glyph_cache_destroy( pixman_glyph_cache_t * cache);
*
*   FUNCTION
*
*   INPUTS
*       cache - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_glyph_cache_destroy(struct PixmanIFace *Self,
        pixman_glyph_cache_t * cache)
{
  pixman_glyph_cache_destroy(cache);
}

/****** pixman/main/pixman_glyph_cache_freeze ******************************************
*
*   NAME
*      pixman_glyph_cache_freeze -- Description
*
*   SYNOPSIS
*      void pixman_glyph_cache_freeze( pixman_glyph_cache_t * cache);
*
*   FUNCTION
*
*   INPUTS
*       cache - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_glyph_cache_freeze(struct PixmanIFace *Self,
        pixman_glyph_cache_t * cache)
{
  pixman_glyph_cache_freeze(cache);
}

/****** pixman/main/pixman_glyph_cache_insert ******************************************
*
*   NAME
*      pixman_glyph_cache_insert -- Description
*
*   SYNOPSIS
*      const void * pixman_glyph_cache_insert( pixman_glyph_cache_t * cache, 
*           void * font_key,  void * glyph_key,  int origin_x, 
*           int origin_y,  pixman_image_t * glyph_image);
*
*   FUNCTION
*
*   INPUTS
*       cache - 
*       font_key - 
*       glyph_key - 
*       origin_x - 
*       origin_y - 
*       glyph_image - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

const void * _impl_pixman_glyph_cache_insert(struct PixmanIFace *Self,
        pixman_glyph_cache_t * cache,
        void * font_key,
        void * glyph_key,
        int origin_x,
        int origin_y,
        pixman_image_t * glyph_image)
{
  return pixman_glyph_cache_insert(cache, font_key, glyph_key, origin_x, origin_y, glyph_image);
}

/****** pixman/main/pixman_glyph_cache_lookup ******************************************
*
*   NAME
*      pixman_glyph_cache_lookup -- Description
*
*   SYNOPSIS
*      const void * pixman_glyph_cache_lookup( pixman_glyph_cache_t * cache, 
*           void * font_key,  void * glyph_key);
*
*   FUNCTION
*
*   INPUTS
*       cache - 
*       font_key - 
*       glyph_key - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

const void * _impl_pixman_glyph_cache_lookup(struct PixmanIFace *Self,
        pixman_glyph_cache_t * cache,
        void * font_key,
        void * glyph_key)
{
  return pixman_glyph_cache_lookup(cache, font_key, glyph_key);
}

/****** pixman/main/pixman_glyph_cache_remove ******************************************
*
*   NAME
*      pixman_glyph_cache_remove -- Description
*
*   SYNOPSIS
*      void pixman_glyph_cache_remove( pixman_glyph_cache_t * cache, 
*           void * font_key,  void * glyph_key);
*
*   FUNCTION
*
*   INPUTS
*       cache - 
*       font_key - 
*       glyph_key - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_glyph_cache_remove(struct PixmanIFace *Self,
        pixman_glyph_cache_t * cache,
        void * font_key,
        void * glyph_key)
{
  pixman_glyph_cache_remove(cache, font_key, glyph_key);
}

/****** pixman/main/pixman_glyph_cache_thaw ******************************************
*
*   NAME
*      pixman_glyph_cache_thaw -- Description
*
*   SYNOPSIS
*      void pixman_glyph_cache_thaw( pixman_glyph_cache_t * cache);
*
*   FUNCTION
*
*   INPUTS
*       cache - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_glyph_cache_thaw(struct PixmanIFace *Self,
        pixman_glyph_cache_t * cache)
{
  pixman_glyph_cache_thaw(cache);
}

/****** pixman/main/pixman_glyph_get_extents ******************************************
*
*   NAME
*      pixman_glyph_get_extents -- Description
*
*   SYNOPSIS
*      void pixman_glyph_get_extents( pixman_glyph_cache_t * cache, 
*           int n_glyphs,  pixman_glyph_t * glyphs, 
*           pixman_box32_t * extents);
*
*   FUNCTION
*
*   INPUTS
*       cache - 
*       n_glyphs - 
*       glyphs - 
*       extents - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_glyph_get_extents(struct PixmanIFace *Self,
        pixman_glyph_cache_t * cache,
        int n_glyphs,
        pixman_glyph_t * glyphs,
        pixman_box32_t * extents)
{
  pixman_glyph_get_extents(cache, n_glyphs, glyphs, extents);
}

/****** pixman/main/pixman_glyph_get_mask_format ******************************************
*
*   NAME
*      pixman_glyph_get_mask_format -- Description
*
*   SYNOPSIS
*      pixman_format_code_t pixman_glyph_get_mask_format(
*           pixman_glyph_cache_t * cache,  int n_glyphs, 
*           pixman_glyph_t * glyphs);
*
*   FUNCTION
*
*   INPUTS
*       cache - 
*       n_glyphs - 
*       glyphs - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_format_code_t _impl_pixman_glyph_get_mask_format(struct PixmanIFace *Self,
        pixman_glyph_cache_t * cache,
        int n_glyphs,
        pixman_glyph_t * glyphs)
{
  return pixman_glyph_get_mask_format(cache, n_glyphs, glyphs);
}

/****** pixman/main/pixman_image_composite32 ******************************************
*
*   NAME
*      pixman_image_composite32 -- Description
*
*   SYNOPSIS
*      void pixman_image_composite32( pixman_op_t op,  pixman_image_t * src, 
*           pixman_image_t * mask,  pixman_image_t * dest,  int32_t src_x, 
*           int32_t src_y,  int32_t mask_x,  int32_t mask_y, 
*           int32_t dest_x,  int32_t dest_y,  int32_t width, 
*           int32_t height);
*
*   FUNCTION
*
*   INPUTS
*       op - 
*       src - 
*       mask - 
*       dest - 
*       src_x - 
*       src_y - 
*       mask_x - 
*       mask_y - 
*       dest_x - 
*       dest_y - 
*       width - 
*       height - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_image_composite32(struct PixmanIFace *Self,
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
  pixman_image_composite32(op, src, mask, dest, src_x, src_y, mask_x, mask_y, dest_x, dest_y, width, height);
}

/****** pixman/main/pixman_image_composite ******************************************
*
*   NAME
*      pixman_image_composite -- Description
*
*   SYNOPSIS
*      void pixman_image_composite( pixman_op_t op,  pixman_image_t * src, 
*           pixman_image_t * mask,  pixman_image_t * dest,  int16_t src_x, 
*           int16_t src_y,  int16_t mask_x,  int16_t mask_y, 
*           int16_t dest_x,  int16_t dest_y,  uint16_t width, 
*           uint16_t height);
*
*   FUNCTION
*
*   INPUTS
*       op - 
*       src - 
*       mask - 
*       dest - 
*       src_x - 
*       src_y - 
*       mask_x - 
*       mask_y - 
*       dest_x - 
*       dest_y - 
*       width - 
*       height - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_image_composite(struct PixmanIFace *Self,
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
  pixman_image_composite(op, src, mask, dest, src_x, src_y, mask_x, mask_y, dest_x, dest_y, width, height);
}

/****** pixman/main/pixman_image_create_bits ******************************************
*
*   NAME
*      pixman_image_create_bits -- Description
*
*   SYNOPSIS
*      pixman_image_t * pixman_image_create_bits(
*           pixman_format_code_t format,  int width,  int height, 
*           uint32_t * bits,  int rowstride_bytes);
*
*   FUNCTION
*
*   INPUTS
*       format - 
*       width - 
*       height - 
*       bits - 
*       rowstride_bytes - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_image_t * _impl_pixman_image_create_bits(struct PixmanIFace *Self,
        pixman_format_code_t format,
        int width,
        int height,
        uint32_t * bits,
        int rowstride_bytes)
{
  return pixman_image_create_bits(format, width, height, bits, rowstride_bytes);
}

/****** pixman/main/pixman_image_create_conical_gradient ******************************************
*
*   NAME
*      pixman_image_create_conical_gradient -- Description
*
*   SYNOPSIS
*      pixman_image_t * pixman_image_create_conical_gradient(
*           pixman_point_fixed_t * center,  pixman_fixed_t angle, 
*          const pixman_gradient_stop_t * stops,  int n_stops);
*
*   FUNCTION
*
*   INPUTS
*       center - 
*       angle - 
*       stops - 
*       n_stops - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_image_t * _impl_pixman_image_create_conical_gradient(struct PixmanIFace *Self,
        pixman_point_fixed_t * center,
        pixman_fixed_t angle,
       const pixman_gradient_stop_t * stops,
        int n_stops)
{
  return pixman_image_create_conical_gradient(center, angle, stops, n_stops);
}

/****** pixman/main/pixman_image_create_linear_gradient ******************************************
*
*   NAME
*      pixman_image_create_linear_gradient -- Description
*
*   SYNOPSIS
*      pixman_image_t * pixman_image_create_linear_gradient(
*           pixman_point_fixed_t * p1,  pixman_point_fixed_t * p2, 
*          const pixman_gradient_stop_t * stops,  int n_stops);
*
*   FUNCTION
*
*   INPUTS
*       p1 - 
*       p2 - 
*       stops - 
*       n_stops - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_image_t * _impl_pixman_image_create_linear_gradient(struct PixmanIFace *Self,
        pixman_point_fixed_t * p1,
        pixman_point_fixed_t * p2,
       const pixman_gradient_stop_t * stops,
        int n_stops)
{
  return pixman_image_create_linear_gradient(p1, p2, stops, n_stops);
}

/****** pixman/main/pixman_image_create_radial_gradient ******************************************
*
*   NAME
*      pixman_image_create_radial_gradient -- Description
*
*   SYNOPSIS
*      pixman_image_t * pixman_image_create_radial_gradient(
*           pixman_point_fixed_t * inner,  pixman_point_fixed_t * outer, 
*           pixman_fixed_t inner_radius,  pixman_fixed_t outer_radius, 
*          const pixman_gradient_stop_t * stops,  int n_stops);
*
*   FUNCTION
*
*   INPUTS
*       inner - 
*       outer - 
*       inner_radius - 
*       outer_radius - 
*       stops - 
*       n_stops - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_image_t * _impl_pixman_image_create_radial_gradient(struct PixmanIFace *Self,
        pixman_point_fixed_t * inner,
        pixman_point_fixed_t * outer,
        pixman_fixed_t inner_radius,
        pixman_fixed_t outer_radius,
       const pixman_gradient_stop_t * stops,
        int n_stops)
{
  return pixman_image_create_radial_gradient(inner, outer, inner_radius, outer_radius, stops, n_stops);
}

/****** pixman/main/pixman_image_create_solid_fill ******************************************
*
*   NAME
*      pixman_image_create_solid_fill -- Description
*
*   SYNOPSIS
*      pixman_image_t * pixman_image_create_solid_fill(
*           pixman_color_t * color);
*
*   FUNCTION
*
*   INPUTS
*       color - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_image_t * _impl_pixman_image_create_solid_fill(struct PixmanIFace *Self,
        pixman_color_t * color)
{
  return pixman_image_create_solid_fill(color);
}

/****** pixman/main/pixman_image_fill_boxes ******************************************
*
*   NAME
*      pixman_image_fill_boxes -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_image_fill_boxes( pixman_op_t op, 
*           pixman_image_t * dest,  pixman_color_t * color,  int n_boxes, 
*          const pixman_box32_t * boxes);
*
*   FUNCTION
*
*   INPUTS
*       op - 
*       dest - 
*       color - 
*       n_boxes - 
*       boxes - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_image_fill_boxes(struct PixmanIFace *Self,
        pixman_op_t op,
        pixman_image_t * dest,
        pixman_color_t * color,
        int n_boxes,
       const pixman_box32_t * boxes)
{
  return pixman_image_fill_boxes(op, dest, color, n_boxes, boxes);
}

/****** pixman/main/pixman_image_fill_rectangles ******************************************
*
*   NAME
*      pixman_image_fill_rectangles -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_image_fill_rectangles( pixman_op_t op, 
*           pixman_image_t * image,  pixman_color_t * color,  int n_rects, 
*          const pixman_rectangle16_t * rects);
*
*   FUNCTION
*
*   INPUTS
*       op - 
*       image - 
*       color - 
*       n_rects - 
*       rects - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_image_fill_rectangles(struct PixmanIFace *Self,
        pixman_op_t op,
        pixman_image_t * image,
        pixman_color_t * color,
        int n_rects,
       const pixman_rectangle16_t * rects)
{
  return pixman_image_fill_rectangles(op, image, color, n_rects, rects);
}

/****** pixman/main/pixman_image_get_component_alpha ******************************************
*
*   NAME
*      pixman_image_get_component_alpha -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_image_get_component_alpha(
*           pixman_image_t * image);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_image_get_component_alpha(struct PixmanIFace *Self,
        pixman_image_t * image)
{
  return pixman_image_get_component_alpha(image);
}

/****** pixman/main/pixman_image_get_data ******************************************
*
*   NAME
*      pixman_image_get_data -- Description
*
*   SYNOPSIS
*      uint32_t * pixman_image_get_data( pixman_image_t * image);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

uint32_t * _impl_pixman_image_get_data(struct PixmanIFace *Self,
        pixman_image_t * image)
{
  return pixman_image_get_data(image);
}

/****** pixman/main/pixman_image_get_depth ******************************************
*
*   NAME
*      pixman_image_get_depth -- Description
*
*   SYNOPSIS
*      int pixman_image_get_depth( pixman_image_t * image);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

int _impl_pixman_image_get_depth(struct PixmanIFace *Self,
        pixman_image_t * image)
{
  return pixman_image_get_depth(image);
}

/****** pixman/main/pixman_image_get_destroy_data ******************************************
*
*   NAME
*      pixman_image_get_destroy_data -- Description
*
*   SYNOPSIS
*      void * pixman_image_get_destroy_data( pixman_image_t * image);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void * _impl_pixman_image_get_destroy_data(struct PixmanIFace *Self,
        pixman_image_t * image)
{
  return pixman_image_get_destroy_data(image);
}

/****** pixman/main/pixman_image_get_format ******************************************
*
*   NAME
*      pixman_image_get_format -- Description
*
*   SYNOPSIS
*      pixman_format_code_t pixman_image_get_format( pixman_image_t * image);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_format_code_t _impl_pixman_image_get_format(struct PixmanIFace *Self,
        pixman_image_t * image)
{
  return pixman_image_get_format(image);
}

/****** pixman/main/pixman_image_get_height ******************************************
*
*   NAME
*      pixman_image_get_height -- Description
*
*   SYNOPSIS
*      int pixman_image_get_height( pixman_image_t * image);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

int _impl_pixman_image_get_height(struct PixmanIFace *Self,
        pixman_image_t * image)
{
  return pixman_image_get_height(image);
}

/****** pixman/main/pixman_image_get_stride ******************************************
*
*   NAME
*      pixman_image_get_stride -- Description
*
*   SYNOPSIS
*      int pixman_image_get_stride( pixman_image_t * image);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

int _impl_pixman_image_get_stride(struct PixmanIFace *Self,
        pixman_image_t * image)
{
  return pixman_image_get_stride(image);
}

/****** pixman/main/pixman_image_get_width ******************************************
*
*   NAME
*      pixman_image_get_width -- Description
*
*   SYNOPSIS
*      int pixman_image_get_width( pixman_image_t * image);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

int _impl_pixman_image_get_width(struct PixmanIFace *Self,
        pixman_image_t * image)
{
  return pixman_image_get_width(image);
}

/****** pixman/main/pixman_image_ref ******************************************
*
*   NAME
*      pixman_image_ref -- Description
*
*   SYNOPSIS
*      pixman_image_t * pixman_image_ref( pixman_image_t * image);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_image_t * _impl_pixman_image_ref(struct PixmanIFace *Self,
        pixman_image_t * image)
{
  return pixman_image_ref(image);
}

/****** pixman/main/pixman_image_set_accessors ******************************************
*
*   NAME
*      pixman_image_set_accessors -- Description
*
*   SYNOPSIS
*      void pixman_image_set_accessors( pixman_image_t * image, 
*           pixman_read_memory_func_t read_func, 
*           pixman_write_memory_func_t write_func);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       read_func - 
*       write_func - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_image_set_accessors(struct PixmanIFace *Self,
        pixman_image_t * image,
        pixman_read_memory_func_t read_func,
        pixman_write_memory_func_t write_func)
{
  pixman_image_set_accessors(image, read_func, write_func);
}

/****** pixman/main/pixman_image_set_alpha_map ******************************************
*
*   NAME
*      pixman_image_set_alpha_map -- Description
*
*   SYNOPSIS
*      void pixman_image_set_alpha_map( pixman_image_t * image, 
*           pixman_image_t * alpha_map,  int16_t x,  int16_t y);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       alpha_map - 
*       x - 
*       y - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_image_set_alpha_map(struct PixmanIFace *Self,
        pixman_image_t * image,
        pixman_image_t * alpha_map,
        int16_t x,
        int16_t y)
{
  pixman_image_set_alpha_map(image, alpha_map, x, y);
}

/****** pixman/main/pixman_image_set_clip_region32 ******************************************
*
*   NAME
*      pixman_image_set_clip_region32 -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_image_set_clip_region32( pixman_image_t * image, 
*           pixman_region32_t * region);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       region - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_image_set_clip_region32(struct PixmanIFace *Self,
        pixman_image_t * image,
        pixman_region32_t * region)
{
  return pixman_image_set_clip_region32(image, region);
}

/****** pixman/main/pixman_image_set_clip_region ******************************************
*
*   NAME
*      pixman_image_set_clip_region -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_image_set_clip_region( pixman_image_t * image, 
*           pixman_region16_t * region);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       region - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_image_set_clip_region(struct PixmanIFace *Self,
        pixman_image_t * image,
        pixman_region16_t * region)
{
  return pixman_image_set_clip_region(image, region);
}

/****** pixman/main/pixman_image_set_component_alpha ******************************************
*
*   NAME
*      pixman_image_set_component_alpha -- Description
*
*   SYNOPSIS
*      void pixman_image_set_component_alpha( pixman_image_t * image, 
*           pixman_bool_t component_alpha);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       component_alpha - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_image_set_component_alpha(struct PixmanIFace *Self,
        pixman_image_t * image,
        pixman_bool_t component_alpha)
{
  pixman_image_set_component_alpha(image, component_alpha);
}

/****** pixman/main/pixman_image_set_destroy_function ******************************************
*
*   NAME
*      pixman_image_set_destroy_function -- Description
*
*   SYNOPSIS
*      void pixman_image_set_destroy_function( pixman_image_t * image, 
*           pixman_image_destroy_func_t function,  void * data);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       function - 
*       data - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_image_set_destroy_function(struct PixmanIFace *Self,
        pixman_image_t * image,
        pixman_image_destroy_func_t function,
        void * data)
{
  pixman_image_set_destroy_function(image, function, data);
}

/****** pixman/main/pixman_image_set_filter ******************************************
*
*   NAME
*      pixman_image_set_filter -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_image_set_filter( pixman_image_t * image, 
*           pixman_filter_t filter, const pixman_fixed_t * filter_params, 
*           int n_filter_params);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       filter - 
*       filter_params - 
*       n_filter_params - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_image_set_filter(struct PixmanIFace *Self,
        pixman_image_t * image,
        pixman_filter_t filter,
       const pixman_fixed_t * filter_params,
        int n_filter_params)
{
  return pixman_image_set_filter(image, filter, filter_params, n_filter_params);
}

/****** pixman/main/pixman_image_set_has_client_clip ******************************************
*
*   NAME
*      pixman_image_set_has_client_clip -- Description
*
*   SYNOPSIS
*      void pixman_image_set_has_client_clip( pixman_image_t * image, 
*           pixman_bool_t clien_clip);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       clien_clip - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_image_set_has_client_clip(struct PixmanIFace *Self,
        pixman_image_t * image,
        pixman_bool_t clien_clip)
{
  pixman_image_set_has_client_clip(image, clien_clip);
}

/****** pixman/main/pixman_image_set_indexed ******************************************
*
*   NAME
*      pixman_image_set_indexed -- Description
*
*   SYNOPSIS
*      void pixman_image_set_indexed( pixman_image_t * image, 
*          const pixman_indexed_t * indexed);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       indexed - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_image_set_indexed(struct PixmanIFace *Self,
        pixman_image_t * image,
       const pixman_indexed_t * indexed)
{
  pixman_image_set_indexed(image, indexed);
}

/****** pixman/main/pixman_image_set_repeat ******************************************
*
*   NAME
*      pixman_image_set_repeat -- Description
*
*   SYNOPSIS
*      void pixman_image_set_repeat( pixman_image_t * image, 
*           pixman_repeat_t repeat);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       repeat - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_image_set_repeat(struct PixmanIFace *Self,
        pixman_image_t * image,
        pixman_repeat_t repeat)
{
  pixman_image_set_repeat(image, repeat);
}

/****** pixman/main/pixman_image_set_source_clipping ******************************************
*
*   NAME
*      pixman_image_set_source_clipping -- Description
*
*   SYNOPSIS
*      void pixman_image_set_source_clipping( pixman_image_t * image, 
*           pixman_bool_t source_clipping);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       source_clipping - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_image_set_source_clipping(struct PixmanIFace *Self,
        pixman_image_t * image,
        pixman_bool_t source_clipping)
{
  pixman_image_set_source_clipping(image, source_clipping);
}

/****** pixman/main/pixman_image_set_transform ******************************************
*
*   NAME
*      pixman_image_set_transform -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_image_set_transform( pixman_image_t * image, 
*          const pixman_transform_t * transform);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       transform - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_image_set_transform(struct PixmanIFace *Self,
        pixman_image_t * image,
       const pixman_transform_t * transform)
{
  return pixman_image_set_transform(image, transform);
}

/****** pixman/main/pixman_image_unref ******************************************
*
*   NAME
*      pixman_image_unref -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_image_unref( pixman_image_t * image);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_image_unref(struct PixmanIFace *Self,
        pixman_image_t * image)
{
  return pixman_image_unref(image);
}

/****** pixman/main/pixman_line_fixed_edge_init ******************************************
*
*   NAME
*      pixman_line_fixed_edge_init -- Description
*
*   SYNOPSIS
*      void pixman_line_fixed_edge_init( pixman_edge_t * e,  int bpp, 
*           pixman_fixed_t y, const pixman_line_fixed_t * line,  int x_off, 
*           int y_off);
*
*   FUNCTION
*
*   INPUTS
*       e - 
*       bpp - 
*       y - 
*       line - 
*       x_off - 
*       y_off - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_line_fixed_edge_init(struct PixmanIFace *Self,
        pixman_edge_t * e,
        int bpp,
        pixman_fixed_t y,
       const pixman_line_fixed_t * line,
        int x_off,
        int y_off)
{
  pixman_line_fixed_edge_init(e, bpp, y, line, x_off, y_off);
}

/****** pixman/main/pixman_rasterize_edges ******************************************
*
*   NAME
*      pixman_rasterize_edges -- Description
*
*   SYNOPSIS
*      void pixman_rasterize_edges( pixman_image_t * image, 
*           pixman_edge_t * l,  pixman_edge_t * r,  pixman_fixed_t t, 
*           pixman_fixed_t b);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       l - 
*       r - 
*       t - 
*       b - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_rasterize_edges(struct PixmanIFace *Self,
        pixman_image_t * image,
        pixman_edge_t * l,
        pixman_edge_t * r,
        pixman_fixed_t t,
        pixman_fixed_t b)
{
  pixman_rasterize_edges(image, l, r, t, b);
}

/****** pixman/main/pixman_rasterize_trapezoid ******************************************
*
*   NAME
*      pixman_rasterize_trapezoid -- Description
*
*   SYNOPSIS
*      void pixman_rasterize_trapezoid( pixman_image_t * image, 
*          const pixman_trapezoid_t * trap,  int x_off,  int y_off);
*
*   FUNCTION
*
*   INPUTS
*       image - 
*       trap - 
*       x_off - 
*       y_off - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_rasterize_trapezoid(struct PixmanIFace *Self,
        pixman_image_t * image,
       const pixman_trapezoid_t * trap,
        int x_off,
        int y_off)
{
  pixman_rasterize_trapezoid(image, trap, x_off, y_off);
}

/****** pixman/main/pixman_region32_clear ******************************************
*
*   NAME
*      pixman_region32_clear -- Description
*
*   SYNOPSIS
*      void pixman_region32_clear( pixman_region32_t * region);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region32_clear(struct PixmanIFace *Self,
        pixman_region32_t * region)
{
  pixman_region32_clear(region);
}

/****** pixman/main/pixman_region32_contains_point ******************************************
*
*   NAME
*      pixman_region32_contains_point -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region32_contains_point(
*           pixman_region32_t * region,  int x,  int y, 
*           pixman_box32_t * box);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       x - 
*       y - 
*       box - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region32_contains_point(struct PixmanIFace *Self,
        pixman_region32_t * region,
        int x,
        int y,
        pixman_box32_t * box)
{
  return pixman_region32_contains_point(region, x, y, box);
}

/****** pixman/main/pixman_region32_contains_rectangle ******************************************
*
*   NAME
*      pixman_region32_contains_rectangle -- Description
*
*   SYNOPSIS
*      pixman_region_overlap_t pixman_region32_contains_rectangle(
*           pixman_region32_t * region,  pixman_box32_t * prect);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       prect - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_region_overlap_t _impl_pixman_region32_contains_rectangle(struct PixmanIFace *Self,
        pixman_region32_t * region,
        pixman_box32_t * prect)
{
  return pixman_region32_contains_rectangle(region, prect);
}

/****** pixman/main/pixman_region32_copy ******************************************
*
*   NAME
*      pixman_region32_copy -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region32_copy( pixman_region32_t * dest, 
*           pixman_region32_t * source);
*
*   FUNCTION
*
*   INPUTS
*       dest - 
*       source - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region32_copy(struct PixmanIFace *Self,
        pixman_region32_t * dest,
        pixman_region32_t * source)
{
  return pixman_region32_copy(dest, source);
}

/****** pixman/main/pixman_region32_equal ******************************************
*
*   NAME
*      pixman_region32_equal -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region32_equal( pixman_region32_t * region1, 
*           pixman_region32_t * region2);
*
*   FUNCTION
*
*   INPUTS
*       region1 - 
*       region2 - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region32_equal(struct PixmanIFace *Self,
        pixman_region32_t * region1,
        pixman_region32_t * region2)
{
  return pixman_region32_equal(region1, region2);
}

/****** pixman/main/pixman_region32_extents ******************************************
*
*   NAME
*      pixman_region32_extents -- Description
*
*   SYNOPSIS
*      pixman_box32_t * pixman_region32_extents( pixman_region32_t * region);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_box32_t * _impl_pixman_region32_extents(struct PixmanIFace *Self,
        pixman_region32_t * region)
{
  return pixman_region32_extents(region);
}

/****** pixman/main/pixman_region32_fini ******************************************
*
*   NAME
*      pixman_region32_fini -- Description
*
*   SYNOPSIS
*      void pixman_region32_fini( pixman_region32_t * region);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region32_fini(struct PixmanIFace *Self,
        pixman_region32_t * region)
{
  pixman_region32_fini(region);
}

/****** pixman/main/pixman_region32_init ******************************************
*
*   NAME
*      pixman_region32_init -- Description
*
*   SYNOPSIS
*      void pixman_region32_init( pixman_region32_t * region);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region32_init(struct PixmanIFace *Self,
        pixman_region32_t * region)
{
  pixman_region32_init(region);
}

/****** pixman/main/pixman_region32_init_from_image ******************************************
*
*   NAME
*      pixman_region32_init_from_image -- Description
*
*   SYNOPSIS
*      void pixman_region32_init_from_image( pixman_region32_t * region, 
*           pixman_image_t * image);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       image - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region32_init_from_image(struct PixmanIFace *Self,
        pixman_region32_t * region,
        pixman_image_t * image)
{
  pixman_region32_init_from_image(region, image);
}

/****** pixman/main/pixman_region32_init_rect ******************************************
*
*   NAME
*      pixman_region32_init_rect -- Description
*
*   SYNOPSIS
*      void pixman_region32_init_rect( pixman_region32_t * region,  int x, 
*           int y,  unsigned width,  unsigned height);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       x - 
*       y - 
*       width - 
*       height - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region32_init_rect(struct PixmanIFace *Self,
        pixman_region32_t * region,
        int x,
        int y,
        unsigned width,
        unsigned height)
{
  pixman_region32_init_rect(region, x, y, width, height);
}

/****** pixman/main/pixman_region32_init_rects ******************************************
*
*   NAME
*      pixman_region32_init_rects -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region32_init_rects( pixman_region32_t * region, 
*          const pixman_box32_t * boxes,  int count);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       boxes - 
*       count - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region32_init_rects(struct PixmanIFace *Self,
        pixman_region32_t * region,
       const pixman_box32_t * boxes,
        int count)
{
  return pixman_region32_init_rects(region, boxes, count);
}

/****** pixman/main/pixman_region32_init_with_extents ******************************************
*
*   NAME
*      pixman_region32_init_with_extents -- Description
*
*   SYNOPSIS
*      void pixman_region32_init_with_extents( pixman_region32_t * region, 
*           pixman_box32_t * extents);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       extents - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region32_init_with_extents(struct PixmanIFace *Self,
        pixman_region32_t * region,
        pixman_box32_t * extents)
{
  pixman_region32_init_with_extents(region, extents);
}

/****** pixman/main/pixman_region32_intersect ******************************************
*
*   NAME
*      pixman_region32_intersect -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region32_intersect( pixman_region32_t * new_reg, 
*           pixman_region32_t * reg1,  pixman_region32_t * reg2);
*
*   FUNCTION
*
*   INPUTS
*       new_reg - 
*       reg1 - 
*       reg2 - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region32_intersect(struct PixmanIFace *Self,
        pixman_region32_t * new_reg,
        pixman_region32_t * reg1,
        pixman_region32_t * reg2)
{
  return pixman_region32_intersect(new_reg, reg1, reg2);
}

/****** pixman/main/pixman_region32_intersect_rect ******************************************
*
*   NAME
*      pixman_region32_intersect_rect -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region32_intersect_rect(
*           pixman_region32_t * dest,  pixman_region32_t * source,  int x, 
*           int y,  unsigned width,  unsigned height);
*
*   FUNCTION
*
*   INPUTS
*       dest - 
*       source - 
*       x - 
*       y - 
*       width - 
*       height - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region32_intersect_rect(struct PixmanIFace *Self,
        pixman_region32_t * dest,
        pixman_region32_t * source,
        int x,
        int y,
        unsigned width,
        unsigned height)
{
  return pixman_region32_intersect_rect(dest, source, x, y, width, height);
}

/****** pixman/main/pixman_region32_inverse ******************************************
*
*   NAME
*      pixman_region32_inverse -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region32_inverse( pixman_region32_t * new_reg, 
*           pixman_region32_t * reg1,  pixman_box32_t * inv_rect);
*
*   FUNCTION
*
*   INPUTS
*       new_reg - 
*       reg1 - 
*       inv_rect - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region32_inverse(struct PixmanIFace *Self,
        pixman_region32_t * new_reg,
        pixman_region32_t * reg1,
        pixman_box32_t * inv_rect)
{
  return pixman_region32_inverse(new_reg, reg1, inv_rect);
}

/****** pixman/main/pixman_region32_not_empty ******************************************
*
*   NAME
*      pixman_region32_not_empty -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region32_not_empty( pixman_region32_t * region);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region32_not_empty(struct PixmanIFace *Self,
        pixman_region32_t * region)
{
  return pixman_region32_not_empty(region);
}

/****** pixman/main/pixman_region32_n_rects ******************************************
*
*   NAME
*      pixman_region32_n_rects -- Description
*
*   SYNOPSIS
*      int pixman_region32_n_rects( pixman_region32_t * region);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

int _impl_pixman_region32_n_rects(struct PixmanIFace *Self,
        pixman_region32_t * region)
{
  return pixman_region32_n_rects(region);
}

/****** pixman/main/pixman_region32_rectangles ******************************************
*
*   NAME
*      pixman_region32_rectangles -- Description
*
*   SYNOPSIS
*      pixman_box32_t * pixman_region32_rectangles(
*           pixman_region32_t * region,  int * n_rects);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       n_rects - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_box32_t * _impl_pixman_region32_rectangles(struct PixmanIFace *Self,
        pixman_region32_t * region,
        int * n_rects)
{
  return pixman_region32_rectangles(region, n_rects);
}

/****** pixman/main/pixman_region32_reset ******************************************
*
*   NAME
*      pixman_region32_reset -- Description
*
*   SYNOPSIS
*      void pixman_region32_reset( pixman_region32_t * region, 
*           pixman_box32_t * box);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       box - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region32_reset(struct PixmanIFace *Self,
        pixman_region32_t * region,
        pixman_box32_t * box)
{
  pixman_region32_reset(region, box);
}

/****** pixman/main/pixman_region32_selfcheck ******************************************
*
*   NAME
*      pixman_region32_selfcheck -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region32_selfcheck( pixman_region32_t * region);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region32_selfcheck(struct PixmanIFace *Self,
        pixman_region32_t * region)
{
  return pixman_region32_selfcheck(region);
}

/****** pixman/main/pixman_region32_subtract ******************************************
*
*   NAME
*      pixman_region32_subtract -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region32_subtract( pixman_region32_t * reg_d, 
*           pixman_region32_t * reg_m,  pixman_region32_t * reg_s);
*
*   FUNCTION
*
*   INPUTS
*       reg_d - 
*       reg_m - 
*       reg_s - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region32_subtract(struct PixmanIFace *Self,
        pixman_region32_t * reg_d,
        pixman_region32_t * reg_m,
        pixman_region32_t * reg_s)
{
  return pixman_region32_subtract(reg_d, reg_m, reg_s);
}

/****** pixman/main/pixman_region32_translate ******************************************
*
*   NAME
*      pixman_region32_translate -- Description
*
*   SYNOPSIS
*      void pixman_region32_translate( pixman_region32_t * region,  int x, 
*           int y);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       x - 
*       y - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region32_translate(struct PixmanIFace *Self,
        pixman_region32_t * region,
        int x,
        int y)
{
  pixman_region32_translate(region, x, y);
}

/****** pixman/main/pixman_region32_union ******************************************
*
*   NAME
*      pixman_region32_union -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region32_union( pixman_region32_t * new_reg, 
*           pixman_region32_t * reg1,  pixman_region32_t * reg2);
*
*   FUNCTION
*
*   INPUTS
*       new_reg - 
*       reg1 - 
*       reg2 - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region32_union(struct PixmanIFace *Self,
        pixman_region32_t * new_reg,
        pixman_region32_t * reg1,
        pixman_region32_t * reg2)
{
  return pixman_region32_union(new_reg, reg1, reg2);
}

/****** pixman/main/pixman_region32_union_rect ******************************************
*
*   NAME
*      pixman_region32_union_rect -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region32_union_rect( pixman_region32_t * dest, 
*           pixman_region32_t * source,  int x,  int y,  unsigned width, 
*           unsigned height);
*
*   FUNCTION
*
*   INPUTS
*       dest - 
*       source - 
*       x - 
*       y - 
*       width - 
*       height - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region32_union_rect(struct PixmanIFace *Self,
        pixman_region32_t * dest,
        pixman_region32_t * source,
        int x,
        int y,
        unsigned width,
        unsigned height)
{
  return pixman_region32_union_rect(dest, source, x, y, width, height);
}

/****** pixman/main/pixman_region_clear ******************************************
*
*   NAME
*      pixman_region_clear -- Description
*
*   SYNOPSIS
*      void pixman_region_clear( pixman_region16_t * region);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region_clear(struct PixmanIFace *Self,
        pixman_region16_t * region)
{
  pixman_region_clear(region);
}

/****** pixman/main/pixman_region_contains_point ******************************************
*
*   NAME
*      pixman_region_contains_point -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region_contains_point(
*           pixman_region16_t * region,  int x,  int y, 
*           pixman_box16_t * box);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       x - 
*       y - 
*       box - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region_contains_point(struct PixmanIFace *Self,
        pixman_region16_t * region,
        int x,
        int y,
        pixman_box16_t * box)
{
  return pixman_region_contains_point(region, x, y, box);
}

/****** pixman/main/pixman_region_contains_rectangle ******************************************
*
*   NAME
*      pixman_region_contains_rectangle -- Description
*
*   SYNOPSIS
*      pixman_region_overlap_t pixman_region_contains_rectangle(
*           pixman_region16_t * region,  pixman_box16_t * prect);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       prect - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_region_overlap_t _impl_pixman_region_contains_rectangle(struct PixmanIFace *Self,
        pixman_region16_t * region,
        pixman_box16_t * prect)
{
  return pixman_region_contains_rectangle(region, prect);
}

/****** pixman/main/pixman_region_copy ******************************************
*
*   NAME
*      pixman_region_copy -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region_copy( pixman_region16_t * dest, 
*           pixman_region16_t * source);
*
*   FUNCTION
*
*   INPUTS
*       dest - 
*       source - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region_copy(struct PixmanIFace *Self,
        pixman_region16_t * dest,
        pixman_region16_t * source)
{
  return pixman_region_copy(dest, source);
}

/****** pixman/main/pixman_region_equal ******************************************
*
*   NAME
*      pixman_region_equal -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region_equal( pixman_region16_t * region1, 
*           pixman_region16_t * region2);
*
*   FUNCTION
*
*   INPUTS
*       region1 - 
*       region2 - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region_equal(struct PixmanIFace *Self,
        pixman_region16_t * region1,
        pixman_region16_t * region2)
{
  return pixman_region_equal(region1, region2);
}

/****** pixman/main/pixman_region_extents ******************************************
*
*   NAME
*      pixman_region_extents -- Description
*
*   SYNOPSIS
*      pixman_box16_t * pixman_region_extents( pixman_region16_t * region);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_box16_t * _impl_pixman_region_extents(struct PixmanIFace *Self,
        pixman_region16_t * region)
{
  return pixman_region_extents(region);
}

/****** pixman/main/pixman_region_fini ******************************************
*
*   NAME
*      pixman_region_fini -- Description
*
*   SYNOPSIS
*      void pixman_region_fini( pixman_region16_t * region);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region_fini(struct PixmanIFace *Self,
        pixman_region16_t * region)
{
  pixman_region_fini(region);
}

/****** pixman/main/pixman_region_init ******************************************
*
*   NAME
*      pixman_region_init -- Description
*
*   SYNOPSIS
*      void pixman_region_init( pixman_region16_t * region);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region_init(struct PixmanIFace *Self,
        pixman_region16_t * region)
{
  pixman_region_init(region);
}

/****** pixman/main/pixman_region_init_from_image ******************************************
*
*   NAME
*      pixman_region_init_from_image -- Description
*
*   SYNOPSIS
*      void pixman_region_init_from_image( pixman_region16_t * region, 
*           pixman_image_t * image);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       image - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region_init_from_image(struct PixmanIFace *Self,
        pixman_region16_t * region,
        pixman_image_t * image)
{
  pixman_region_init_from_image(region, image);
}

/****** pixman/main/pixman_region_init_rect ******************************************
*
*   NAME
*      pixman_region_init_rect -- Description
*
*   SYNOPSIS
*      void pixman_region_init_rect( pixman_region16_t * region,  int x, 
*           int y,  unsigned width,  unsigned height);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       x - 
*       y - 
*       width - 
*       height - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region_init_rect(struct PixmanIFace *Self,
        pixman_region16_t * region,
        int x,
        int y,
        unsigned width,
        unsigned height)
{
  pixman_region_init_rect(region, x, y, width, height);
}

/****** pixman/main/pixman_region_init_rects ******************************************
*
*   NAME
*      pixman_region_init_rects -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region_init_rects( pixman_region16_t * region, 
*          const pixman_box16_t * boxes,  int count);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       boxes - 
*       count - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region_init_rects(struct PixmanIFace *Self,
        pixman_region16_t * region,
       const pixman_box16_t * boxes,
        int count)
{
  return pixman_region_init_rects(region, boxes, count);
}

/****** pixman/main/pixman_region_init_with_extents ******************************************
*
*   NAME
*      pixman_region_init_with_extents -- Description
*
*   SYNOPSIS
*      void pixman_region_init_with_extents( pixman_region16_t * region, 
*           pixman_box16_t * extents);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       extents - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region_init_with_extents(struct PixmanIFace *Self,
        pixman_region16_t * region,
        pixman_box16_t * extents)
{
  pixman_region_init_with_extents(region, extents);
}

/****** pixman/main/pixman_region_intersect ******************************************
*
*   NAME
*      pixman_region_intersect -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region_intersect( pixman_region16_t * new_reg, 
*           pixman_region16_t * reg1,  pixman_region16_t * reg2);
*
*   FUNCTION
*
*   INPUTS
*       new_reg - 
*       reg1 - 
*       reg2 - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region_intersect(struct PixmanIFace *Self,
        pixman_region16_t * new_reg,
        pixman_region16_t * reg1,
        pixman_region16_t * reg2)
{
  return pixman_region_intersect(new_reg, reg1, reg2);
}

/****** pixman/main/pixman_region_intersect_rect ******************************************
*
*   NAME
*      pixman_region_intersect_rect -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region_intersect_rect( pixman_region16_t * dest, 
*           pixman_region16_t * source,  int x,  int y,  unsigned width, 
*           unsigned height);
*
*   FUNCTION
*
*   INPUTS
*       dest - 
*       source - 
*       x - 
*       y - 
*       width - 
*       height - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region_intersect_rect(struct PixmanIFace *Self,
        pixman_region16_t * dest,
        pixman_region16_t * source,
        int x,
        int y,
        unsigned width,
        unsigned height)
{
  return pixman_region_intersect_rect(dest, source, x, y, width, height);
}

/****** pixman/main/pixman_region_inverse ******************************************
*
*   NAME
*      pixman_region_inverse -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region_inverse( pixman_region16_t * new_reg, 
*           pixman_region16_t * reg1,  pixman_box16_t * inv_rect);
*
*   FUNCTION
*
*   INPUTS
*       new_reg - 
*       reg1 - 
*       inv_rect - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region_inverse(struct PixmanIFace *Self,
        pixman_region16_t * new_reg,
        pixman_region16_t * reg1,
        pixman_box16_t * inv_rect)
{
  return pixman_region_inverse(new_reg, reg1, inv_rect);
}

/****** pixman/main/pixman_region_not_empty ******************************************
*
*   NAME
*      pixman_region_not_empty -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region_not_empty( pixman_region16_t * region);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region_not_empty(struct PixmanIFace *Self,
        pixman_region16_t * region)
{
  return pixman_region_not_empty(region);
}

/****** pixman/main/pixman_region_n_rects ******************************************
*
*   NAME
*      pixman_region_n_rects -- Description
*
*   SYNOPSIS
*      int pixman_region_n_rects( pixman_region16_t * region);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

int _impl_pixman_region_n_rects(struct PixmanIFace *Self,
        pixman_region16_t * region)
{
  return pixman_region_n_rects(region);
}

/****** pixman/main/pixman_region_rectangles ******************************************
*
*   NAME
*      pixman_region_rectangles -- Description
*
*   SYNOPSIS
*      pixman_box16_t * pixman_region_rectangles(
*           pixman_region16_t * region,  int * n_rects);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       n_rects - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_box16_t * _impl_pixman_region_rectangles(struct PixmanIFace *Self,
        pixman_region16_t * region,
        int * n_rects)
{
  return pixman_region_rectangles(region, n_rects);
}

/****** pixman/main/pixman_region_reset ******************************************
*
*   NAME
*      pixman_region_reset -- Description
*
*   SYNOPSIS
*      void pixman_region_reset( pixman_region16_t * region, 
*           pixman_box16_t * box);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       box - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region_reset(struct PixmanIFace *Self,
        pixman_region16_t * region,
        pixman_box16_t * box)
{
  pixman_region_reset(region, box);
}

/****** pixman/main/pixman_region_selfcheck ******************************************
*
*   NAME
*      pixman_region_selfcheck -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region_selfcheck( pixman_region16_t * region);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region_selfcheck(struct PixmanIFace *Self,
        pixman_region16_t * region)
{
  return pixman_region_selfcheck(region);
}

/****** pixman/main/pixman_region_set_static_pointers ******************************************
*
*   NAME
*      pixman_region_set_static_pointers -- Description
*
*   SYNOPSIS
*      void pixman_region_set_static_pointers( pixman_box16_t * empty_box, 
*           pixman_region16_data_t * empty_data, 
*           pixman_region16_data_t * broken_data);
*
*   FUNCTION
*
*   INPUTS
*       empty_box - 
*       empty_data - 
*       broken_data - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region_set_static_pointers(struct PixmanIFace *Self,
        pixman_box16_t * empty_box,
        pixman_region16_data_t * empty_data,
        pixman_region16_data_t * broken_data)
{
  pixman_region_set_static_pointers(empty_box, empty_data, broken_data);
}

/****** pixman/main/pixman_region_subtract ******************************************
*
*   NAME
*      pixman_region_subtract -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region_subtract( pixman_region16_t * reg_d, 
*           pixman_region16_t * reg_m,  pixman_region16_t * reg_s);
*
*   FUNCTION
*
*   INPUTS
*       reg_d - 
*       reg_m - 
*       reg_s - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region_subtract(struct PixmanIFace *Self,
        pixman_region16_t * reg_d,
        pixman_region16_t * reg_m,
        pixman_region16_t * reg_s)
{
  return pixman_region_subtract(reg_d, reg_m, reg_s);
}

/****** pixman/main/pixman_region_translate ******************************************
*
*   NAME
*      pixman_region_translate -- Description
*
*   SYNOPSIS
*      void pixman_region_translate( pixman_region16_t * region,  int x, 
*           int y);
*
*   FUNCTION
*
*   INPUTS
*       region - 
*       x - 
*       y - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_region_translate(struct PixmanIFace *Self,
        pixman_region16_t * region,
        int x,
        int y)
{
  pixman_region_translate(region, x, y);
}

/****** pixman/main/pixman_region_union ******************************************
*
*   NAME
*      pixman_region_union -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region_union( pixman_region16_t * new_reg, 
*           pixman_region16_t * reg1,  pixman_region16_t * reg2);
*
*   FUNCTION
*
*   INPUTS
*       new_reg - 
*       reg1 - 
*       reg2 - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region_union(struct PixmanIFace *Self,
        pixman_region16_t * new_reg,
        pixman_region16_t * reg1,
        pixman_region16_t * reg2)
{
  return pixman_region_union(new_reg, reg1, reg2);
}

/****** pixman/main/pixman_region_union_rect ******************************************
*
*   NAME
*      pixman_region_union_rect -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_region_union_rect( pixman_region16_t * dest, 
*           pixman_region16_t * source,  int x,  int y,  unsigned width, 
*           unsigned height);
*
*   FUNCTION
*
*   INPUTS
*       dest - 
*       source - 
*       x - 
*       y - 
*       width - 
*       height - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_region_union_rect(struct PixmanIFace *Self,
        pixman_region16_t * dest,
        pixman_region16_t * source,
        int x,
        int y,
        unsigned width,
        unsigned height)
{
  return pixman_region_union_rect(dest, source, x, y, width, height);
}

/****** pixman/main/pixman_sample_ceil_y ******************************************
*
*   NAME
*      pixman_sample_ceil_y -- Description
*
*   SYNOPSIS
*      pixman_fixed_t pixman_sample_ceil_y( pixman_fixed_t y,  int bpp);
*
*   FUNCTION
*
*   INPUTS
*       y - 
*       bpp - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_fixed_t _impl_pixman_sample_ceil_y(struct PixmanIFace *Self,
        pixman_fixed_t y,
        int bpp)
{
  return pixman_sample_ceil_y(y, bpp);
}

/****** pixman/main/pixman_sample_floor_y ******************************************
*
*   NAME
*      pixman_sample_floor_y -- Description
*
*   SYNOPSIS
*      pixman_fixed_t pixman_sample_floor_y( pixman_fixed_t y,  int bpp);
*
*   FUNCTION
*
*   INPUTS
*       y - 
*       bpp - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_fixed_t _impl_pixman_sample_floor_y(struct PixmanIFace *Self,
        pixman_fixed_t y,
        int bpp)
{
  return pixman_sample_floor_y(y, bpp);
}

/****** pixman/main/pixman_transform_bounds ******************************************
*
*   NAME
*      pixman_transform_bounds -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_transform_bounds(
*          const struct pixman_transform * matrix,  struct pixman_box16 * b);
*
*   FUNCTION
*
*   INPUTS
*       matrix - 
*       b - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_transform_bounds(struct PixmanIFace *Self,
       const struct pixman_transform * matrix,
        struct pixman_box16 * b)
{
  return pixman_transform_bounds(matrix, b);
}

/****** pixman/main/pixman_transform_from_pixman_f_transform ******************************************
*
*   NAME
*      pixman_transform_from_pixman_f_transform -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_transform_from_pixman_f_transform(
*           struct pixman_transform * t, 
*          const struct pixman_f_transform * ft);
*
*   FUNCTION
*
*   INPUTS
*       t - 
*       ft - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_transform_from_pixman_f_transform(struct PixmanIFace *Self,
        struct pixman_transform * t,
       const struct pixman_f_transform * ft)
{
  return pixman_transform_from_pixman_f_transform(t, ft);
}

/****** pixman/main/pixman_transform_init_identity ******************************************
*
*   NAME
*      pixman_transform_init_identity -- Description
*
*   SYNOPSIS
*      void pixman_transform_init_identity(
*           struct pixman_transform * matrix);
*
*   FUNCTION
*
*   INPUTS
*       matrix - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_transform_init_identity(struct PixmanIFace *Self,
        struct pixman_transform * matrix)
{
  pixman_transform_init_identity(matrix);
}

/****** pixman/main/pixman_transform_init_rotate ******************************************
*
*   NAME
*      pixman_transform_init_rotate -- Description
*
*   SYNOPSIS
*      void pixman_transform_init_rotate( struct pixman_transform * t, 
*           pixman_fixed_t cos,  pixman_fixed_t sin);
*
*   FUNCTION
*
*   INPUTS
*       t - 
*       cos - 
*       sin - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_transform_init_rotate(struct PixmanIFace *Self,
        struct pixman_transform * t,
        pixman_fixed_t cos,
        pixman_fixed_t sin)
{
  pixman_transform_init_rotate(t, cos, sin);
}

/****** pixman/main/pixman_transform_init_scale ******************************************
*
*   NAME
*      pixman_transform_init_scale -- Description
*
*   SYNOPSIS
*      void pixman_transform_init_scale( struct pixman_transform * t, 
*           pixman_fixed_t sx,  pixman_fixed_t sy);
*
*   FUNCTION
*
*   INPUTS
*       t - 
*       sx - 
*       sy - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_transform_init_scale(struct PixmanIFace *Self,
        struct pixman_transform * t,
        pixman_fixed_t sx,
        pixman_fixed_t sy)
{
  pixman_transform_init_scale(t, sx, sy);
}

/****** pixman/main/pixman_transform_init_translate ******************************************
*
*   NAME
*      pixman_transform_init_translate -- Description
*
*   SYNOPSIS
*      void pixman_transform_init_translate( struct pixman_transform * t, 
*           pixman_fixed_t tx,  pixman_fixed_t ty);
*
*   FUNCTION
*
*   INPUTS
*       t - 
*       tx - 
*       ty - 
*
*   RESULT
*       This function does not return a result
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

void _impl_pixman_transform_init_translate(struct PixmanIFace *Self,
        struct pixman_transform * t,
        pixman_fixed_t tx,
        pixman_fixed_t ty)
{
  pixman_transform_init_translate(t, tx, ty);
}

/****** pixman/main/pixman_transform_invert ******************************************
*
*   NAME
*      pixman_transform_invert -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_transform_invert( struct pixman_transform * dst, 
*          const struct pixman_transform * src);
*
*   FUNCTION
*
*   INPUTS
*       dst - 
*       src - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_transform_invert(struct PixmanIFace *Self,
        struct pixman_transform * dst,
       const struct pixman_transform * src)
{
  return pixman_transform_invert(dst, src);
}

/****** pixman/main/pixman_transform_is_identity ******************************************
*
*   NAME
*      pixman_transform_is_identity -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_transform_is_identity(
*          const struct pixman_transform * t);
*
*   FUNCTION
*
*   INPUTS
*       t - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_transform_is_identity(struct PixmanIFace *Self,
       const struct pixman_transform * t)
{
  return pixman_transform_is_identity(t);
}

/****** pixman/main/pixman_transform_is_int_translate ******************************************
*
*   NAME
*      pixman_transform_is_int_translate -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_transform_is_int_translate(
*          const struct pixman_transform * t);
*
*   FUNCTION
*
*   INPUTS
*       t - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_transform_is_int_translate(struct PixmanIFace *Self,
       const struct pixman_transform * t)
{
  return pixman_transform_is_int_translate(t);
}

/****** pixman/main/pixman_transform_is_inverse ******************************************
*
*   NAME
*      pixman_transform_is_inverse -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_transform_is_inverse(
*          const struct pixman_transform * a, 
*          const struct pixman_transform * b);
*
*   FUNCTION
*
*   INPUTS
*       a - 
*       b - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_transform_is_inverse(struct PixmanIFace *Self,
       const struct pixman_transform * a,
       const struct pixman_transform * b)
{
  return pixman_transform_is_inverse(a, b);
}

/****** pixman/main/pixman_transform_is_scale ******************************************
*
*   NAME
*      pixman_transform_is_scale -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_transform_is_scale(
*          const struct pixman_transform * t);
*
*   FUNCTION
*
*   INPUTS
*       t - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_transform_is_scale(struct PixmanIFace *Self,
       const struct pixman_transform * t)
{
  return pixman_transform_is_scale(t);
}

/****** pixman/main/pixman_transform_multiply ******************************************
*
*   NAME
*      pixman_transform_multiply -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_transform_multiply(
*           struct pixman_transform * dst, 
*          const struct pixman_transform * l, 
*          const struct pixman_transform * r);
*
*   FUNCTION
*
*   INPUTS
*       dst - 
*       l - 
*       r - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_transform_multiply(struct PixmanIFace *Self,
        struct pixman_transform * dst,
       const struct pixman_transform * l,
       const struct pixman_transform * r)
{
  return pixman_transform_multiply(dst, l, r);
}

/****** pixman/main/pixman_transform_point_3d ******************************************
*
*   NAME
*      pixman_transform_point_3d -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_transform_point_3d(
*          const struct pixman_transform * transform, 
*           struct pixman_vector * vector);
*
*   FUNCTION
*
*   INPUTS
*       transform - 
*       vector - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_transform_point_3d(struct PixmanIFace *Self,
       const struct pixman_transform * transform,
        struct pixman_vector * vector)
{
  return pixman_transform_point_3d(transform, vector);
}

/****** pixman/main/pixman_transform_point ******************************************
*
*   NAME
*      pixman_transform_point -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_transform_point(
*          const struct pixman_transform * transform, 
*           struct pixman_vector * vector);
*
*   FUNCTION
*
*   INPUTS
*       transform - 
*       vector - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_transform_point(struct PixmanIFace *Self,
       const struct pixman_transform * transform,
        struct pixman_vector * vector)
{
  return pixman_transform_point(transform, vector);
}

/****** pixman/main/pixman_transform_rotate ******************************************
*
*   NAME
*      pixman_transform_rotate -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_transform_rotate(
*           struct pixman_transform * forward, 
*           struct pixman_transform * reverse,  pixman_fixed_t c, 
*           pixman_fixed_t s);
*
*   FUNCTION
*
*   INPUTS
*       forward - 
*       reverse - 
*       c - 
*       s - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_transform_rotate(struct PixmanIFace *Self,
        struct pixman_transform * forward,
        struct pixman_transform * reverse,
        pixman_fixed_t c,
        pixman_fixed_t s)
{
  return pixman_transform_rotate(forward, reverse, c, s);
}

/****** pixman/main/pixman_transform_scale ******************************************
*
*   NAME
*      pixman_transform_scale -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_transform_scale(
*           struct pixman_transform * forward, 
*           struct pixman_transform * reverse,  pixman_fixed_t sx, 
*           pixman_fixed_t sy);
*
*   FUNCTION
*
*   INPUTS
*       forward - 
*       reverse - 
*       sx - 
*       sy - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_transform_scale(struct PixmanIFace *Self,
        struct pixman_transform * forward,
        struct pixman_transform * reverse,
        pixman_fixed_t sx,
        pixman_fixed_t sy)
{
  return pixman_transform_scale(forward, reverse, sx, sy);
}

/****** pixman/main/pixman_transform_translate ******************************************
*
*   NAME
*      pixman_transform_translate -- Description
*
*   SYNOPSIS
*      pixman_bool_t pixman_transform_translate(
*           struct pixman_transform * forward, 
*           struct pixman_transform * reverse,  pixman_fixed_t tx, 
*           pixman_fixed_t ty);
*
*   FUNCTION
*
*   INPUTS
*       forward - 
*       reverse - 
*       tx - 
*       ty - 
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

pixman_bool_t _impl_pixman_transform_translate(struct PixmanIFace *Self,
        struct pixman_transform * forward,
        struct pixman_transform * reverse,
        pixman_fixed_t tx,
        pixman_fixed_t ty)
{
  return pixman_transform_translate(forward, reverse, tx, ty);
}

/****** pixman/main/pixman_version ******************************************
*
*   NAME
*      pixman_version -- Description
*
*   SYNOPSIS
*      int pixman_version(void);
*
*   FUNCTION
*
*   INPUTS
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

int _impl_pixman_version(struct PixmanIFace *Self)
{
  return pixman_version();
}

/****** pixman/main/pixman_version_string ******************************************
*
*   NAME
*      pixman_version_string -- Description
*
*   SYNOPSIS
*      const char * pixman_version_string(void);
*
*   FUNCTION
*
*   INPUTS
*
*   RESULT
*       The result ...
*
*   EXAMPLE
*
*   NOTES
*
*   BUGS
*
*   SEE ALSO
*
*****************************************************************************
*
*/

const char * _impl_pixman_version_string(struct PixmanIFace *Self)
{
  return pixman_version_string();
}

