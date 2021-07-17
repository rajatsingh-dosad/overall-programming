

import java.io.*;

class Kinetic {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		float m = Float.parseFloat(br.readLine());
		float v = Float.parseFloat(br.readLine());

		float k = (m*v*v)/2;

		System.out.println("Kinetic energy of the object: "+k);
	}
}
