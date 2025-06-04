#include <benchmark/benchmark.h>

static void BM_HelloWorld(benchmark::State& state) {
   const int N = state.range(0);
    for (auto _ : state) {
        int x = N + 1;
        benchmark::DoNotOptimize(x);
    }
}
BENCHMARK(BM_HelloWorld)->Arg(100)->Arg(200)->Arg(500)->Unit(benchmark::kMicrosecond); // values for N
