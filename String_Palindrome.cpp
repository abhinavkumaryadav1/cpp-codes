#include<iostream>
using namespace std;
#include<string>

char lowercase(char ch)
{
if (ch>='a' && ch<='z')
return ch;
 
    else
    {
        ch=ch-'A'+'a';
        return ch;
    }
}



 bool CheckPalindrome(char str[],int size)
 {
    int s=0;
    int e=size-1;
    

    while (s<=e)
    
    
    {
        
        if (lowercase(str[s])!=lowercase(str[e]))
        {
            return false;
        }
        
      else{          

    ++s;
    --e;   } 
    }
    return true;
 }



int main() 

{
int s;
cout<<"enter size"<<endl;
cin>>s;
char str[s];
cout<<"enter character array"<<endl;
cin>>str;

cout<<"the string is palindrome "<<CheckPalindrome(str,s);

return 0;
}