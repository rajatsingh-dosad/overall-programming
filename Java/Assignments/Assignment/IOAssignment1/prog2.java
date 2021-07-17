
import java.io.*;

class IPL {

	public static void main(String[] args) throws IOException {

		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);

		String team_name = br.readLine();
		String cap_name =br.readLine();

		float win_per = Float.parseFloat(br.readLine());
		int ind_batsmen= Integer.parseInt(br.readLine());
		int for_batsmen= Integer.parseInt(br.readLine());

		System.out.println("The ipl team name is: "+team_name);
		System.out.println("It's Captain is: "+cap_name);
		System.out.println("It has best win percentage: "+win_per);
		System.out.println("No of indian batsmen: "+ind_batsmen);
		System.out.println("No of foreign batsmen: "+for_batsmen);
	}
}
