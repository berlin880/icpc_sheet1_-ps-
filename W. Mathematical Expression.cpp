#include<iostream>

using namespace std;

int main(){
int x , y,z;
char c,j;
cin>>x>>c>>y>>j>>z;
if(c=='+'){
	if(z==x+y){
		cout<<"Yes";
	} 
	else{
		cout<<x+y;
	}
	
}
else if(c=='-'){
	if(z==x-y){
		cout<<"Yes";
	}
	else{
		cout<<x-y;
	}
	
}
else if (c=='*'){
	if(z==x*y){
		cout<<"Yes";
	}
	else{
		cout<<x*y;
	}
}
return 0;
}
