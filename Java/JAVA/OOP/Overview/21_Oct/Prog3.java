
class BCCI {

	int x = 10;

	BCCI() {

		System.out.println("In BCCI Constructor");
	}
	
	void rulesBCCI() {

		System.out.println("Rules by BCCI");
	}

}

class IPL extends BCCI {

	int y = 20;
	
	IPL() {

		System.out.println("IN IPL Constructor");
	}
	void rulesIPL() {

		System.out.println("Rules by IPL");
	}
}

class Match {

	public static void main(String[] args) {

		IPL obj1 = new IPL();
		obj1.rulesIPL();
		obj1.rulesBCCI();

		BCCI obj2 = new BCCI();
		obj2.rulesIPL();
		obj2.rulesBCCI();

	}
}










