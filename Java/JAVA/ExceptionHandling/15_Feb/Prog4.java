
import java.io.*;

class ThrowDemo {

	static IOException io = new IOException("Aplach Exception");

	public static void main(String[] args) {
		
		 try {
			 throw io;
		 }catch(IOException obj) {


			 System.out.println(obj);
		 }

	}
}
