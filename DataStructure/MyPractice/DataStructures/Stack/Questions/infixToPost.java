
import java.util.Stack;
import java.util.*;

class infixToPost {

    public int priority(char ch) {

        switch (ch) {
            case '+':
            case '-':
                return 1;

            case '*':
            case '/':
                return 2;
        }
        return 0;
    }

    public String convert(String infix) {

        Stack<Character> s = new Stack<>();

        String post = "";

        for (int i = 0; i < infix.length(); i++) {

            char ch = infix.charAt(i);
            if (ch == ' ')
                continue;
            else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                
                post = post + ch;
                continue;
            }

            else if(ch=='(') {
                s.push(ch);
                continue;
            }

            else if (ch == ')') {

                while (s.peek() != '(') {

                    post = post + s.peek();
                    s.pop();
                }
                s.pop();
                continue;
            } else if (!s.isEmpty() && priority(ch) <= priority(s.peek())) {

                while (!s.isEmpty() &&  priority(ch) <= priority(s.peek())) {
                    post = post + s.peek();
                    s.pop();
                }
                s.push(ch);
            } else
                s.push(ch);

        }

        while (!s.empty()) {
            post = post + s.peek();
            s.pop();
        }

        return post;
    }
}

class Runner {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the infix expression: ");
        String infix = sc.nextLine();

        infixToPost obj = new infixToPost();

        String post = obj.convert(infix);

        System.out.println("The postfix expression is: " + post);

    }
}
