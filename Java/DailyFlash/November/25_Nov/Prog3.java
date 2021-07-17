
class Company {

	String cName;

	Company(String cName) {

		this.cName = cName;
	}

	class Employee {

		String eName;
		float salary;
		String designation;
		
		Employee(String eName, float salary, String designation) {
			
			this.eName = eName;
			this.salary = salary;
			this.designation = designation;
		}

		void info() {

			System.out.println("Company Name is : "+cName);
			System.out.println("Employee Name is : "+eName);
			System.out.println("Employee salary is : "+salary);
			System.out.println("Employee designation is : "+designation);
		}
	}

}

class Info {

	public static void main(String[] args) {

		
		Company c = new Company("EqTechnologic");

		Company.Employee e = c.new Employee("Rajat",80000,"Developer");
		e.info();
	}
}

