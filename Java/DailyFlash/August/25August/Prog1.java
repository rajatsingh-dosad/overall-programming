
import java.io.*;

class InputDemo {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int num=Integer.parseInt(br.readLine());
		System.out.println(num);
	}
}
