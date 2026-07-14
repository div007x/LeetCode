#include<stack>
class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(auto ch: s){
            if(ch=='(' || ch=='[' || ch=='{'){
                st.push(ch);
            }else{
                if(st.empty()){
                    return false;
                }
                char a=st.top();
                st.pop();
                if((ch==')' && a=='(')|| (ch==']' && a=='[' )||(ch=='}' && a=='{') ){
                    continue;
                }
                else{
                return false;
                }
            }
        }
        
        return st.empty();
    }
};