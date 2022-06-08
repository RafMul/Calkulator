file(GLOB LIB_SRC
"*.h"
"*.c"
)

add_library(lib ${LIB_SRC})

target_include_directories(lib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
