#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>



TEST(Q3_Student, ReturnSampleData) {
  Solution s;
  int input1=10;
  int input2=20;
  s.SwapByRefernce(input1, input2);
  EXPECT_EQ(input1, 20);
  EXPECT_EQ(input2, 10);
  s.SwapByPointer(&input1, &input2);
  EXPECT_EQ(input1, 10);
  EXPECT_EQ(input2, 20);
};

TEST(Q3_Student, HandlesNegativeIntegers) {
  Solution s;
  int input1=-10;
  int input2=-20;
  s.SwapByRefernce(input1, input2);
  EXPECT_EQ(input1, -20);
  EXPECT_EQ(input2, -10);
  s.SwapByPointer(&input1, &input2);
  EXPECT_EQ(input1, -10);
  EXPECT_EQ(input2, -20);
};


TEST(Q3_Student, HandlesZero) {
  Solution s;
  int input1= 0;
  int input2= 0;
  s.SwapByRefernce(input1, input2);
  EXPECT_EQ(input1, 0);
  EXPECT_EQ(input2, 0);
  s.SwapByPointer(&input1, &input2);
  EXPECT_EQ(input1, 0);
  EXPECT_EQ(input2, 0);
}

TEST(Q4_Student, TEST_with_input_stream) {
  CPPLib object1;
  std::vector<int> input11{1,2,3,4,4,5,2};
  std::vector<int> input2{5,3,2,8};
  std::vector<int> cmp;
  
  object1.UniqeVectorNotBySet(input11);
  for (auto n:input11)
  {
    cmp.push_back(n);
  }

  std::vector<int> Unique1{1,2,3,4,5} ;
  ASSERT_EQ(cmp.size(), Unique1.size()) << "Vectors x and y are of unequal length";
  for (int unsigned i = 0; i < Unique1.size(); ++i){
    EXPECT_EQ(cmp[i],Unique1[i]);
  }
  cmp.clear();
  std::vector<int> input12{1,2,3,4,4,5,2};
  
  object1.UniqeVectorBySet(input12);
  for (auto n1:input12)
  {
    cmp.push_back(n1);
  }

  std::vector<int> Unique2{1,2,3,4,5} ;
  ASSERT_EQ(cmp.size(), Unique2.size()) << "Vectors x and y are of unequal length";
  for (int unsigned i = 0; i < Unique2.size(); ++i){
    EXPECT_EQ(cmp[i],Unique2[i]);
  }

  cmp.clear();
  std::vector<int> input13{1,2,3,4};
  
  object1.ReverseVector(input13);
  for (auto n2:input13)
  {
    cmp.push_back(n2);
  }

  std::vector<int> Reverse{4,3,2,1} ;
  ASSERT_EQ(cmp.size(), Reverse.size()) << "Vectors x and y are of unequal length";
  for (int unsigned i = 0; i < Reverse.size(); ++i){
    EXPECT_EQ(cmp[i],Reverse[i]);
  }

  cmp.clear();
  std::vector<int> input14{1,2,3,4,4};
  object1.OddVector(input14);
  for (auto n3:input14)
  {
    cmp.push_back(n3);
  }

  std::vector<int> Odd{1,3} ;
  ASSERT_EQ(cmp.size(), Odd.size()) << "Vectors x and y are of unequal length";
  for (int unsigned i = 0; i < Odd.size(); ++i){
    EXPECT_EQ(cmp[i],Odd[i]);
  }

TEST(Q5_Student, TEST_with_input_stream1) 
{
  CPPLib s;
  
  std::string input="Rohit";
  s.ReverseString(input);
  EXPECT_EQ(input,"tihoR");
};


TEST(Q5_Student, TEST_with_input_stream3) 
{
  CPPLib s;
  std::string inputc="ABCDEFG";
  s.ToLower(inputc);
  EXPECT_EQ(inputc,"abcdefg");
};
