
import java.io.*;

class TryCompileDemo {

	public static void main(String[] args) {
		
		
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		try {
			System.out.println(br.readLine());
		}catch(InterruptedException i) {

			System.out.println("Buffered pipe already close");
		}
	}
}
