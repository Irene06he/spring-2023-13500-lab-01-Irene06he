// Name : Irene He He
//GitHub Name : Irene06he

#include<iostream>

int main(){
  int firstNum,secondNum;
  std::cout<<"Enter the first number:";
  std::cin>>firstNum;
  std::cout<<"Enter the second number:";
  std::cin>>secondNum;
  if (firstNum<secondNum){
    std::cout<<"\n\n"<<"The smaller of the two is:"<<firstNum;
  }
  else if(secondNum<firstNum){
    std::cout<<"\n\n"<<"The smaller of the two is :"<<secondNum;
  }
  return 0;
  }