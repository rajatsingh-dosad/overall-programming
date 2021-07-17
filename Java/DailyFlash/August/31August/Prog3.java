
import java.io.*;

class Prog3 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int num= Integer.parseInt(br.readLine());

		for(int i=1; i<=num; i++) {

			if(i%2!=0) {

				System.out.printf("Cube of %d: %d and Square of %d: %d\n",i,i*i*i,i,i*i);
			}
		}
	}
}


