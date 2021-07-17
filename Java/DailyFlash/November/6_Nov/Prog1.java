
class Student {


	Student() {

		System.out.println("Unknown");
	}

	Student(String name) {

		System.out.println("Name is: "+name);
	}
}

class StudentDemo {

	public static void main(String[] args) {
		
		System.out.println("Object creation without any Parameter:");
		Student obj = new Student();
		
		System.out.println("\nObject creation with a String Parameter:");
		Student obj1 = new Student("Rajat");
	}
}


