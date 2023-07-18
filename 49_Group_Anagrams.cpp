class Solution {
public:
    string sorting(string s){
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(s[i]>s[j])
                    swap(s[i], s[j]);
            }
        }
        return s;
    }
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> m;
        int a=0;
        int sum=0;
        map<string, vector<string>> m1;
        for(int i=0;i<strs.size();i++){
            string word = sorting(strs[i]);
            m1[word].push_back(strs[i]);
        }
        for(auto x:m1){
            m.push_back(x.second);
        }
        return m;
    }
};
