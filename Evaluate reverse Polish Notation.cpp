class Solution {
public:
    int performOperation(int op1,int op2,char opr){
        switch(opr){
            case '+':
            return op1+op2;
            
            case '-':
            return op1-op2;

            case '*':
            return op1*op2;
                
            case '/':
            return op1/op2;
           
            default:
            return 0;
        }
    }
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        int ans;
        for(auto ch:tokens){
            if ( (ch == "+" || ch == "-" || ch == "/" || ch == "*") && (!st.empty()) ){
                int char2=st.top();
                st.pop();
                int char1=st.top();
                st.pop();
                ans=performOperation(char1, char2, ch[0]);
                st.push(ans);
            }
            else{
                int num = stoi(ch);
                st.push(num);
            }
        }
        return st.top();
    }
};
