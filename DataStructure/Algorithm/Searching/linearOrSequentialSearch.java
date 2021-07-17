
import java.util.*;

class LinearOrSequentialSearch {

    static int search(int arr[],int find) {

        int ind = -1;
        int i;
        for(i=0;i<arr.length;i++) {

            if(find==arr[i])
                return i;
        }
        return ind;

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array: ");
        int n  = sc.nextInt();

        int arr[] = new int[n];

        System.out.println("Enter the elements in the array: ");

        for(int i=0;i<n;i++) {

            arr[i] = sc.nextInt();
        }

        System.out.print("Enter the element to search in the array: ");
        int find = sc.nextInt();

        int ind = search(arr, find);
        if( ind > -1)
            System.out.println("The element "+find+" is present at index "+ind);
        else
            System.out.println("The element "+find+" is not present in the array");
        
    }
}