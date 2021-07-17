

import java.io.*;

class OddNo {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Min of Series: ");
		int startNo= Integer.parseInt(br.readLine());

		System.out.print("Max of Series: ");
		int endNo= Integer.parseInt(br.readLine());

		System.out.println("Series of Odd Numbers Ranging between "+startNo+" & "+endNo+" is: ");

		for(int i=startNo; i<=endNo; i++) {

			if(i%2!=0)
				System.out.print(i+" ");
		}
		System.out.println();
	}
}
