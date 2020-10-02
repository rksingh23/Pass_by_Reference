#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Solution {
public:
  
  void SwapByRefernce(int &input1, int &input2);
  void SwapByPointer(int *input1, int *input2);
  void UniqeVectorNotBySet(std::vector<int> &input);
  void UniqeVectorBySet(std::vector<int> &input);
  void ReverseVector(std::vector<int> &input);
  void OddVector(std::vector<int> &input);
  void ReverseString(std::string &input); 
  void ToLower(std::string& input);

//private:
};

#endif