
import java.io.*;
class EmployeeDetails {
	
	int employeeNo;
	String employeeName;
	long contactNo;
	String address;

	EmployeeDetails(int employeeNo,String employeeName,long contactNo,String address) {

		this.employeeNo = employeeNo;
		this.employeeName = employeeName;
		this.contactNo = contactNo;
		this.address = address;
	}

	void display() {

		System.out.println("ID of employee is: "+employeeNo);
		System.out.println("Name of employee is: "+employeeName);
		System.out.println("Contact number of employee is: "+contactNo);
		System.out.println("Address of employee is: "+address);
	}

}

class MainDemo {

	public static void main(String[] args) throws IOException {

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.print("Enter the number of employees: ");
		int num  = Integer.parseInt(br.readLine());
		
		EmployeeDetails[] arr = new EmployeeDetails[num];

		for(int i=0;i<num;i++) {

			System.out.println("\n************Enter the details for Employee "+(1+i)+"************");
			System.out.print("Enter EmpNo: ");
			int empNo = Integer.parseInt(br.readLine());

			System.out.print("Enter Name: ");
			String name = br.readLine();
			
			System.out.print("Enter contact: ");
			long contact = Long.parseLong(br.readLine());

			System.out.print("Enter address: ");
			String address = br.readLine();
			
			arr[i] = new EmployeeDetails(empNo,name,contact,address);
		}
		

		System.out.println("\n*************************OUTPUT:**************************");
		for(int i=0;i<num;i++) {
			
			System.out.println("\nEmployee "+(1+i)+" details: ");
			arr[i].display();
		}


	}
}
