class MinStack {
public:
   stack<long long int>st;
   long long int minValue=-1;
    MinStack() {
        
    }
    
    void push(int value) {
       if(st.empty()){
        st.push(value);
        minValue=value;
       }
       else if(value<minValue){
        st.push(2LL*value-minValue);//iss result ko long long mei convert karna pasega other wise stack overflow ho jaayega 
        minValue=value;
       }
       else{
        st.push(value);
       }
        
    }
    
    void pop() {
        if(st.top()<minValue){
            minValue=2*minValue-st.top();
        }
        st.pop();
        
    }
    
    int top() {
        if(st.top()>minValue){
            return st.top();
        }
        else{
            return minValue;
        }
       
    }
    
    int getMin() {
        return minValue;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */