
import java.util.Scanner;

class Prog5 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int[] iarray = new int[10];

		System.out.println("Enter the elements in an array: ");
		for(int i=0;i<iarray.length;i++) {

			iarray[i] = sc.nextInt();

		}
		int p=0 , n=0 , o=0 , e=0 ,z=0;
		for(int i=0;i<iarray.length;i++) {

			if(iarray[i] > 0)
				p++;
			if(iarray[i] < 0)
				n++;
			if(iarray[i]%2== 0)
				e++;
			if(iarray[i]%2!= 0)
				o++;
			if(iarray[i] == 0)
				z++;
		}

		System.out.println("Number of positive numbers are "+p);
		System.out.println("Number of negative numbers are "+n);
		System.out.println("Number of even numbers are "+e);
		System.out.println("Number of odd numbers are "+o);
		System.out.println("Number of zeroes are "+z);
	}
}

		

