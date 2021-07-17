

class CoronaMaha {

	int count=170000;

	void precaution() {

		System.out.println("Kalji gya");
		System.out.println("Count= "+count);
	}

	static void impDecision() {

		System.out.println("Cm's Decision");

	}

	public static void main(String[] args) {

		CoronaMaha jun28 = new CoronaMaha();
		jun28.precaution();
		jun28.impDecision();

		CoronaMaha jun29 = new CoronaMaha();
		jun29.count=175000;
		jun29.precaution();

	}
}
		

