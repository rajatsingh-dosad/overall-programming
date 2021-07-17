
import java.io.*;

class MinNo {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

		System.out.print("Enter the two numbers : ");
		int n1= Integer.parseInt(br.readLine());
		int n2= Integer.parseInt(br.readLine());
		
		if(n1<n2)
			System.out.println("The Minimum number amongst "+n1+" & "+n2+" is "+n1);
		else
			System.out.println("The Minimum number amongst "+n1+" & "+n2+" is "+n2);
	}
}
