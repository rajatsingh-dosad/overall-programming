
interface Parents {

	void attendance();
	void driving();
}

abstract class visitors {

	abstract void darshan();

	void darshan(String vip) {

		System.out.println(vip);

	}
}

class ParentExpectation implements Parents {

	public void attendance() {

		System.out.println("They expect 100% attendance");

	}

	public void driving() {

		System.out.println("They expect us to drive max at 40");

	}

}


class childrenReality extends ParentExpectation {

	public void attendance() {

		System.out.println("Reality is less than 75% attendance");

	}

	public void driving() {

		System.out.println("We drive min at 40");

	}

}

class Temple extends visitors{

	void darshan() {

		System.out.println("Normal visitors stand in queue");

	}

	void darshan(String vip) {

		System.out.println(vip);

	}

}


class Life{

	public static void main(String[] args){

		ParentExpectation obj1 = new ParentExpectation();
		obj1.attendance();
		obj1.driving();

		childrenReality obj2 = new childrenReality();
		obj2.attendance();
		obj2.driving();


		Temple obj3 = new Temple();
		obj3.darshan();
		obj3.darshan("PM/CM they get direct darshan");
	}

}
