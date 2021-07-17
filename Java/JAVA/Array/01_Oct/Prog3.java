
import java.io.*;

class Input3DArray {

	public static void main(String[] args) throws IOException {
		
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);

		System.out.println("Enter number of planes: ");
		int plane = Integer.parseInt(br.readLine());
	
		System.out.println("Enter number of rows: ");
		int row = Integer.parseInt(br.readLine());
	
		System.out.println("Enter number of columns: ");
		int col = Integer.parseInt(br.readLine());
	
		int marr[][][] = new int[plane][row][col];

		System.out.println("Enter the elements in array: ");

		for(int i=0;i<plane;i++)  {

			for(int j=0;j<row;j++)  {

				for(int k=0;k<col;k++)  {

					marr[i][j][k] = Integer.parseInt(br.readLine());

				}
			}
		}
		
		System.out.println("1st plane are: ");
		for(int i=0;i<plane;i++)  {

			for(int j=0;j<row;j++)  {

				for(int k=0;k<col;k++)  {

					System.out.print(marr[i][j][k]+" ");
				}
				System.out.println(" ");
			}
			if(i==0)
				System.out.println("2nd plane are: ");
		}
	}
}




