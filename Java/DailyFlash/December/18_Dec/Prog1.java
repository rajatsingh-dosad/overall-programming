
abstract class Bank {

	abstract void getBalance();
}

class SBI extends Bank {

	void getBalance() {

		System.out.println("Deposited in SBI - 100");
	}
}

class HDFC extends Bank {

	void getBalance() {

		System.out.println("Deposited in HDFC - 150");
	}
}

class AXIS extends Bank {

	void getBalance() {

		System.out.println("Deposited in AXIS - 200");
	}
}

class Deposit {

	public static void main(String[] args) {

		SBI sb  = new SBI();
		sb.getBalance();

		HDFC hf = new HDFC();
		hf.getBalance();

		AXIS ax = new AXIS();
		ax.getBalance();
	}
}
