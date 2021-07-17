
import java.io.*;

class Prog4 {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		int n1 = Integer.parseInt(br.readLine());
		int n2 = Integer.parseInt(br.readLine());
		int n3 = Integer.parseInt(br.readLine());

		int max = ((n1>n2) ? ((n1>n3) ? n1 : n3) : ((n2>n3) ? n2 : n3));
		System.out.println(max+" is largest number entered amongst "+n1+" "+n2+" "+n3);
	}
}


