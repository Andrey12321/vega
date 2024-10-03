#include <benchmark/benchmark.h>
#include "my_project/my_class.h"

static void BenchmarkMethod(benchmark::State& state) {
    MyClass obj;
    for (auto _ : state) {
        obj.method();
    }
}
BENCHMARK(BenchmarkMethod);

BENCHMARK_MAIN();
