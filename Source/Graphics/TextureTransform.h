#ifndef GRAPHICS_TEXTURETRANSFORM_H_
#define GRAPHICS_TEXTURETRANSFORM_H_

#include "Graphics/NativePixelFormat.h"

void ClampTexels( NativePf8888 * texels, u32 n64_width, u32 n64_height, u32 native_width, u32 native_height, u32 native_stride );
void MirrorTexels( bool mirror_s, bool mirror_t, NativePf8888 * dst, u32 dst_stride, const NativePf8888 * src, u32 src_stride, u32 width, u32 height );

#endif // GRAPHICS_TEXTURETRANSFORM_H_
