#include<iostream>

int main(){
  int year;
  std::cout<<"Enter year:"<<"\n\n";
  std::cin>>year;
  if(year % 4 == 0 && year % 400 == 0 ){
    std::cout<<"Leap year";
  }
  else if (year % 100 == 0 ){
    std::cout<<"Common year";
  }
  else{
    std::cout<<"Common year";
  }

  return 0;
  }