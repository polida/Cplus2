include(FetchContent)
FetchContent_Declare(
        googletest
        URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
        SimpleMath_tests
        SimpleMath_tests.cpp
)
add_executable(
        ListOp_tests
        ListOp_tests.cpp
)
target_link_libraries(
        SimpleMath_tests
        GTest::gtest_main
        SimpleMath
)
target_link_libraries(
        ListOp_tests
        GTest::gtest_main
        ListOp
)

include(GoogleTest)
gtest_discover_tests(SimpleMath_tests list_tests)
