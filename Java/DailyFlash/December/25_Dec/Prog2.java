
interface Human {

	void feelings();
}

class Rohan implements Human {

	public void feelings() {

		System.out.println("Sensitive");
	}
}

class TestFeeling {

	public static void main(String[] args) {

		Human h = new Rohan();
		h.feelings();
	}
}
