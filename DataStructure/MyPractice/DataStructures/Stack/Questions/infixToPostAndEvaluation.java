
import java.util.*;
import java.util.Stack;

class InfixToPostAndEvaluation {

    public static int priority(char ch) {

        if(ch=='*' || ch=='/')
            return 2;
        return 1;
    }

    public static String convert(String infix) {

        Stack<Character> s = new Stack<>();

        String postFix = "";
        for(int i=0;i<infix.length();i++) {

            char ch = infix.charAt(i);
            if(ch==' ') {
                continue;
            }
            else if(ch>='a' && ch<='z' || (ch>='A' && ch<='Z')) {
                postFix += ch;
                continue;
            }
            else if(ch=='(') {
                s.push(ch);
                continue;
            }
            else if(ch==')') {
                
                while(!s.isEmpty() && s.peek()!='(') {
                    postFix += s.peek();
                    s.pop();
                }
                s.pop();
                continue;
            }
            else if(!s.isEmpty() && priority(ch) <= priority(s.peek()) ) {
                while(!s.isEmpty() && priority(ch) <= priority(s.peek())) {

                    postFix += s.peek();
                    s.pop();
                }
                s.push(ch);
            }
            else 
               s.push(ch);
                
            }
        
        while(!s.isEmpty()) {
            postFix += s.peek();
            s.pop();
        }
        return postFix;
    }

    public static int evaluation(String postfix) {

        Stack<Integer> s2 = new Stack<>();

        Scanner sc = new Scanner(System.in);


        int res = 0;
        for(int i=0;i<postfix.length();i++) {

            char ch = postfix.charAt(i);

            if(ch>='a' && ch<='z' || ch>='A' && ch<='Z') {

                System.out.println("Enter the value for character: "+ch);
                s2.push(sc.nextInt());
            }
            else {

                int val1 = s2.pop();
                int val2 = s2.pop();
                
                if(ch=='*')
                    res = val2 * val1;
                else if(ch=='/')
                    res = val2 / val1;
                else if(ch=='+')
                    res = val2 + val1;
                else if(ch=='-')
                    res = val2 - val1;

                s2.push(res);
            }
            
        }
        res = s2.pop();
        return res;
    }
}

class InfixToPostAndEvaluationRunner {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the infix expression: ");
        String infix = sc.nextLine();


        String postfix = InfixToPostAndEvaluation.convert(infix);
        System.out.println(postfix);

        int result = InfixToPostAndEvaluation.evaluation(postfix);
        System.out.println("The result of the postfix expression is: "+result);

    }
}
