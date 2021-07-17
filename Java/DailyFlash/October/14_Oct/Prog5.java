
import java.util.*;

class Prog5 {

	static boolean checkMonotonic(int arr[],int size) {
		
		int flag = 0;
		for(int i=0;i<size-1;i++) {
				
			if(arr[i]<=arr[i+1])
				continue;
			else {
				flag = 1;
				break;
			}
			
		}
		if(flag == 0)
			return true;
		else
			return false;
	}

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the size of array: ");
		int size = sc.nextInt();

		int[] arr = new int[size];
		System.out.println("Enter the elements in the array: ");
		for(int i=0;i<size;i++) {

			arr[i] = sc.nextInt();
		}

		if(checkMonotonic(arr,size))
			System.out.println("The array is monotonic.");
		else
			System.out.println("The array is not monotonic.");
	}
}
