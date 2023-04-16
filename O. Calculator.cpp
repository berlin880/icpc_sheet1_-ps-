#include<iostream>

using namespace std;

int main(){
	char x;
	int  l,k;
	cin>>l>>x>>k;
	int res;
	if(x=='+'){
		res = l +k;
		cout<<res;
	}
	else if (x=='*'){
		res = l*k;
		cout<<res;
	}
	else if (x=='-'){
		res = l-k;
		cout<<res;		
	}
	else{
		res = l/k;
		cout<<res;
	}
	
	return 0;
}
