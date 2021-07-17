
class Baba {

	void getProperty() {

		System.out.println("Bunglow");
	}

	void career() {

		System.out.println("Shashi Doctor Vhava");
	}

	void marry() {

		System.out.println("Shashi marry to Deepika Padukone");
	}
}

class Shashi extends Baba {

	void career() {

		System.out.println("Teacher and Engineer jhala");
	}

	void marry() {

		System.out.println("Shashi=> kriti sanon");
	}
}

class Kaka {

	public static void main(String[] args) {

		Baba b = new Baba();
		b.getProperty();		//Bunglow
		b.career();			//Doctor
		b.marry();			//shashi=>Deepika Padukone
		
		Shashi s = new Shashi();
		s.getProperty();		//Bunglow
		s.career();			//Shashi Engineer and Teacher jhala
		s.marry();			//shashi=>Kriti Sanon
		
		
		Baba b1 = new Shashi();
		b1.getProperty();		//Bunglow
		b1.career();			//Shashi Engineer and Teacher jhala
		b1.marry();			//shashi=>Kriti Sanon
	}
}
