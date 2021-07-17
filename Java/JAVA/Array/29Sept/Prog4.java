
import java.io.*;

class Prog4 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter the size of array: ");
		int x = Integer.parseInt(br.readLine());

		int[] iarr = new int[x];
		
		System.out.println("Enter the "+x+" elements in array: ");
		for(int i=0;i<iarr.length;i++) {

			iarr[i] = Integer.parseInt(br.readLine());
		}
		
		System.out.println("Elements in array are: ");
		for(int i=0;i<iarr.length;i++) {

			System.out.println(iarr[i]);
		}
	}
}
