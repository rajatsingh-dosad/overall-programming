
interface RBI {

	void loanType();
	void ROI();
}

class SBI implements RBI {

	public void loanType() {

		System.out.println("Home Loan");
	}

	public void ROI() {

		System.out.println("8.95");
	}
}

class Customer {

	public static void main(String[] args) {
		
		RBI s = new SBI();
		s.loanType();
		s.ROI();
	}
}


