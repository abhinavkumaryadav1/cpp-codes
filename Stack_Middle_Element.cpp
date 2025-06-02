#include <bits/stdc++.h> 
#include<stack>

void solve(stack<int>&inputStack,int count,int N)
{

//base conditon
if(count==N/2)
{
   inputStack.pop();
   return;
}
//storing the element that is to be popped to carry it until the recursive function starts returning
int num=inputStack.top();
inputStack.pop();

//recursive condiiton
solve(inputStack, count+1, N);

inputStack.push(num);

}

void deleteMiddle(stack<int>&inputStack, int N){
	
   int count=0;

   solve(inputStack,count,N);
   
}