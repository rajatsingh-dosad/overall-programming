
//*** Binary search recursively ***
//Binary search can only be applied on the array if the array is sorted

import java.util.*;

class BinarySearch {
    
    int binarySearch(int arr[], int start,int end, int val) {

        if(end>=start) {

            int mid = start+(end-start)/2;

            if(arr[mid]==val)
                return mid;
            else if(arr[mid] > val)
                return binarySearch(arr, start, mid-1, val);
            return binarySearch(arr, mid+1, end, val);
        }
        return -1;
    }
}

class BS_Main {

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        BinarySearch obj = new BinarySearch();

        System.out.print("Enter the size of the array: ");
        int size = sc.nextInt();

        int arr[] = new int[size];

        System.out.print("Enter the elements in the array: ");
        for(int i=0;i<size;i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter the element you want to search: ");
        int element = sc.nextInt();

        int ind = obj.binarySearch(arr,0,size-1,element);

        if(ind==-1) 
            System.out.println("The element is not present in the array!!!");
        else
            System.out.println("The element is present at index: "+ind);
    }
}


