#include<iostream>

using namespace std;

int main(){
int x,y;
char c;
cin>>x>>c>>y;
if (c=='>'){
	if(x>y){
		cout<<"Right";
	}
	else{
		cout<<"Wrong";
	}
	
}
else if (c=='=')
{
	if(x==y){
		cout<<"Right";
	}
	else{
		cout<<"Wrong";
	}
}
else if(c=='<'){
	if(x<y){
		cout<<"Right";
	}
	else{
		cout<<"Wrong";
	}
}
	return 0;
}
