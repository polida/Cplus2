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
        Point_tests
        Point_tests.cpp
        Duration_tests.cpp
)
add_executable(
        Time_tests
        Time_tests.cpp
)
add_executable(
        Duration_tests
        Duration_tests.cpp
)

target_link_libraries(
        Point_tests
        GTest::gtest_main
        Math
)
target_link_libraries(
        Time_tests
        GTest::gtest_main
        Time
)
target_link_libraries(
        Duration_tests
        GTest::gtest_main
        Duration
)

include(GoogleTest)
gtest_discover_tests( Point_tests )