
class Student {

	Student() {

		System.out.println("Unknown");
	}

	Student(String name) {

		System.out.println("Name is: "+name);
	}
}

class StudentName {

	public static void main(String[] args) {

		Student s1 = new Student();
		Student s2 = new Student("Rajat");
	}
}
