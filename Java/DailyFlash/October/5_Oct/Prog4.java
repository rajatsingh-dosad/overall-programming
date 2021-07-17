
import java.io.*;

class Prog4 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the number of rows: ");
		int row = Integer.parseInt(br.readLine());

		int[] arr = new int[row];
		System.out.println("Enter elements in array: ");
		for(int i=0;i<row;i++) {

			arr[i] = Integer.parseInt(br.readLine());

		}
		
		System.out.print("Original array : { ");
		for(int i=0;i<row;i++) {

			System.out.print(arr[i]+" ");
		}
		System.out.println("}\n");
	
		
		System.out.println("Enter index at which you want to add element(index): ");
		int index = Integer.parseInt(br.readLine());
		
		System.out.println("Enter the number to add(new Number) : ");
		int num = Integer.parseInt(br.readLine());

		arr[index] = num;

		System.out.print("New array : { ");
		for(int i=0;i<row;i++) {

			System.out.print(arr[i]+" ");
		}
		System.out.println("}\n");
	}
}
