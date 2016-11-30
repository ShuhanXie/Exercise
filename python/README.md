# Python練習題

此為python練習題題目

## prog01
輸入一變數N，印出N層*形成的靠左直角三角形，如下圖。
```
N=3

* 
* * 
* * * 
```

PS.需有除錯功能，如N<2需顯示出錯誤，並可重新輸入。

## prog02
輸入一變數N，印出N層*形成的等腰三角形，如下圖。
```
N=3

    *     
  * * *   
* * * * * 
```

## prog03
輸入一變數N，印出如下圖的N層矩形數字陣列。
```
N=4

1	2	3	4
8	7	6	5
9	10	11	12
16	15	14	13 
```

## prog04
輸入一數值，將其反轉並和輸入的數值做相加，相加後的總和再做反轉是否和總和相同，如果不同就繼續反覆執行下去，結果如下。
```
Enter Number:954
	954
	459
-----------------------------------------
	1413
	3141
-----------------------------------------
	4554

```

## prog05
輸入一變數N，印出N*N如下圖結果。
```
Enter Number:9
   *  *  *  *  *  *  *     
*     *  *  *  *  *     *  
*  *     *  *  *     *  *  
*  *  *     *     *  *  *  
*  *  *  *     *  *  *  *  
*  *  *     *     *  *  *  
*  *     *  *  *     *  *  
*     *  *  *  *  *     *  
   *  *  *  *  *  *  *     
```
PS. 需有除錯，N>4。

## prog06
先輸入一變數num決定要輸入幾個參數，然後開始輸入參數，讀取參數後來判斷，規則如下：  
 找出 n!/m!,當n!=1*2*3*4*.....*n (n>=1)  
 例如：n=6,m=3, 6!=3!=720/6=120，如果有多個解，要找n為最小的一組答案印出。  

```
please enter number[quantity]:3
please enter number[value]:120
please enter number[value]:1
please enter number[value]:60
case  1 : 5   1

case  2 : Impossible

case  3 : 5   2
  
```

## prog07
先輸入一變數num決定要輸入幾個參數，然後開始輸入參數，讀取參數後來判斷，規則如下：  
 須檢查輸入a的絕對值是否大於1,並找出a=b^m,且印出m最大的那組b跟m(a跟b可為負數),  
 例如：16=4^4=2^8,這時候就要印出a=16,b=2,m=8

```
please enter number[quantity]:3
please enter number[value]:72
please enter number[value]:36
please enter number[value]:-125
a= 72  b= 72  m= 1
a= 36  b= 6  m= 2
a= -125  b= -5  m= 3
  
``` 

## prog08
輸入一範圍在1000~9999的數字N，並將該數字進行變化為X，判斷變化是否為某數字Z的平方，如果符合條件就將X印出，並計算有幾組X符合條件，N的變化規則如下：  
 每次只可變化一位數的數字，例如：N=7844，當X=3844時，Z=62，當X=7744時，Z=88，而N就有兩組符合條件的變化X。  

```
please enter number :7844
X= 3844
X= 7744
case= 2
  
``` 

## prog09
輸入一數字N，將N的每一位數的數值進行相加得到f(N)，然後重複循環這個步驟直到得到的X(N)小於10為止，並印出最後的X(N)。  
 f(N) = 1+2+3+4+5+6+7+8+9+2 = 47  
 f(f(N)) = 4+7 = 11  
 f(f(f(N))) = 1+1 = 2  
 X(1234567892) = 2  
 PS. 0不可處理。  
```
please enter number :126354596
5
  
```  

## exam01
先輸入N代表要輸入幾個參數，輸入完參數後，印出這接參數的總和跟平均(小數點捨去)，然後按照輸入順序印出參數，再印出由小到大排序後的參數。  
``` 
please enter number[quantity]:6
please enter number[value]:22
please enter number[value]:6
please enter number[value]:19
please enter number[value]:82
please enter number[value]:6
please enter number[value]:42
sum= 177
average= 29
22   6   19   82   6   42   
6   6   19   22   42   82   
``` 
## exam02
輸入N，然後產生一個數字值為1~N*N的亂數陣列並印出，並再這個一維振列轉換為N*N的矩陣印出，最後再判斷這個矩陣的兩條對角線上的數字分別相加是否相同，並印出Yes或No跟對角線相加的數值。  

``` 
please enter number[quantity]:5
arr=[ 14   5   17   19   2   4   20   12   6   11   23   22   18   25   3   7   13   15   1   10   24   8   9   21   16   ]
Arry=
  14    5   17   19    2  
   4   20   12    6   11  
  23   22   18   25    3  
   7   13   15    1   10  
  24    8    9   21   16  
No, value1= 69  value2= 63

``` 

## exam03
約瑟夫問題
