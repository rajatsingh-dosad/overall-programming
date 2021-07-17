
import java.io.*;

class PredeSucc {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n = Integer.parseInt(br.readLine());

		System.out.println("Second Predecessor : "+(n-2));
		System.out.println("Second Successor : "+(n+2));
	}
}
