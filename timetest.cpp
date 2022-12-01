#include <iostream>
using namespace std;
struct time {
	int hours;
	int mins;
	int seconds;
};
int func(time test){
	int T1=3600*test.hours + 60*test.mins + test.seconds;
	//cout<<T1;
	return T1;
}
int main ()
{
	time test;
	cout<<"Enter the number of hours:";
	cin>>test.hours;
	cout<<"Enter the number of mins:";
	cin>>test.mins ;
	cout<<"Enter the number of secconds:";
	cin>>test.seconds ;
 int result =	func(test);
 	cout<<"total seconds: "<<result<<endl;
	return 0;
}