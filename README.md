# Pass_by_reference
> swap the values of the inputs, using pass by reference and pass by pointers in a C++.
> Do note that in our function we are not returning any value, as we are passing by refernce we receive the updated values in the our main body. 

>Problem Statement 1: Write a function     ```void CPPLib::UniqeVectorNotBySet(std::vector<int> &input)``` and  ```void CPPLib::UniqeVectorBySet(std::vector<int> &input)``` that takes a vector of integers as input. The output is the same vector where all duplicates are removed. Note that the output is the same vector means the function's return type should be void and do the modifications on the input vector.

>Problem Statement 2: Write a function ```void CPPLib::ReverseVector(std::vector<int> &input)``` that takes a vector of integers as input. The output is the same vector but in the reversed order.

>Problem Statement 3: Write a function ```void CPPLib::OddVector(std::vector<int> &input)``` that takes a vector of integers as input. The output should be the same vector where all even numbers are removed.

>Problem Statement 4: Write a function that takes a string as an input and **reverses** its value. The function has no output. It changes the value of the input parameter. Write a simple function ```void CPPLib::ReverseString(std::string &input)```

>Problem Statement 5: Write a function that converts a string to lower case. Write a simple function ```void CPPLib::ToLower(std::string& )``` in [cpplib.cc](src/lib/cpplib.cc). The input string is strictly alphanumeric.



## Installation

You can copy this using this command:

```bash
git clone https://github.com/rksingh23/Pass_by_reference.git
```

### Run main:

You can run this using `blaze`:

```bash
bazel run src/main:main
```

### Run Tests:
You can run unit tests using [`blaze`](#installing-bazel):

```bash
bazel test tests:tests
```

## Installing Bazel
This repo uses `Bazel` for building C++ files.
You can install Bazel using this [link](https://docs.bazel.build/versions/master/install.html).
