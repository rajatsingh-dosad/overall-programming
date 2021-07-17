
import java.util.ArrayList;
import java.util.Collections;

class Employee implements Comparable<Employee> {

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

    public int compareTo(Employee obj) {

        return (int)(sal-obj.sal);
    }

}

class Demo {

    public static void main(String[] args) {
        
        ArrayList<Employee> al = new ArrayList<>();
        al.add(new Employee(3, "Kanha", 85000));
        al.add(new Employee(1, "Rahul", 50000));
        al.add(new Employee(2, "Rajat", 70000));

        Collections.sort(al);

        for(Employee e : al) {
		
		e.disp();
        }
    }
}
