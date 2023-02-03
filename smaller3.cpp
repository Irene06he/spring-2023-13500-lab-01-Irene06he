//Name : Irene He He
//GitHub name: Irene06he

#include <iostream>

	int main() {
	int x,y,z;
  	std::cout<<"Enter the first number:";
  	std::cin>>x;
  	std::cout<<"Enter the second number:";
  	std::cin>>y;
  	std::cout<<"Enter the third number:";
  	std::cin>>z;
  	if (x<=y && x<=z ){
    	std::cout<<"\n\n"<<"The smaller of the three is:"<<x<<"\n\n";
  	}
  	else if (y<=x && y<=z){
    	std::cout<<"\n\n"<<"The smaller of the three is:"<<y<<"\n\n";
  	}
  	else {
    	std::cout<<"\n\n"<<"The smaller of the three is:"<<z<<"\n\n";
 	 }
	
	return 0;
	}
	