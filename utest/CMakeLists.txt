cmake_minimum_required (VERSION 2.8.11)

project(utest_calkulator)

set(INCLUDE_DIRS
    ../library

)

set(TEST_INCLUDE_DIRS
    .

)
set(SRCS_add
../library/addition.c
)
set(SRCS_div
../library/division.c
)
set(SRCS_multi
../library/multiplication.c
)
set(SRCS_sub
../library/subtraction.c
)
set(TEST_SRCS_add
utest_addition.c

)
set(TEST_SRCS_div
utest_division.c

)
set(TEST_SRCS_multi
utest_multiplication.c
)

set(TEST_SRCS_sub
utest_subtraction.c
)
set(GLOBAL_DEFINIES

)
add_executable(test_addition ${SRCS_add} ${TEST_SRCS_add})
target_include_directories(test_addition PRIVATE ${INCLUDE_DIRS} ${TEST_INCLUDE_DIRS})
target_compile_definitions(test_addition PRIVATE ${GLOBAL_DEFINES})
target_compile_options(test_addition PRIVATE  -Wall -Wextra)

add_executable(test_division ${SRCS_div} ${TEST_SRCS_div})
target_include_directories(test_division PRIVATE ${INCLUDE_DIRS} ${TEST_INCLUDE_DIRS})
target_compile_definitions(test_division PRIVATE ${GLOBAL_DEFINES})
target_compile_options(test_division PRIVATE  -Wall -Wextra)

add_executable(test_multiplication ${SRCS_multi} ${TEST_SRCS_multi})
target_include_directories(test_multiplication PRIVATE ${INCLUDE_DIRS} ${TEST_INCLUDE_DIRS})
target_compile_definitions(test_multiplication PRIVATE ${GLOBAL_DEFINES})
target_compile_options(test_multiplication PRIVATE  -Wall -Wextra)

add_executable(test_subtraction ${SRCS_sub} ${TEST_SRCS_sub})
target_include_directories(test_subtraction PRIVATE ${INCLUDE_DIRS} ${TEST_INCLUDE_DIRS})
target_compile_definitions(test_subtraction PRIVATE ${GLOBAL_DEFINES})
target_compile_options(test_subtraction PRIVATE  -Wall -Wextra)
enable_testing()
add_test(testsaddition test_addition)
add_test(testsdivision test_division)
add_test(testsmultiplication test_multiplication)
add_test(testssubtraction test_subtraction)


