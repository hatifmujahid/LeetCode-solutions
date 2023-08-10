class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]=="+" || tokens[i]=="*" || tokens[i]=="-" || tokens[i]=="/"){
                int n = s.top();
                s.pop();
                int n1 = s.top();
                s.pop();
                int res=0;
                if(tokens[i]=="+"){
                    res = n1+n;
                }if(tokens[i]=="-"){
                    res = n1-n;
                }if(tokens[i]=="*"){
                    res = n1*n;
                }if(tokens[i]=="/"){
                    res = n1/n;
                }
                s.push(res);
            }
            else{
                s.push(stoi(tokens[i]));
            }
            
        }
        return s.top();
    }
};
