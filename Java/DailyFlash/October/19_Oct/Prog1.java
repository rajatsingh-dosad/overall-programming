
import java.util.Scanner;

class ReplaceDemo {

	public static void main(String[] args) {
		
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the size of array: ");
		int size = sc.nextInt();

		String[] arr = new String[size];

		System.out.println("Enter the elements in array: ");
		for(int i=0;i<size;i++) {
			
			arr[i] = sc.next();
		}

		System.out.print("Enter the name you want to replace: ");
		String name = sc.next();
		
		System.out.print("Enter the name to replace with: ");
		String replace = sc.next();
		
		for(int i=0;i<size;i++) {

			if(arr[i].equals(name)) {
				arr[i] = replace;
				break;
			}
		}
		
		System.out.println("Elements in array: ");
		for(int i=0;i<size;i++) {

			System.out.print(arr[i]+" ");
		}

		System.out.println();	

	}
}
