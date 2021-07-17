
import java.io.*;

class HoutToSeconds {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter the hour: ");
		int h = Integer.parseInt(br.readLine());

		int min = h * 60;
		int sec = min * 60;

		System.out.println(sec+" seconds.");
	}
}
