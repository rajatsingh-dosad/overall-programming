
import java.io.*;

class Prog2 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int start = Integer.parseInt(br.readLine());
		int end = Integer.parseInt(br.readLine());
		

		for(int i=start;i<=end;i++) {

			if(i%2==0) 
				System.out.print((i*i)+" ");
			else
				System.out.print((i*i*i)+" ");
		}
		System.out.println();
	}
}


