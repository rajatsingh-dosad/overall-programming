

class Student {

	boolean isEligible(int a) {

		if(a>75) {

			System.out.println("Student attendance is "+a);
			System.out.println("Processing........");
		return true;
		}
		
		else {

			System.out.println("Student attendance is "+a);
			System.out.println("Processing........");
		return false;
		}
	}

	public static void main(String[] args) {

		Student eligible=new Student();
		boolean a=eligible.isEligible(65);
		if(a)
			System.out.println("The student is eligible for the exam");
		else
			System.out.println("The student is not eligible for the exam");
	}
}
