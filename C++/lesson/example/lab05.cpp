#include<iostream>
#include <iomanip> //setw()��ƻݸ��J��Library 
using namespace std;

void reverse(int *x,int a,int b);

int main() {
	int i,a,b,tmp,x[10];
//	��J�n���઺��m�϶�--------------------------	
	cout<<"�п�JA��B(�}�C���ޭ�)�G";
	cin>>a>>b;
//	�N��J��A&B��ư����� (A&B�G����d��)---------
	if(a<0)
		a=0;
	else if(b>9)
		b=9;
	else if(a>b){
		tmp=a;
		a=b;
		b=tmp;
	}
//	��J�Q�ӼƦr---------------------------------- 
	cout<<"�п�J�Q�ӼƦr�G";
	for(i=0;i<10;i++){
		cin>>x[i];		
	}
//	���N��J���Ʀr�L�X---------------------------- 
	cout<<setw(7)<<"x:";
	for(i=0;i<10;i++){
		cout<<setw(3)<<x[i];
	}
	cout<<endl;
// 	�I�s�Ƶ{���N�϶��Ʀr����---------------------- 
	reverse(x,a,b);
//	�N����᪺���G�L�X---------------------------- 
	cout<<setw(7)<<"g(R):";
	for(i=0;i<10;i++){
		cout<<setw(3)<<x[i];
	}
	cout<<endl;
	
	system("pause");
	return 0;
}
//	���Ƶ{���O���N�n���઺�}�C�϶������X���s���}�C�A
//	�A�ѷs���}�C�i������A�N����n���}�C�϶���^���
//	�}�C�������C 
void reverse(int *x,int a,int b){
	int i,tmp,n,w[b-a+1];
	float z;
//	�N�n���઺�}�C�϶����X���s���}�C----------------- 
	for(i=0;i<=9;i++){
		if(i>=a && i<=b){
			w[i-a]=x[i];
		}
	}
//	�N�s�}�C������------------------------------------- 
	//	��A��B���ۮt�Ȭ�1�ɡA�u�ݰ��@������ 
	if(b-a!=1){
		for(i=0;i<(b-a)/2;i++){
			tmp=w[i];
			w[i]=w[b-a-i];
			w[b-a-i]=tmp;
		}
	}
	else{
			tmp=w[0];
			w[0]=w[1];
			w[1]=tmp;
	}
//	�N����n�᪺�s�}�C��^�h�쥻���϶�----------------- 
	for(i=0;i<=9;i++){
		if(i>=a && i<=b){
			x[i]=w[i-a];
		}
	} 
}

