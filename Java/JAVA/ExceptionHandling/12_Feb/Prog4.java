
import java.io.*;

class FinallyDemo {

	public static void main(String[] args) throws IOException  {

		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br =  new BufferedReader(isr);
		
		try{
			
			System.out.println("In try");
			System.out.println(br.readLine());
		}catch(Exception e) {

			System.out.println("In catch");
		}finally {

			System.out.println("In finally");
			br.close();
		}
		
		try{
			
			System.out.println("Hello");
		}

		finally {

			System.out.println("Again In finally");
		}
	}
}
