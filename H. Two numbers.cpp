#include<iostream>
#include<cmath>

using namespace std;

int main(){
	double m,n;
	cin>>m>>n;
	double div;
	div = m/n;
	cout<<"floor "<<m<<" / "<<n <<" = "<<floor(div)<<endl;
	cout<<"ceil "<<m<<" / "<<n <<" = "<<ceil(div)<<endl;
	cout<<"round "<<m<<" / "<<n <<" = "<<round(div)<<endl;
	return 0;
}
