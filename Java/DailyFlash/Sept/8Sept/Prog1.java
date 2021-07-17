
import java.io.*;

class IncreasedNO {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(br.readLine());
		int add =1;
		for(int i=1;i<=15;i++) {

			System.out.print(add+" ");
			add =add + n;
		}
		System.out.println();
	}
}

