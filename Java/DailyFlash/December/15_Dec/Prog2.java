
class AncientHuman {

	Number travel() {

		System.out.println("Ancient people travels by horses, by walking, Bullock-cart, etc");
		return null;
	}
}

class ModernHuman extends AncientHuman {

	Integer travel() {

		System.out.println("Moderen people travels by vehicle, train, aeroplane , etc");
		return 0;
	}
}

class MeansofTransportation {

	public static void main(String[] args) {

		AncientHuman ah = new AncientHuman();
		ah.travel();
		
		ModernHuman mh = new ModernHuman();
		mh.travel();

	}
}
