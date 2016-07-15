#include<iostream>
using namespace std;

int main() {
	int i,x,sum=0;
	
	cout<<"i=";
	cin>>x;
	if(x<=15){
		for(i=1;i<=x;i++){
			if((i)!=x){
				sum+=i;
				cout<<i<<"+";
			}
			else if(i==x){
				sum+=i;
				cout<<i<<"="<<sum<<endl;
			}
		}
	}
	else{
		for(i=1;i<=x;i++){
			sum+=i;
		}
		for(i=1;i<=x;i++){
			if(i<6){
				cout<<i<<"+";
			}
			else if(i==6)
				cout<<".......+";
			else if(i>=(x-4) && i!=x) {
				cout<<i<<"+";
			}
			else if(i==x){
				cout<<i<<"="<<sum<<endl;
			}
		}
	}
	system("pause");
	return 0;
}
