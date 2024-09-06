#include<iostream>
using namespace std;
 int main()
 {

 string arr="abbbbbaba";
int n=arr.size(); 
char ch;
cout<<"enter the element in which you want to perform code"<<endl;
cin>>ch;
      
      for(int i=0;i<n;i++)
      {
         
          if(arr[i]==ch)
          
          break;
          
          
          else if(i==n-1 && arr[i]!=ch)
          return -1;
      }
      
      int first=0;
      int second =0;
      for(int i=0;i<n;i++)
      {
          if(arr[i]==ch)
          {
              first=i;
              break;
          }
      }
      for(int i=n-1;i>=0;i--)
      {
          if(arr[i]==ch)
          {
              second=i;
              break;
          }
      }
       
       for(int i=first;i<=second;i++)
       {
           if(arr[i]!=ch)
           {
               break;
           }
           else if ((i==second) && (arr[i]==ch))
           {
               return 0;
           }
       }
       
       
        int currnonch=0;

int winsize=0;

for(int i=0;i<n;i++)
{
    if (arr[i]==ch)
    {
        winsize++;
    }
    
}



for (int i = 0; i < winsize; i++)
{
    if (arr[i]!=ch)
    {
        currnonch++;
    }
    
}
int minnonch=currnonch;
int start=0;
int end=winsize-1;

while (start<(n-winsize))
{
    if (arr[start]!=ch)
    {
       currnonch--;
    }

    start++;
    end++;

    if (arr[end]!=ch)
    {
        currnonch++;
    }
    
    if(currnonch<minnonch)
    {
        minnonch=currnonch;
    }
    
}

cout<< minnonch;
return 0;
 }