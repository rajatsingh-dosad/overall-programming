
import java.io.*;

class Pattern1 {

	public static void main(String[] args) throws IOException  {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int row;
		System.out.print("Enter the row: ");
		row = Integer.parseInt(br.readLine());
		
		int num = 0;
		for(int i=1;i<=row;i++) {

			for(int j=1;j<row*row;j++) {

				if((i+j==row+1)||(i+j==row+1+num))
					System.out.print(i+" ");
				else
					System.out.print("  ");
			}
			num+=2;
			System.out.println();

		}
	}
}
