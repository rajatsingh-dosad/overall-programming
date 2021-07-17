
import java.util.*;

class Prog4 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the size of array: ");
		int size = sc.nextInt();
		
		String[] arr = new String[size];

		System.out.println("Enter the string in arraY: ");
		for(int i=0;i<size;i++) {

			arr[i] = sc.next();
		}
		
		System.out.println("OUTPUT:");
		for(int i=0;i<size;i++) {

			for(int j=0;j<=i;j++) {

				System.out.print(arr[i]+" ");
			}
			System.out.println();
		}

	}
}


