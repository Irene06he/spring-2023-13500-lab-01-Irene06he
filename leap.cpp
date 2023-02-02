//Name: Irene He He
//GitHub Name: Irene06he

#include<iostream>

int main(){
  int year;
  std::cout<<"Enter year:";
  std::cin>>year;
  if(year % 4 != 0){
  std::cout<<"\n\n"<<"Common year";
  }
  else if (year % 100 != 0){
  std::cout<<"\n\n"<<"Leap year";
  }
  else if (year % 400 != 0){
  std::cout<<"\n\n"<<"Common year";
  }
  else{
  std::cout<<"\n\n"<<"Leap year";
  }
  

  return 0;
  }