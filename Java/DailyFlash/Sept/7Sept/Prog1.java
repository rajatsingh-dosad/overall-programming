
import java.io.*;

class Swap {

	public static void main(String[] args) throws IOException {

	BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

	int a = Integer.parseInt(br.readLine());
	int b = Integer.parseInt(br.readLine());

	System.out.printf("Before Swap: a=%d & b=%d\n",a,b);

	int temp = a;
	a = b;
	b = temp;

	System.out.printf("After Swap: a=%d & b=%d\n",a,b);
}
}
