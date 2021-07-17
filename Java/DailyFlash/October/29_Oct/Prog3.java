
abstract class Car {

	abstract void mileage();
	abstract void price();

	void seater() {
		
		System.out.println("FOUR SEATER");
	}
}

class Toyota extends Car {

	void mileage() {

		System.out.println("Mileage of toyota Fortuner is 7-10 km");
	}

	void price() {

		System.out.println("Price of Fortuner is 28.6L");
	}

}

class INFO {

	public static void main(String[] args) {

		Toyota t = new Toyota();
		t.mileage();
		t.price();
		t.seater();
	}
}


