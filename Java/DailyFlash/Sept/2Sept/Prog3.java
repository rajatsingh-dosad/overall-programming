
import java.io.*;

class Velocity {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter the distance: ");
		int dist= Integer.parseInt(br.readLine());

		System.out.print("Enter the time in seconds: ");
		int time= Integer.parseInt(br.readLine());

		int vel = dist/time;

		System.out.println("The Velocity of a particle roaming in space is "+vel+"m/s.");
	}
}
