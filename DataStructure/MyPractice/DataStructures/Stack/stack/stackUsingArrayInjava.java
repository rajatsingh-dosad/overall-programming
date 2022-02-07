
class Stack {

    int size;
    int top;
    int arr[];

    Stack() {
        size = 10;
        top = -1;
        arr= new int[10];
    }

    public void push(int data) {

        arr[++top] = data;
    }

    public void print() {

        for(int i=top;i>=0;i--) {

            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }

    public int pop() {

        return arr[top--];
    }

    public static void main(String[] args) {
        
        Stack s = new Stack();
        s.push(10);
        s.push(20);
        s.push(30);

        s.print();

        int data = s.pop();
        System.out.println("Element deleted is: "+data);

        s.print();

    }
}