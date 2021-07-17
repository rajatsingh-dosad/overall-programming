

import java.io.*;

class PerfectNo {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(br.readLine());

		for(int i=1;i<=n;i++) {
			
			int j=1;
			int sum=0;
			while(j<i) {

				if(i%j==0 ) 
					sum =sum +j;
				j++;

			}
			if(sum==i)
				System.out.print(i+" ");
		}
		System.out.println();
	}
}

