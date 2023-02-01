#include<iostream>

int main(){
  int firstNum,secondNum;
  std::cout<<"Enter the first number:";
  std::cin>>firstNum;
  std::cout<<"Enter the second number:";
  std::cin>>secondNum;
  if (firstNum<secondNum){
    std::cout<<"The smaller of the two is"<<firstNum<<"\n\n";
  }
  else if(secondNum<firstNum){
    std::cout<<"The smaller of the two is :"<<secondNum<<"\n\n";
  }
  return 0;
  }