
import java.io.*;

class Prog4 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter the side of square: ");
		int side = Integer.parseInt(br.readLine());

		System.out.println("Area: "+(side*side));
		System.out.println("Perimeter: "+(4*side));
	}
}
