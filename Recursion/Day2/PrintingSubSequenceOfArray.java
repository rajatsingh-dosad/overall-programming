
// In the program I have used ArrayList to store all the subset of the array

import java.util.*;

class PrintingSubSequenceOfArray {

    void subSequence(int i,int arr[],ArrayList<Integer> l) {

        if(i==arr.length){
            System.out.println(l);
            return;
        }

        l.add(arr[i]);
        subSequence(i+1, arr, l);


        l.remove(l.size()-1);
        subSequence(i+1, arr, l);

    }

}

class PrintingSubSequenceOfArray_Main {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        PrintingSubSequenceOfArray obj = new PrintingSubSequenceOfArray();

        System.out.print("Enter the size of the array: ");
        int size = sc.nextInt();

        int arr[] = new int[size];

        System.out.print("Enter the elements in the array: ");
        for(int i=0;i<size;i++) {
            arr[i] = sc.nextInt();
        }

        ArrayList<Integer> l = new ArrayList<>();

        System.out.println("The subsequence of the array are: ");
        obj.subSequence(0,arr,l);

    }
}
