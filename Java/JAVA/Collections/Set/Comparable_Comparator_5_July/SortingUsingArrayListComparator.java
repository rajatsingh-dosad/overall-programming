
import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;

class Employee {

    int empId;
    String name;
    float sal;

    Employee(int empId,String name,float sal) {

        this.empId = empId;
        this.name = name;
        this.sal = sal;
    }
    

    void disp() {

        System.out.println(empId+" "+name+" "+sal);
    }


}

class SortBySal implements Comparator<Employee> {

	public int compare(Employee obj1, Employee obj2) {
		
		return (int)(obj1.sal-obj2.sal);
	}
}

class SortByName implements Comparator<Employee> {

	public int compare(Employee obj1,Employee obj2) {
		
		return obj1.name.compareTo(obj2.name);
	}
}

class Demo {

    public static void main(String[] args) {
        
        ArrayList<Employee> al = new ArrayList<>();
        al.add(new Employee(3, "Kanha", 85000));
        al.add(new Employee(1, "Rahul", 50000));
        al.add(new Employee(2, "Rajat", 70000));
	
	System.out.println("Sorted by Salary");
        Collections.sort(al,new SortBySal());

        for(Employee e : al) {
		
		e.disp();
        }

	System.out.println("\nSorted by Name");
        
	Collections.sort(al,new SortByName());

        for(Employee e : al) {
		
		e.disp();
        }
    
    }
}
