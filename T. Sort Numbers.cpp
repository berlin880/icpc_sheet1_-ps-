#include<iostream>

using namespace std;

int main(){
	int x , y,z;
	cin>>x>>y>>z;
	if(x<=y&&x<=z){
		if(y<=z){
			cout<<x<<endl<<y<<endl<<z;
		
		}
		else{
			cout<<x<<endl<<z<<endl<<y;
		}
		
	}
	else if(y<=x&&y<=z){
		if(x<=z){
			cout<<y<<endl<<x<<endl<<z;
			
		}
		else{
		
		cout<<y<<endl<<z<<endl<<x;
	}
	}
	else if (z<=x && z<=y){
		if(x<=y){
			cout<<z<<endl<<x<<endl<<y;
		}
		else{
			cout<<z<<endl<<y<<endl<<x;
		}
		
	}
	cout<<"\n\n"<<x<<endl<<y<<endl<<z;
	return 0;
}
