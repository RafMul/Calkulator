cmake_minimum_required (VERSION 2.8.11)

project(utest_calkulator)

set(INCLUDE_DIRS
    ../library

)

set(TEST_INCLUDE_DIRS
    .

)
set(SRCS
../library/addition.c
../library/division.c
../library/multiplication.c
../library/subtraction.c
)
set(TEST_SRCS
utest_addition.c
utest_division.c
utest_multiplication.c
utest_subtraction.c
)
set(GLOBAL_DEFINIES

)
add_executable(${CMAKE_PROJECT_NAME} ${SRCS} ${TEST_SRCS})
target_include_directories(${CMAKE_PROJECT_NAME} PRIVATE ${INCLUDE_DIRS} ${TEST_INCLUDE_DIRS})
target_compile_definitions(${CMAKE_PROJECT_NAME} PRIVATE ${GLOBAL_DEFINES})
target_compile_options(${CMAKE_PROJECT_NAME} PRIVATE  -Wall -Wextra)

enable_testing()
add_test(tests ${CMAKE_PROJECT_NAME})


