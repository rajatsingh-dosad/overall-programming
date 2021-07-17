
import java.io.*;

class Table {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(br.readLine());

		for(int i=10; i>=1;i--) {

			System.out.printf("%d X %d = %d\n",n,i,n*i);
		}
	}
}
