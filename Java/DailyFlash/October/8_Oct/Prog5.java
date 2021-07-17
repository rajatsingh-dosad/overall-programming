
import java.io.*;
import java.util.*;

class Prog5 {

	public static void main(String[] args) throws IOException {
		
		int sum = 0;
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.print("Input: ");
		String str = br.readLine();


		int[][] arr = new int[3][];
		arr[0] = new int[3];
		arr[1] = new int[3];
		arr[2] = new int[4];
		
		StringTokenizer st = new StringTokenizer(str,",");


		for(int i=0;i<arr.length;i++) {

			for(int j=0;j<arr[i].length;j++) {

				arr[i][j] = Integer.parseInt(st.nextToken());
			}
		}


		for(int i=0;i<arr.length;i++) {

			for(int j=0;j<arr[i].length;j++) {

				System.out.print(arr[i][j]+" ");
				if(arr[i][j]%5==0)
					sum += arr[i][j];
			}
			System.out.println();
		}
		System.out.println("Sum = "+sum);
	}
}


