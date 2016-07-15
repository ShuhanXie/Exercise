#include<iostream>
using namespace std;

int main() {
	int i,x,sum=0;
	
	cout<<"i=";
	cin>>x;
	
	for(i=1;i<=x;i++){
		if(i!=x){
			sum+=i;
			cout<<i<<"+";
		}
		else if(i==x){
			sum+=i;
			cout<<i<<"="<<sum<<endl;
		}
	}
	system("pause");
	return 0;
}
