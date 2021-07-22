
//Reverse an array using recursion

import java.util.*;

class ReverseAnArray {
    
    void reverse(int arr[],int i) {

        if(i >= (arr.length)/2) 
            return;
        
        int temp = arr[i];
        arr[i] = arr[arr.length-1-i];
        arr[arr.length-1-i] = temp;
        reverse(arr,i+1);
    }
}

class ReverseArray_Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        ReverseAnArray obj = new ReverseAnArray();

        System.out.print("Enter the size of array: ");
        int size = sc.nextInt();

        int[] arr = new int[size];

        System.out.print("Enter the elements in the array: ");
        for(int i=0;i<size;i++) {
          arr[i]= sc.nextInt();
        }

        obj.reverse(arr,0);

        System.out.print("The reverse of the array is: ");
        for(int i=0;i<size;i++) {
            System.out.print(arr[i]+" ");
        }
        System.out.println();
    }
}
