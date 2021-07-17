
import java.util.Scanner;

class FindIndex {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		System.out.println("Enter the size of array: ");
		int size = sc.nextInt();

		int[] arr= new int[size+1];

		System.out.println("Enter the elements in an array: ");
		for(int i=1;i<=size;i++) {

			arr[i] = sc.nextInt();
		}
		System.out.println("Enter the number: ");
		int num = sc.nextInt();

		for(int i=1;i<=size;i++) {

			if(arr[i] == num) {
				System.out.println("Position: "+i);
				break;
			}
		}
	}
}
