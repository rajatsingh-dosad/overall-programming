
import java.io.*;

class Prog3 {

	public static void main(String[] args) throws IOException{

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n;
		System.out.print("Enter the size of array: ");
		n = Integer.parseInt(br.readLine());

		int[] arr = new int[n];

		System.out.println("Enter the elements in an array: ");
		for(int i=0;i<arr.length;i++) {

			arr[i] = Integer.parseInt(br.readLine());
		}

		int max = 0;

		for(int i=0;i<arr.length;i++) {

			if(arr[i]>max)
				max = arr[i];
		}

		System.out.println("Greatest element in the array is "+max);
	}
}


