#include<iostream>
#include <iomanip>
using namespace std;

void MultiArry(int a,int b);

int main() {
	int i,a,b,tmp,x[10],sum=0;
//	��J�n�L�X�X�ӭ��k�}�C�A��n�L�X����X--------------------------	
	cout<<"�п�JA��B�G";
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
