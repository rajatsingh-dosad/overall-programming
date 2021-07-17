

import java.util.Scanner;

class Marks {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		float pMrk, cMrk, bMrk, mMrk, comMrk, per,total;
		char grade;

		System.out.print("Enter the marks of physics, Chemistry, Biology, Mathematics and Computer: ");
		pMrk=sc.nextFloat();
		cMrk=sc.nextFloat();
		bMrk=sc.nextFloat();
		mMrk=sc.nextFloat();
		comMrk=sc.nextFloat();

		total=pMrk+cMrk+bMrk+mMrk+comMrk;

		per =  (total/500)*100;

		if(per>=90)
			System.out.println("Grade A");
		else if(per>=80)
			System.out.println("Grade B");
		else if(per>=70)
			System.out.println("Grade C");
		else if(per>=60)
			System.out.println("Grade D");
		else if(per>=40)
			System.out.println("Grade E");
		else 
			System.out.println("Grade F");
	}
}

