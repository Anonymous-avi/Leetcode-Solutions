class Solution {
    private:
      int operation(int num1 , int num2 , string c  ){
        if(c=="+"){
            return num1+num2;
        }
        else if(c=="-"){
            return num2-num1;
        }
        else if(c=="*"){
            return num1*num2;
        }
        else{
            return num2/num1;
        }
      }
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(int i=0 ; i<tokens.size() ; i++){
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();

                int result=operation(a,b,tokens[i]);
                st.push(result);
            }
            else{
                st.push(stoi(tokens[i]));
            }
        }


        return st.top();
        
    }
};