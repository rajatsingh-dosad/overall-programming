
import java.io.*;
import java.util.*;

class Prog3 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the Number of planes: ");
		int plane = Integer.parseInt(br.readLine());
		
		System.out.println("Enter the Number of rows: ");
		int row = Integer.parseInt(br.readLine());
		
		System.out.println("Enter the Number of columns: ");
		int col = Integer.parseInt(br.readLine());

		int arr[][][] = new int[plane][row][col];
		

		System.out.println("\nEnter the elements in array: ");
		String inp = br.readLine();
		int num;
		StringTokenizer st = new StringTokenizer(inp," ");
		for(int i=0;i<plane;i++) {
			
			for(int j=0;j<row;j++) {
			
				for(int k=0;k<col;k++) {

					arr[i][j][k] = Integer.parseInt(st.nextToken().trim());
				}
			}
		}
		int sum = 0;
		for(int i=0;i<plane;i++) {
			
			for(int j=0;j<row;j++) {
			
				for(int k=0;k<col;k++) {

					if(i==0)
						sum = sum + arr[i][j][k];
				}

			}
		}
		System.out.println("Sum : "+sum);
	}
}




			
			
			
