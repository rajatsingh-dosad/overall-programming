
import java.util.Scanner;

class PrimeNo {

	public static void main(String[] args) {
		
		int num;
		Scanner sc=new Scanner(System.in);

		System.out.print("Enter a number: ");
		num=sc.nextInt();

		for(int i=1;i<=num;i++) {
			int j=1;
			int count=0;
			for(; j<=i;j++) {

				if(i%j==0) 
					count++;
			}
			if(count==2)
				System.out.println(i);
		}
	}
}



