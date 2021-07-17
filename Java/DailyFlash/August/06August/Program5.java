

import java.util.Scanner;

class Table {

	public static void main(String[] args) {
		int num;
		Scanner sc = new Scanner(System.in);

		System.out.print("Enter the number: ");
		num=sc.nextInt();

		System.out.print("Table of 3 is - ");
		for(int i=1;i<=10;i++) {

			System.out.print(num*i+",");
		}
		System.out.println();
		System.out.print("Even number present in table - ");
		for(int j=1;j<=10;j++) {

			if((num*j)%2==0)

			System.out.print(num*j+",");
		}
		System.out.println();
	}
}


