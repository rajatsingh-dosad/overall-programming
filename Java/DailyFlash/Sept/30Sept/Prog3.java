
import java.io.*;
import java.util.*;

class Prog3 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n;
		int sum = 0;
		System.out.println("Enter the size of array : ");
		n = Integer.parseInt(br.readLine());

		int[] iarray = new int[n];

		System.out.println("Enter the marks of "+n+" subjects in array on single line with space seperated");
		String marks = br.readLine();

		StringTokenizer st = new StringTokenizer(marks," ");
		for(int i=0;i<n;i++) {

			iarray[i] = Integer.parseInt(st.nextToken());
		}

		for(int i=0;i<n;i++) {

			sum = sum + iarray[i];
		}


		System.out.println("Total marks = "+sum);
		System.out.println("Percentage = "+(float)(sum/n)+"%");
	}
		

	

}


