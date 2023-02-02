//Name : Irene He He
//GitHub Name: Irene06he

#include <iostream>

int main(){
  int year,month;
  std::cout<<"Enter year:";
  std::cin>>year;
  std::cout<<"Enter month:";
  std::cin>>month;
  if (month==1 ||month==3 || month ==5 || month== 7 || month==8 || month==10 || month==12){
    std::cout<<"\n\n"<<"31 days";
  }
  else if (month ==4 || month==6 ||month==9 ||month==11){
    std::cout<<"\n\n"<<"30 days";
  }
  else if(year % 4 != 0 && month== 2){
  std::cout<<"\n\n"<<"28 days";
  }
  else if (year % 100 != 0 && month==2){
  std::cout<<"\n\n"<<"29 days";
  }
  else if (year % 400 != 0 && month==2){
  std::cout<<"\n\n"<<"28 days";
  }
  else if (month ==2){
  std::cout<<"\n\n"<<"29 days";
  }

  return 0;
}