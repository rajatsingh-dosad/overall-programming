
import java.util.Scanner;

class Prog4 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int n;
		System.out.println("Enter the size of array: ");
		n = sc.nextInt();

		int[] iarray = new int[n];

		System.out.println("Enter the ages of "+n+" students: ");
		for(int i=0;i<iarray.length;i++) {

			iarray[i] = sc.nextInt();
		}
		
		int max = 0;
		for(int i=0;i<iarray.length;i++) {

			if(iarray[i]  > max)
				max = iarray[i];
		}
		for(int i=0;i<iarray.length;i++) {

			if(iarray[i] ==  max)
				System.out.println("Maximum age i.e "+max+" index number is "+i);
		}
		
	}
}
