
import java.util.*;

public class StringWellFormedParenthesis {

    public static void main(String[] args) {

        String str = "{()}";

        Stack<Character> st = new Stack<>();

        for (int i = 0; i < str.length(); i++) {

            char ch = str.charAt(i);
            if (st.empty()) 
               st.push(ch);
            else if (ch == '{' || ch == '(' || ch == '[') 
                st.push(ch);
            else if (ch == '}' && st.peek() == '{')
                st.pop();
            else if (ch == ')' && st.peek() == '(')
                st.pop();
            else if (ch == ']' && st.peek() == '[') {
                st.pop();
            }
        }

        if (st.empty())
            System.out.println("It is a well formed string");
        else
            System.out.println("It is not a well formed string");
    }

}
