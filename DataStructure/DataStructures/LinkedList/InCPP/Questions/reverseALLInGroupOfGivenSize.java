
import java.util.*;

class ReverseALLInGroupOfGivenSize {

    static Node head;
 
    static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            next = null;
        }
    }

    public void insertAtLast(int data) {
       
        Node temp = new Node(data);
        Node p = head;
        if(head==null)
            head = temp;
        else {
            while(p.next != null) 
                p = p.next;
            p.next = temp; 
        }
    }

    public void insertAtFirst(int data) {

        Node temp = new Node(data);
        temp.next = head;
        head = temp;
    }

    public void deleteAtLast() {

        Node p = head;
        while(p.next.next!=null) {
            p = p.next;
        }
        p.next = null;
    }

    public void deleteAtFirst() {
        head = head.next;
    }

    public void insertAtPos(int pos,int data) {

        Node temp = new Node(data);
        Node p = head;

        if(pos==1) {
            temp.next = head;
            head = temp;
            return;
        }
        while(pos-1>1) {
            p = p.next;
            pos--;
        }
        temp.next = p.next;
        p.next = temp;

    }

    public void traverse() {

        Node p = head;

        while(p!=null) {
            System.out.print(p.data+" ");
            p = p.next;
        }
        System.out.println();
    }

    Node reverseInGroupOfGivenSize(Node head,int size) {

        Node p = null;
        Node c = head;
        Node n = null;
        int i = 0;

        while(c!=null && i<size) {
            n = c.next;
            c.next = p;
            p = c;
            c = n;
            i++;
        }

        if(n!=null)
            head.next = reverseInGroupOfGivenSize(c,size);
        
        return p;
    }
}

class SinglyLL {

    public static void main(String[] args) {
        
        
        Scanner sc = new Scanner(System.in);
        
        ReverseALLInGroupOfGivenSize obj = new ReverseALLInGroupOfGivenSize(); 
        
        System.out.print("Enter the number of elements to be added in the LL: ");
        int n = sc.nextInt();
        
        for(int i=0;i<n;i++) {

            System.out.print("Enter the data: ");
            int data = sc.nextInt();
            obj.insertAtLast(data);
        }

        obj.traverse();
        
        System.out.print("\nEnter the size you want to reverse the LL with: ");
        int size = sc.nextInt();
        ReverseALLInGroupOfGivenSize.head = obj.reverseInGroupOfGivenSize(ReverseALLInGroupOfGivenSize.head,size);
        obj.traverse();
     
    }
}