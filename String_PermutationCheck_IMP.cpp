#include<iostream>
using namespace std;
#include<string>

bool CheckWindow(int a[],int b[])
{
    for(int i=0;i<26;i++)
    {
        if(a[i]!=b[i])
        {
            return 0;
        }
    }

return 1;
}



    bool checkInclusion(string s1, string s2) {

        int count1[26];
        int count2[26];

        for(int i=0;i<s1.length();i++)
        {
            int index=s1[i]-'a';
            count1[index]++;
        }
          int i=0;
          int WindowSize=s1.length();
        while(i<WindowSize && i<s2.length())
        {
            int index= s2[i]-'a';
            count2[index]++;
            i++;
        }

        if(CheckWindow(count1,count2))
        {
            return 1;
        }

        while(i<s2.length())
        {
            char newch=s2[i];
            int index=newch-'a';
            count2[index]++;

            char oldch= s2[i-WindowSize];
            index = oldch-'a';
            count2[index]--;
             i++;

            if(CheckWindow(count1,count2))
        {
            return 1;
            
        }
        }

    return 0;
    }

int main() 

{
    
    string st1;
    string st2;
cout<<"Enter both string to check wether there exist a permutation of string 1 in string 2"<<endl;
    getline(cin,st1);
    
    getline(cin,st2);


    cout<<"There is a permutation of string 1 in string 2? "<<checkInclusion(st1,st2);



return 0;
}