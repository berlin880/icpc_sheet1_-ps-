 #include<iostream>
 #include <math.h>
 #include<iomanip>
 using namespace std;
 
 int main(){
 	double x;
 	cin>>x;
 	double area;
 	area=  3.141592653 *pow(x,2);
	cout<<fixed << setprecision(9)<<area; 
 	
 	return 0;
 }
