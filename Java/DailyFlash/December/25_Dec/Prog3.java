
interface Coder {

	void startingOfDay();
}

class Rohan implements Coder {
	
	public void startingOfDay() {

		System.out.println("Rohan starts his day at 8am");
	}
}

class Priyanshu implements Coder {

	public void startingOfDay() {

		System.out.println("Priyanshu starts her day at 6am");
	}
}

class Time {

	public static void main(String[] args) {

		Coder c1 = new Rohan();
		c1.startingOfDay();

		Coder c2 = new Priyanshu();
		c2.startingOfDay();
	}
}

