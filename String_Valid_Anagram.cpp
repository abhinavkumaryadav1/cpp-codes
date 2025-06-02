class Solution {
public:
    bool isAnagram(string s, string t) {

     if(s.length()!=t.length()){
            return false;
        }
        
        int len = s.length();
        
        int freq[26];
        
        int indexA = 0;
        int indexB = 0;
        
        while(indexA<len && indexB<len){
            char charA = s[indexA];
            int freqIndexA = charA - 97;
            
            freq[freqIndexA]+=1;
            
            char charB = t[indexB];
            int freqIndexB = charB - 97;
            
             freq[freqIndexB]-=1;
            
            indexA++;
            indexB++;
        }
        
        for(int i=0;i<26;i++){
            if(freq[i]!=0){
                return false;
            }
        }
        
        return true;
    }
};