#include <iostream>
using namespace std;
struct point {
	int x;
	int y;
	
};
int main (){
	point p1,p2,p3;
	cout<<"enter the coordinate of p1: ";
	cin>>p1.x;
	cin>>p1.y;
	cout<<"enter the coordinate of p2: ";
	cin>>p2.x;
	cin>>p2.y;
	p3.x=p1.x+p2.x;
	p3.y=p1.y+p2.y;
	cout<<"Enter the coordinate p1+p2: "<<p3.x <<endl;
	cout<<"Enter the coordinate p1+p2: "<<p3.y<<endl;
	return 0;

}