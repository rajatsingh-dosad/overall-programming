
class StudentData {

	StudentData() {
		
		System.out.println("IN default Constructor\n");
	}

	StudentData(String name) {

		System.out.println("In parameterized Constructor:");
		System.out.println("Name is: "+name);
	}

	public static void main(String[] args) {

		StudentData obj = new StudentData();
		StudentData obj1 = new StudentData("Rajat");
	}
}
