#include <list>
using namespace std;
class Solution {
public:
    bool check_valid(char v2, char v){
        if(v=='(' && v2==')')
            return true;
        else if(v=='{' && v2=='}')
            return true;
        else if(v=='[' && v2==']')
            return true;
        return false;
    }
    bool isValid(string s) {
        list<char> l1;
        for(int i=0;i<s.length();i++){
            if(l1.empty())
                l1.push_back(s[i]);
            else if(s[i]=='(' || s[i]=='{' || s[i]=='[')
                l1.push_back(s[i]);
            else if(!check_valid(s[i],l1.back()))
                return false;
            else if(check_valid(s[i],l1.back()))
                l1.pop_back();
        }
        if(l1.size()>0){
            return false;
        }
        return true;
    }
};
