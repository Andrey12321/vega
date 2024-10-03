cmake_minimum_required(VERSION 3.10)
project(my_project)

set(CMAKE_CXX_STANDARD 17)

# Добавляем пути к заголовочным файлам
include_directories(include)

# Добавляем исходные файлы
add_library(my_project src/my_class.cpp)

# Настраиваем GoogleTest
enable_testing()
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
add_executable(test_my_class tests/test_my_class.cpp)
target_link_libraries(test_my_class ${GTEST_LIBRARIES} pthread my_project)

# Настраиваем Google Benchmark
find_package(benchmark REQUIRED)
include_directories(${benchmark_INCLUDE_DIRS})
add_executable(benchmark_my_class benchmarks/benchmark_my_class.cpp)
target_link_libraries(benchmark_my_class benchmark::benchmark my_project)

# Добавляем тесты
add_test(NAME test_my_class COMMAND test_my_class)
