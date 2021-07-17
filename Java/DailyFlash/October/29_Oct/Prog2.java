
class MarutiSuzuki {

	void engine() {

		System.out.println("Both Maruti and Suzuki works together.");
	}
}

class Maruti extends MarutiSuzuki {

	void engine() {
		
		System.out.println("Maruti is seperated from MarutiSuzuki.");
		System.out.println("Maruti works independently.");

	}
}

class Suzuki extends MarutiSuzuki {

	void engine() {
		
		System.out.println("Suzuki is seperated from MarutiSuzuki.");
		System.out.println("Suzuki works independently.");

	}
}

class WORK {

	public static void main(String[] args) {

		MarutiSuzuki obj1 = new MarutiSuzuki();
		obj1.engine();

		Maruti obj2 =  new Maruti();
		obj2.engine();

		Suzuki obj3 = new Suzuki();
		obj3.engine();
	}
}


