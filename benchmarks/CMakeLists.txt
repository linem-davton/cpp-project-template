# Use of Google Benchmark - https://github.com/google/benchmark
find_package(benchmark REQUIRED)

# Benchmark executables
add_executable(bench_hello benchmark_hello.cpp)

