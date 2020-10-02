#include "src/lib/solution.h"
#include <iostream>
#include<vector>

int main() {
  Solution s;
  int input1=10;
  int input2=20;
  std::cout<<"Value of input 1 before Swap By Reference"<<input1<<std::endl;
  std::cout<<"Value of input 2 before Swap By Reference"<<input2<<std::endl;
  s.SwapByRefernce(input1, input2);
  std::cout<<"Value of input 1 after Swap By Reference"<<input1<<std::endl;
  std::cout<<"Value of input 2 after Swap By Reference"<<input2<<std::endl;

  
  input1 = 10;
  input2 = 20;

  std::cout<<"Value of input 1 before Swap By Pointer"<<input1<<std::endl;
  std::cout<<"Value of input 2 before Swap By Pointer"<<input2<<std::endl;
  s.SwapByPointer(&input1, &input2);
  std::cout<<"Value of input 1 before Swap By Pointer"<<input1<<std::endl;
  std::cout<<"Value of input 2 before Swap By Pointer"<<input2<<std::endl;


  std::vector<int> input{1,-2,-3,4,4,5,2};
  std::vector<int> input2{5,3,2,8};
  std::cout<<"Value before the function UniqeVectorNotBySet"<<std::endl;
  for(auto n:input){
    std::cout<<n<<" ";
  }
  std::cout<<std::endl;
  std::cout<<"Value after the function UniqeVectorNotBySet"<<std::endl;
  s.UniqeVectorNotBySet(input);
  for(auto n:input){
    std::cout<<n<<" ";
  }
  std::cout<<std::endl;
  
  input={1,2,3,4,4,5,2};
  std::cout<<"Value before the function UniqeVectorBySet"<<std::endl;
  for(auto n:input){
    std::cout<<n<<" ";
  }
  std::cout<<std::endl;
  s.UniqeVectorBySet(input);
  std::cout<<"Value after the function UniqeVectorBySet"<<std::endl;
  for(auto n:input){
    std::cout<<n<<" ";
  }
  std::cout<<std::endl;
  
  input={1,2,3,4};
  std::cout<<"Value before the function ReverseVector"<<std::endl;
  for(auto n:input){
    std::cout<<n<<" ";
  }
  std::cout<<std::endl;
  s.ReverseVector(input);
  std::cout<<"Value after the function ReverseVector"<<std::endl;
  for(auto n:input){
    std::cout<<n<<" ";
  }
  std::cout<<std::endl;
  
  input={1,2,3,4};
  std::cout<<"Value before the function OddVector"<<std::endl;
  for(auto n:input){
    std::cout<<n<<" ";
  }
  std::cout<<std::endl;
  s.OddVector(input);
  std::cout<<"Value after the function OddVector"<<std::endl;
  for(auto n:input){
    std::cout<<n<<" ";
  }
  std::cout<<std::endl;
  
  input={1,2,3,4};
  std::cout<<"Value before the function UnionVectors"<<std::endl;
  std::cout<<"Value before theVector 1"<<std::endl;
  for(auto n:input){
    std::cout<<n<<" ";
  }
  std::cout<<std::endl;
  std::cout<<"Value before theVector 2"<<std::endl;
  for(auto n:input2){
    std::cout<<n<<" ";
  }
  std::cout<<std::endl;


  std::string input="Rohit";
  std::cout<<input<<std::endl;
  s.ReverseString(input);
  std::cout<<input<<std::endl;

  std::string inputc="ABCDEFG";
  std::cout<<inputc<<std::endl;
  s.ToLower(inputc);
  std::cout<<inputc<<std::endl;

  return 0;
}