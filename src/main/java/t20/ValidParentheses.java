package t20;

import java.util.Stack;

public class ValidParentheses {

    public boolean isValid(String s) {
        Stack<Character> st = new Stack<Character>();
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='('||s.charAt(i)=='{'||s.charAt(i)=='['){
                st.push(s.charAt(i));
            }else{
                char c = st.pop();
                if(s.charAt(i)==')'&&c!='('){
                    return false;
                }
                if(s.charAt(i)=='}'&&c!='{'){
                    return false;
                }
                if(s.charAt(i)==']'&&c!='['){
                    return false;
                }
            }
        }
        if(st.size()>0){
            return false;
        }
        return true;
    }
}
