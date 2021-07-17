
class Hostel {

	int hostelID;

	Hostel(int hostelID) {

		this.hostelID = hostelID;
	}

	class Student {

		int studentID;
		int hostelID;

		Student(int studentID, int hostelID) {

			this.hostelID = hostelID;
			this.studentID = studentID;
		}

		void checkHostelID() {

			if(this.hostelID == Hostel.this.hostelID) 

				System.out.println("Student allowed");
			else
				System.out.println("Student not allowed");
		}
	}

	public static void main(String[] args) {


		Hostel h = new Hostel(10);

		Student s1 = h.new Student(50,10);
		s1.checkHostelID();

		Student s2 = h.new Student(100,20);
		s2.checkHostelID();
	}
}
