cmake_minimum_required (VERSION 2.8)

option(test "Build all tests." ON)

# executable
project (UT)
add_executable(Main Main.cpp Figury.cpp)
add_definitions(-std=c++11)

# UT
# to enable please use 
# cmake -Dtest=ON

if (test)
	enable_testing()
	find_package(GTest REQUIRED)
	include_directories(${GTEST_INCLUDE_DIRS})
	add_executable(runTests Main_Mock_test.cpp Figury.cpp )
	target_link_libraries(runTests ${GTEST_LIBRARIES} pthread gmock)
endif()
