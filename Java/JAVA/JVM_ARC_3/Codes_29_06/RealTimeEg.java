

class College {

	int student = 70;

	void onlineLecture() {

		System.out.println("Watch today's lecture");
		System.out.println("Number of student present today are " + student);
	}

	static void lockdownEnds() {

		System.out.println("College reopens!");

	}

	public static void main(String[] args) {

		College monday=new College();
		monday.onlineLecture();
		monday.lockdownEnds();

		College tuesday=new College();
		tuesday.student=65;
		tuesday.onlineLecture();
	}
}
