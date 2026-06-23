# ci_tests
Toy repo for learning about CI and github actions

![C++](https://github.com/fbottarel/ci_tests/actions/workflows/cpp-ci.yml/badge.svg)
![Python](https://github.com/fbottarel/ci_tests/actions/workflows/python-ci.yml/badge.svg)

A sandbox for experimenting with C++ and Python CI and actions.

## C++

```bash
cmake -B cpp_sandbox/build -S cpp_sandbox
cmake --build cpp_sandbox/build
ctest --test-dir cpp_sandbox/build --output-on-failure
```

## Python
 
```bash
pip install -r python_sandbox/requirements.txt
pytest python_sandbox/tests
```
 