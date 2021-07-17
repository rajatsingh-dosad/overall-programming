
import java.io.*;

class AreaOfCircle {

	public static void main(String[] args) throws IOException {

		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
		
		int r;
		float area, pi = 3.142f;
		
		System.out.print("Enter the radius of circle: ");
		r = Integer.parseInt(br.readLine());

		System.out.println("Area of the circle is "+pi*r*r);
	}
}
