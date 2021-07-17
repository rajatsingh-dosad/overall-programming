
class Hospital {
	
	int x = 10;
	static int y = 20;

	static class Doctors {
		
		int p = 30;
		static int q = 40;

		void serviceAt() {

			System.out.println("Work at Aadhar Hospital");
			
			System.out.println(y);
			System.out.println(p);
			System.out.println(q);
		}
	}

	public static void main(String[] args) {

		//Hospital aadhar = new Hospital();

		Doctors shah = new Doctors();
		shah.serviceAt();
	}
}
