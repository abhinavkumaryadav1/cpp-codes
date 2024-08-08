#include<iostream>
using namespace std;
#include<vector>
    
    int compress(vector<char>& chars) {

        int i = 0;
        int ans = 0;
        int n = chars.size();
        while (i < n) {

            int j = i + 1;
            while (j < n && chars[i] == chars[j]) {

                j++;
            }

            chars[ans] = chars[i];
            ans++;

            int count = j - i;

            if (count > 1) {
                string cnt = to_string(count);
                for (char ch : cnt) {
                    chars[ans] = ch;
                    ans++;
                }
            }
            i = j;
        }
        return ans;
    }

int main()
{
    

vector<char> str;

str.push_back('a');
str.push_back('a');
str.push_back('a');
str.push_back('b');
str.push_back('b');
    
    
    
    cout<<"the compressed string length is "<<compress(str);
    return 0;
}