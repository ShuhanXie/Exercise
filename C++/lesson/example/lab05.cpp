#include<iostream>
#include <iomanip> //setw()函數需載入的Library 
using namespace std;

void reverse(int *x,int a,int b);

int main() {
	int i,a,b,tmp,x[10];
//	輸入要反轉的位置區間--------------------------	
	cout<<"請輸入A跟B(陣列索引值)：";
	cin>>a>>b;
//	將輸入的A&B兩數做除錯 (A&B：反轉範圍)---------
	if(a<0)
		a=0;
	else if(b>9)
		b=9;
	else if(a>b){
		tmp=a;
		a=b;
		b=tmp;
	}
//	輸入十個數字---------------------------------- 
	cout<<"請輸入十個數字：";
	for(i=0;i<10;i++){
		cin>>x[i];		
	}
//	先將輸入的數字印出---------------------------- 
	cout<<setw(7)<<"x:";
	for(i=0;i<10;i++){
		cout<<setw(3)<<x[i];
	}
	cout<<endl;
// 	呼叫副程式將區間數字反轉---------------------- 
	reverse(x,a,b);
//	將反轉後的結果印出---------------------------- 
	cout<<setw(7)<<"g(R):";
	for(i=0;i<10;i++){
		cout<<setw(3)<<x[i];
	}
	cout<<endl;
	
	system("pause");
	return 0;
}
//	本副程式是先將要反轉的陣列區塊先取出放到新的陣列，
//	再由新的陣列進行反轉後，將反轉好的陣列區塊放回原來
//	陣列的部分。 
void reverse(int *x,int a,int b){
	int i,tmp,n,w[b-a+1];
	float z;
//	將要反轉的陣列區塊取出放到新的陣列----------------- 
	for(i=0;i<=9;i++){
		if(i>=a && i<=b){
			w[i-a]=x[i];
		}
	}
//	將新陣列做反轉------------------------------------- 
	//	當A跟B的相差值為1時，只需做一次反轉 
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
//	將反轉好後的新陣列放回去原本的區塊----------------- 
	for(i=0;i<=9;i++){
		if(i>=a && i<=b){
			x[i]=w[i-a];
		}
	} 
}

