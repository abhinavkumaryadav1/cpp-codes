#include<iostream>
#include<map>
#include<unordered_map>
#include<vector>
using namespace std;

int main() 

{

unordered_map<string,int> mapp;
pair<string,int> pairr("manish",2);
mapp.insert(pairr);

mapp["abhinav"]++;
cout<<mapp.at("abhinav");
cout<<mapp.at("manish");

 cout<<endl;   
// cout<<mapp.size();


// vector <int> a;
// a.push_back(2);
// a.push_back(3);
// a.push_back(4);
// a.push_back(5);
// a.push_back(6);
// a.push_back(7);
// a.push_back(8);
// a.push_back(9);
// a.push_back(29);
// cout<<"enter values"<<endl;
// for (int i = 0; i < 9; i++)
// {
//     int j;
//     cout<<"enter next";
//     cin>>j;
//       a.push_back(j);
// }

// for (int i = 0; i < 9; i++)
// {
   
//       cout<<a.at(i);
// }


return 0;
}