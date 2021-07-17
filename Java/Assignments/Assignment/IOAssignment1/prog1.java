
import java.io.*;

class Input1 {

	public static void main(String[] args) throws IOException {

		 InputStreamReader isr = new InputStreamReader(System.in);
		 BufferedReader br = new BufferedReader(isr);

		 int i = Integer.parseInt(br.readLine());
		 float f = Float.parseFloat(br.readLine());
		 double d = Double.parseDouble(br.readLine());
		 long l = Long.parseLong(br.readLine());
		 boolean b = Boolean.parseBoolean(br.readLine());
		 String s=br.readLine();
		 char c = (char)br.read();

		 System.out.println("Integer "+i);
		 System.out.println("Float "+f);
		 System.out.println("Double "+d);
		 System.out.println("Long "+l);
		 System.out.println("Boolean "+b);
		 System.out.println("String "+s);
		 System.out.println("Char "+c);
		
	}
}
