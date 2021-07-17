

import java.io.*;

class Dollar { 

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int rs = Integer.parseInt(br.readLine());

		System.out.println(String.format("The conversion of Rupees to dollar is %.2f",rs/73.52));
	}
}
