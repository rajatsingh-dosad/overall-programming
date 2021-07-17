import java.util.Scanner;

class Stack {

     int top;
     int size;
     char arr[] = new char[30];

    Stack() {
        top = -1;
        size = 30;
    }

    public  int isEmpty() {

        if(top==-1)
            return 1;
        return 0;
    }

    public  int isFull() {

        if(top==size-1)
            return 1;
        return 0;
    }

    public void push(char val) {

        arr[++top] = val;
    }

    public  void pop() {
        top--;
    }

    public  void print() {

        for(int i=top;i>=0;i--) {

            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }

    public int match(char ch1,char ch2) {

        if((ch1=='{' && ch2=='}')  || (ch1=='[' && ch2==']') || (ch1=='(' && ch2==')'))
            return 1;
        return 0;
    }
   
    int validate(String s) {

        for(int i=0;i<s.length();i++) {

            char ch = s.charAt(i);

            if(ch=='(' || ch=='[' || ch=='{') {
                push(ch);
                continue;
            }
            else if(ch==']' || ch=='}' || ch==')') {

                if(isEmpty()==1) {
                    return 0;
                }
                else {
                    if(match(arr[top],ch)==1) {
                        pop();
                        continue;
                    }
                    else {
                        return 0;
                    }
                }
            }

        }

        if(isEmpty()==1)
            return 1;
        return 0;
    } 
}

class Main {

    public static void main(String[] args) {

        Stack s = new Stack();

        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the expression: ");

        String pat = sc.nextLine();;

        if(s.validate(pat)==1) {
            System.out.println("The string is valid");
        }
        else 
            System.out.println("String is not valid");

    }
}
