class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        map<char,int> m; 
        map<char,int> m1; 
        for(int i=0;i<s.length();i++){
            m[s[i]]++;
            m1[t[i]]++;
        }
        if(m==m1){
            return true;
        }
        return false;
    }
};