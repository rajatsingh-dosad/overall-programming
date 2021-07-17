
import java.util.*;

class Employee implements Comparable<Employee> {

	int empId = 0;
	double sal = 0.0;

	Employee(int empId, double sal) {

		this.empId = empId;
		this.sal = sal;
	}

	public int compareTo(Employee emp) {

		
		return ;
	}

}

class CompareDemo {

	public static void main(String[] args) {

		SortedSet<Employee> s = new TreeSet<Employee>();
		s.add(new Employee(10,35000.00));
		s.add(new Employee(43,55000.00));
		s.add(new Employee(8,75000.00));
		s.add(new Employee(5,95000.00));
		s.add(new Employee(20,45000.00));

		System.out.println(s);

		for(Employee obj : s) {

			System.out.print(obj.empId+" ");
			System.out.println(obj.sal);
		}


	}
}
