cmake_minimum_required ( VERSION 3.1.0...3.27.0)

project ( Raytrace LANGUAGES CXX)

set ( CMAKE_CXX_STANDARD 11 )
set ( CMAKE_CXX_STANDARD_REQUIRED ON )
set ( CMAKE_CXX_EXTENSIONS OFF )


set ( EXTERNAL
  src/external/stb_image.h
)

set ( SOURCE
 main.cc
)

include_directories( . )

add_compile_options(-Wnon-virutal-dtor)
add_compile_options(-Wreorder)
add_compile_options(-Wsometimes-uninitialized)
add_compile_options(-Wunused-variables)

add_executable(raytrace ${SOURCE})
