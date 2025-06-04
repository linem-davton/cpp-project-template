# C++ Project Template

Modern, minimal C++ project template with:

- CMake (with presets)
- GoogleTest and Google Benchmark support
- Heaptrack, lcov for profiling and coverage
- clang-format and clang-tidy
- `.gitignore` for clean versioning

## 🔧 Getting Started

```bash
git clone https://github.com/linem-davton/cpp-project-template.git myproject
cd myproject
rm -rf .git
git init
git add .
git commit -m "Initial commit"
```

## 📦 Dependencies

Install project dependencies using the provided script:

```bash
./scripts/install-dependencies.sh
```

## 🛠️ Build and Test

```bash
./scripts/build_all.sh debug # or release, default builds all configurations
./scripts/test_all.sh # tests all configurations
```
