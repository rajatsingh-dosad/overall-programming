import java.util.Scanner;

class MyLinkedList {

    Node head;
 
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
}

public class SinglyLL {

    public static void main(String[] args) {
        
        MyLinkedList obj = new MyLinkedList(); 

        Scanner sc = new Scanner(System.in);

        for(int i=0;i<5;i++) {

            System.out.print("Enter the data: ");
            int data = sc.nextInt();
            obj.insertAtLast(data);
        }
        
        obj.insertAtFirst(100);
        System.out.print("\nThe list is: ");
        obj.traverse();

        obj.deleteAtLast();
        System.out.print("The list after deleting last element is: ");
        obj.traverse();

        obj.deleteAtFirst();
        System.out.print("The list after deleting first element is: ");
        obj.traverse();

        System.out.print("Enter the position you want to insert the data: ");
        int pos = sc.nextInt();
        System.out.print("Enter the data: ");
        int val = sc.nextInt();
        obj.insertAtPos(pos, val);;
        System.out.print("The element after inserting at pos "+pos +" is: ");
        obj.traverse();
    }
}