# SE4HPCproject


### Prerequisites
Ensure you have the following installed Linux environment:
- C++ compiler (e.g., g++, clang++)
- CMake (https://cmake.org/download/)
- Git (osx https://git-scm.com/download/mac) (windows: https://gitforwindows.org/) (linux: https://git-scm.com/book/en/v2/Getting-Started-Installing-Git)


### Setup Instructions

1. **Use the template:**
```sh
git@github.com:hirdeshkumar2407/calculator_cicd_c-.git
cd your-repo-name
```

2. **Enable Google Test**
```sh
git submodule init
git submodule update
```
   
3. **Build the project:**
```sh
mkdir build
cd build
cmake ..
cmake --build .
```
Remember to use in build folder if you have and empty for rebuilding  .

```sh
rm -rf * 
```
3. **Test (in the build folder):**

```sh
ctest -VV
```
or:
```sh
./test_multiplication
```

