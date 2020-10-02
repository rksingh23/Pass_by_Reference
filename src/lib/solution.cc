#include "solution.h"
#include <iostream>
#include <bits/stdc++.h>

// Question 3
void Solution::SwapByRefernce(int &input1, int &input2){
 int temp=input1;
 input1=input2;
 input2=temp;
}

void Solution::SwapByPointer(int *input1, int *input2)
{
 int temp=*input1;
 *input1=*input2;
 *input2=temp;
}

void Solution::UniqeVectorNotBySet(std::vector<int> &input)
{
    std::map<int,int> cmp;
    std::map<int,int>::iterator it;

    for(auto n:input)
    {
    it= cmp.find(n);
    if (it==cmp.end())
    {
       cmp.insert(std::pair<int,int> (n,1));
    }
    else
    {
      continue;
    }
    }
    input.clear();
    for(auto n=cmp.begin();n!=cmp.end();n++){
        input.push_back(n->first);
    }
}


void Solution::UniqeVectorBySet(std::vector<int> &input)
{
    std::set<int> cmp;
    for(auto n:input)
    {
        cmp.insert(n);
    }
    input.clear();
    for(auto n:cmp)
    {
        input.push_back(n);
    }
}

void Solution::ReverseVector(std::vector<int> &input)
{
    std::vector<int> cmp;
    for (int i=input.size();i>0;i--)
    {
        cmp.push_back(input[i-1]);
    }
    input.clear();
    for(auto n:cmp)
    {
        input.push_back(n);
    }
}


void Solution::OddVector(std::vector<int> &input)
{
    std::vector<int> cmp;
    for(auto n:input)
    {
        if(n%2!=0)
        {
            cmp.push_back(n);
        }
    }
    input.clear();
    for(auto n:cmp)
    {
        input.push_back(n);
    }
}


void Solution::ReverseString(std::string &input)
{
    reverse(input.begin(), input.end()); 
}

void Solution::ToLower(std::string &str) 
{
  int i=0;
  char c;
  std::vector<char> cpy{};
  
  while (str[i])
  {
    if (isdigit(str[i]))
    {
        std::cout<<str[i];
    }
    else
    {
    c=str[i];
    cpy.push_back(tolower(c));
    i++;
    }
   }
   str.clear();
   for(auto n:cpy)
   {
       str=str+n;
   }

}
