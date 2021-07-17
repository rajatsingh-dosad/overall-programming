
class Person {

	String role = "Data Scientist";
	float salary = 100000;
	int id = 45;
}

class Job {

	Person rajat = new Person();
	
	void Info() {
		System.out.println("Role of Person is "+rajat.role);
		System.out.println("Salary of Person is "+rajat.salary);
		System.out.println("Id of Person is "+rajat.id);
	}
}

class Demo {

	public static void main(String[] args) {

		Job engineer = new Job();
		engineer.Info();
	}
}
