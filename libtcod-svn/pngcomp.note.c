// http://vtp.googlecode.com/svn-history/r7270/trunk/TerrainSDK/minidata/pngbase.cpp
// #define png_infopp_NULL (png_infopp)NULL
// #define int_p_NULL (int*)NULL
// compatibility with libpng 1.4
#if ((PNG_LIBPNG_VER_MAJOR==1 && PNG_LIBPNG_VER_MINOR>=4) || PNG_LIBPNG_VER_MAJOR>1)
#define int_p_NULL NULL
#define png_voidp_NULL NULL
#define png_infopp_NULL NULL
#define png_error_ptr_NULL NULL
#define png_set_gray_1_2_4_to_8 png_set_expand_gray_1_2_4_to_8
#endif
// http://www.libpng.org/pub/png/src/libpng-1.2.x-to-1.4.x-summary.txt
