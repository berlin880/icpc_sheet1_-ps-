#include<iostream>

using namespace std;

int main(){
    double  x;
    double y;
    cin>>x;
    cin>>y;
    int  sum = x+y;
    long long times = (x*y);
     int diff = x-y;
    cout<<x << " + " << y << " = " << sum<<endl;
    cout<<x << " * " <<y <<" = " <<times<<endl;
    cout<<x << " - " <<  y  << " = " << diff<<endl;
    return 0;
}
