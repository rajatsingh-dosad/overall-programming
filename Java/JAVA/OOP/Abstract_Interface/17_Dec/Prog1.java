
abstract class Biryani {

	void taste() {

		System.out.println("Ekdum Bhari");
	}

	abstract void quantity();
	abstract void price();
}

class PKBiryani extends Biryani {

	void quantity() {
		
		System.out.println("Jast");
	}

	void price() {
		
		System.out.println("Average");
	}
}

class DorabjiBiryani  extends Biryani {
	
	void quantity() {

		System.out.println("Kami");
	}

	void price() {

		System.out.println("High");
	}

}

class AbstractDemo {

	public static void main(String[] args) {

		Biryani b1 = new PKBiryani();

		b1.quantity();
		b1.price();
		
		Biryani b2 = new DorabjiBiryani();

		b2.quantity();
		b2.price();
	}
}
