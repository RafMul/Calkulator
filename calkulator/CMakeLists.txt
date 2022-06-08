file(GLOB CAL_SRC
    "*.h"
    "*.c"

)



add_executable(cal ${CAL_SRC})
#target_link_libraries(cal LINK_PUBLIC lib)
target_include_directories(cal PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
#target_include_directories(cal PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../library)
