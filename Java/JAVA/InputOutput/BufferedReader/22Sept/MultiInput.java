
import java.io.*;

class PlayerInfo {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.println("Enter player Info :");

		int jerNo = Integer.parseInt(br.readLine());
		char grade = (char)br.read();
		br.skip(1);
		String name = br.readLine();
		float avg = Float.parseFloat(br.readLine());

		System.out.println("jerNO : "+jerNo);
		System.out.println("grade : "+grade);
		System.out.println("name : "+name);
		System.out.println("Avg : "+avg);
	}
}
