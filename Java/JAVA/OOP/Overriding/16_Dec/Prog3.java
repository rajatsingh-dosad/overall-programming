
class Grandpa {

	void marry() {

		System.out.println("Decision");
	}
}

abstract class Father extends Grandpa {

	abstract void marry();
}

class Son extends Father {

	void marry() {

		System.out.println("Disha Patani");
	}

	public static void main(String[] args) {

		Father f = new Son();
		f.marry();
	}
}

