
class Member {

	String name;
	int age; 
	long phone_number;
	String address;
	float salary;

	void printSalary() {

		System.out.println(salary);
	}
}

class Employee extends Member {
	
	String specialization = "Employee";
	String department = "IT";

}

class Manager extends Member {

	String specialization = "Manager";
	String department = "IT";

}

class Info {

	public static void main(String[] args)  {

		Employee emp = new Employee();
		emp.name = "Rajat";
		emp.age = 21;
		emp.phone_number = 7895641230l;
		emp.address = "Pune";
		emp.salary = 850000;
		System.out.print("Salary of employee is: ");
		emp.printSalary();
		
		Manager mg = new Manager();
		mg.name = "Sarang";
		mg.age = 40;
		mg.phone_number = 7895453450l;
		mg.address = "Pune";
		mg.salary = 2400000;
		System.out.print("Salary of Manager is: ");
		mg.printSalary();

		System.out.println("\nDisplaying info of Employee: ");
		System.out.println("Name : "+emp.name);
		System.out.println("Age : "+emp.age);
		System.out.println("Phone Number : "+emp.phone_number);
		System.out.println("Address : "+emp.address);
		System.out.println("Salary : "+emp.salary);

		System.out.println("\nDisplaying info of Manager: ");
		System.out.println("Name : "+mg.name);
		System.out.println("Age : "+mg.age);
		System.out.println("Phone Number : "+mg.phone_number);
		System.out.println("Address : "+mg.address);
		System.out.println("Salary : "+mg.salary);




	}
}

