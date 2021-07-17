

import java.util.Scanner;

class Employee {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int age;
		char sex, maritalStatus;

		System.out.print("Enter the age, sex and marital status(Y/N) ");
		age=sc.nextInt();
		sex=sc.next().charAt(0);
		maritalStatus=sc.next().charAt(0);

		if(sex=='F')
			System.out.println("U will work only in urban ares.");

		else if(sex=='M' && (age>=20 && age<=40))
			System.out.println("U can work anywhere.");

		else if(sex=='M' && (age>40 && age<=60))
			System.out.println("U will work in urban areas only");

		else
	       		System.out.println("Error!");
	}
}	




