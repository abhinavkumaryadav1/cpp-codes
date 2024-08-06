#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

    
    bool UniqueOccurrences(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        vector<int> v;

        for (int i = 0; i < arr.size(); i++) {
            int cnt = 1;

            // Count occurrences of the current element
            while (i + 1 < arr.size() && arr[i] == arr[i + 1]) 
            {
                cnt++;
                i++;
            }

            v.push_back(cnt);
        }

        sort(v.begin(), v.end());

        for (int i = 1; i < v.size(); i++) {
            if (v[i] == v[i - 1]) {
               return false;
                
            }
        }

       return true;
    
    }


int main()
{

vector<int> demo={1,2,1,2,2,3,3,3,3,4};

cout<<"it is ";
if(UniqueOccurrences(demo)==1)

    cout<<"true";
     
    else {
    cout<<"false";
    }
    cout<<" that the array is unique";


    return 0;
}