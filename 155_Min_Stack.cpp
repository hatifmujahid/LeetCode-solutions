class MinStack {
public:
    stack<int> minimum;
    stack<int> stk;
    MinStack(){
    }
    void push(int val){
        if(stk.empty()){
            minimum.push(val);
        }  
        else{
            minimum.push(min(minimum.top(),val));
        }
        stk.push(val);
    }
    void pop(){
        stk.pop();
        minimum.pop();
    }
    int top(){
        return stk.top();
    }
    int getMin(){
        return minimum.top();
    }
};
