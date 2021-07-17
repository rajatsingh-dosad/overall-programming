
class Degree {

	void getDegree() {

		System.out.println("I got a degree");
	}
}

class Undergraduate extends Degree {

	void getDegree() {

		System.out.println("I am an Undergraduate");
	}
}

class Postgraduate extends Degree {

	void getDegree() {

		System.out.println("I am an Postgraduate");
	}
}

class MethodCalling {

	public static void main(String[] args) {

		Degree d = new Degree();
		d.getDegree();

		Undergraduate u = new Undergraduate();
		u.getDegree();
		
		Postgraduate p = new Postgraduate();
		p.getDegree();
	}
}


