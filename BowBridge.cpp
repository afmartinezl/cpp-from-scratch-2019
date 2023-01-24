//============================================================================
// Name        : Exercise2.cpp
// Author      : AM
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <math.h>
#include <stdio.h>

int main(){
	double a,b,c,p1,p2,p3;
	int N;
	do{
	std::cout<<"BRIDGE MATERIAL CALCULATION\n";
	std::cout << "Enter the value for a (width of the bow): ";
	std::cin>>a;
	std::cout << "Enter the value for b (height of the bow): ";
	std::cin>>b;
	std::cout << "Enter the value for c (height of the street): ";
	std::cin>>c;
	std::cout << "Enter the value for N (number of vertical carrier elements): ";
	std::cin>>N;
	if(a<0||b<0||c<0||N<0){
		std::cout<<"All the values must be positive. Please enter the values again\n";
	}
	} while(a<0||b<0||c<0||N<0);

	double y[N];
	p1 = -(4*b)/(a*a);
	p2 = 4*b/a;
	p3 = 0;

	int i=0;
	for(double x=0; x<=a; x+=a/(N-1)){
		y[i]=c+b-((p1*x*x)+(p2*x)+p3);
		i=i+1;
	}
	std::cout<<"Calculation:\n";
	int j=0;
	for (double x=0; x<=a; x+=a/(N-1)){
		std::cout<<"Element No. "<<j<<" at x-position "<<x<<", has a length of "<<y[j]<<"\n";
		j+=1;
	}
	double length=0;
	for(int i=0;i<N;i++){
	length=length+y[i];
	}
	std::cout<<"Total length of material: "<<length;
	return 0;
}
