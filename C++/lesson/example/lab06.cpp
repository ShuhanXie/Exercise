#include<iostream>
#include <iomanip>
using namespace std;

void MultiArry(int a,int b);

int main() {
	int i,a,b,tmp,x[10],sum=0;
//	輸入要印出幾個乘法陣列，跟要印出乘到幾--------------------------	
	cout<<"請輸入A跟B：";
	cin>>a>>b;
//	
	MultiArry(a,b);
	
	system("pause");
	return 0;
}
void MultiArry(int a,int b){
	int i,j;
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			cout<<i<<"x"<<j<<"="<<i*j<<endl;
		}
		cout<<endl;
	}		
}
