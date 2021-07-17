
import java.io.*;

class Pattern2 {

	public static void main(String[] args) throws IOException {
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.print("Enter the number of rows: ");
		int row = Integer.parseInt(br.readLine());

		for(int i=1; i<=row;i++) {

			for(int j=4;j>=i;j--) {

				System.out.print(" ");
			}
			for(int k=1;k<=i;k++) {

				System.out.print(i+" ");
			}
			System.out.println();
		}
	}

}

