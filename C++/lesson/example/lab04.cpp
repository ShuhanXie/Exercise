#include<iostream>
using namespace std;

void reverse(int *x);

int main() {
	int i,x[10];
	
	cout<<"請輸入十個數字：";
	for(i=0;i<10;i++){
		cin>>x[i];		
	}
	for(i=0;i<10;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
	
	reverse(x);
	
	for(i=0;i<10;i++){
		cout<<x[i]<<" ";
	}
	cout<<endl;
	
	system("pause");
	return 0;
}
void reverse(int *x){
	int i,tmp;
	for(i=0;i<5;i++){
		tmp=x[i];
		x[i]=x[9-i];
		x[9-i]=tmp;		
	}
}
