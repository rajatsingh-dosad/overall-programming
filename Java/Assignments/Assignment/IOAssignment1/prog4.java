
import java.io.*;

class ThreeNumbers {

	public static void main(String[] args) throws IOException {

		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br = new BufferedReader(isr);
		
		int min, mid, max;
		int num1=Integer.parseInt(br.readLine());
		int num2=Integer.parseInt(br.readLine());
		int num3=Integer.parseInt(br.readLine());

		min=((num1<num2) ? ((num1<num3) ? num1 : num3) : ((num2<num3) ? num2 : num3)); 
		max=((num1>num2) ? ((num1>num3) ? num1 : num3) : ((num2>num3) ? num2 : num3)); 
		mid=((num1>num2) ? ((num1<num3) ? num1 : num3) : ((num2<num3) ? num2 : num3)); 

		System.out.println("Ascending order is: "+min+" "+mid+" "+max);
		System.out.println("Decending order is: "+max+" "+mid+" "+min);
	}
}
