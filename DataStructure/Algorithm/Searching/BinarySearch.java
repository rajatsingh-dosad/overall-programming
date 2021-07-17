
import java.util.*;


class BinarySearchDemo {
    
    static int binarySearch(int arr[], int val,int i,int j) {

        if(i<=j) {  
        int mid= (i+j)/2;
        if(arr[mid]==val)
            return mid;
        else if(arr[mid] < val)
            return binarySearch(arr, val, mid+1,j );
        else if(arr[mid] > val) 
            return binarySearch(arr, val, i, mid-1);
        
        }
        return -1;
    }
}

class Main {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array: ");
        int n  = sc.nextInt();

        
        int arr[] = new int[n];

        System.out.println("Enter the elements in the array in sorted form: ");

        
        for(int i=0;i<n;i++) {

            arr[i] = sc.nextInt();
        }

        System.out.print("Enter the element to search in the array: ");
        int find = sc.nextInt();

        
        int ind  = BinarySearchDemo.binarySearch(arr, find, 0, n-1);

        if(ind==-1)
            System.out.println("The element "+find+" is not present in the array");   
        else
            System.out.println("The element "+find+" is present at index "+ind);
            
        
    
    }

    
}
