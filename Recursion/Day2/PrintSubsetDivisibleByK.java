
import java.util.*;

class PrintSubsetDivisibleByK {
    
    void subSetDivisibleByK(int i,int arr[], ArrayList<Integer> l,int k)  {

        if(i==arr.length) {
            int sum = 0;
            for(Integer val: l) {
                sum = sum + val;
            }

            if(sum%k==0 && sum!=0)
                System.out.println(l);
            return;
        }

        l.add(arr[i]);
        subSetDivisibleByK(i+1, arr, l,k);

        l.remove(l.size()-1);
        subSetDivisibleByK(i+1, arr, l,k);
    }
}

class PrintSubsetDivisibleByK_Main {

    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        PrintSubsetDivisibleByK obj = new PrintSubsetDivisibleByK();

        System.out.print("Enter the size of the array: ");
        int size = sc.nextInt();

        int arr[] = new int[size];

        System.out.print("Enter the elements in the array: ");
        for(int i=0;i<size;i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter the number from which you want to divide: ");
        int k = sc.nextInt();

        ArrayList<Integer> l = new ArrayList<>();

        System.out.println("The subsequence of the array that are divisible by "+ k +" are: ");
        obj.subSetDivisibleByK(0,arr,l,k);
    }
}