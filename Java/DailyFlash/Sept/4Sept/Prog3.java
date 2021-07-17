
import java.io.*;

class Rectangle {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int length = Integer.parseInt(br.readLine());
		int breadth = Integer.parseInt(br.readLine());

		System.out.println("Area of rectangle = "+(length*breadth));
	}

}
