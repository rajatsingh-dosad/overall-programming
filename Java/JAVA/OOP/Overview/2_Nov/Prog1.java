
class Doctor {
	
	String dName = "Mk Shah";
	int numOfHospToVisit = 7;

	void operation() {

		System.out.println("Neuro-Surgen");
	}
}

class Hospital {

	String hName = "Sancheti";
	int totDoctors = 93;

	Doctor d = new Doctor();

	void service() {

		System.out.println("Hospital Name = "+hName);
		System.out.println("Total Doctors = "+totDoctors);
		System.out.println("Good Service");
		visitorDoctors();
	}

	void visitorDoctors() {
		
		d.operation();
	}
}

class Patient {

	public static void main(String[] args) {

		Hospital h = new Hospital();
		h.service();


	}

}
