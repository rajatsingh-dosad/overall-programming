
import java.util.*;

class Prog5 {

	public static void main(String[] args)  {

		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the Rows: ");
		int row = sc.nextInt();
		
		int num = 0;
		for(int i=1; i<=row ;i++) {

			for(int j=1; j<=row; j++) {

				System.out.print(num+" ");
				if(num == 0)
					num++;
				else
					num--;
			}
			System.out.println();
		}
	}
}

		
