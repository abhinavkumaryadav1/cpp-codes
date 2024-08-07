#include<iostream>
#include<string>
using namespace std;

bool isvalid(char ch)
{
    if ((ch>='a'&&ch<='z') || (ch>='A'&&ch<='Z') || (ch>='0'&&ch<='9'))
    {
    return 1;
    }

    else 
    return 0;
    
}

char lowercase(char ch)
{
if ((ch >= 'a' && ch <= 'z') || (ch>='0'&&ch<='9'))
return ch;
 
    else
    {
        char tem = ch-'A'+'a';
        return tem;
    }
}

bool chkp(string temp)
{
    int S=0;
    int e=temp.length()-1;
    while(S<=e)
 {  
            if (temp[S]!=temp[e])
        {
            return 0;
        }
        
    else
    {
        S++;
        e--;
        
    }

 }
        
        
        
        return 1;
        
     
}



    bool isPalindrome(string s) {

    string temp="";

    for (int i = 0; i<s.length(); i++)
    {
        
        if (isvalid(s[i]))
        {
             temp.push_back(s[i]);
        }
        
        
       
    }   
    

    for(int i=0;i<temp.length();i++)
        {
            temp[i]=lowercase(temp[i]);
        }

    
    return chkp(temp);

    }

int main()
{
    string str;
    getline(cin,str);
    cout<<"this is valid palindrom? "<<isPalindrome(str);
    return 0;
}

