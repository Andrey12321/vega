cmake_minimum_required(VERSION 3.10)
project(my_project)

set(CMAKE_CXX_STANDARD 17)

# Добавляем пути к заголовочным файлам
include_directories(include)

# Добавляем исходные файлы
add_library(my_project src/my_class.cpp)

# Добавляем исполняемый файл для тестов
enable_testing()
add_executable(test_my_class tests/test_my_class.cpp)
target_link_libraries(test_my_class my_project gtest gtest_main)

# Добавляем исполняемый файл для бенчмарков
add_executable(benchmark_my_class benchmarks/benchmark_my_class.cpp)
target_link_libraries(benchmark_my_class my_project benchmark::benchmark)

# Добавляем тесты
add_test(NAME test_my_class COMMAND test_my_class)