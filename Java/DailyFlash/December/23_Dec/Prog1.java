
interface RBI {

	void repoRate();
}

class SBI implements RBI {

	public void repoRate() {
		
		System.out.println("SBI repo Rate - 6.95");
	}
}

class Customer {

	public static void main(String[] args) {

		SBI s = new SBI();
		s.repoRate();
	}
}
