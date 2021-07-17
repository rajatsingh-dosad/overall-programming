
class College {
	
	class CompDept {
		
		int fees = 0;	
		CompDept(int fees) {

			this.fees = fees;
		}

		void fees() {

			System.out.println("Fees for Computer Department is: "+fees);
		}
	}

	class ItDept {

		int fees = 0;	
		ItDept(int fees) {

			this.fees = fees;
		}

		void fees() {

			System.out.println("Fees for Computer Department is: "+fees);
		}
	}
}

class Admission {

	public static void main(String[] args) {

		College c = new College();

		College.CompDept cp = c.new CompDept(80000);
		cp.fees();

		College.ItDept id = c.new ItDept(70000);
		id.fees();
	}
}
