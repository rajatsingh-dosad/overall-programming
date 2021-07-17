
interface Yewale {

	void makingTea();

	default void CreamRolls() {

		System.out.println("Own CreamRolls") ;
	}
}

class PuneYewale implements Yewale {

	public void makingTea() {
		
		System.out.println("Start at 5am");
		System.out.println("Best Taste");
	}
}

class BaramatiYewale implements Yewale {
	
	public void makingTea() {
		
		System.out.println("Start at 7am");
		System.out.println("Best Taste");
	}
}

class Sukh {

	public static void main(String[] args) {

		Yewale y = new PuneYewale();
		y.makingTea();
		y.CreamRolls();
		
		Yewale y1 = new BaramatiYewale();
		y1.makingTea();
		y1.CreamRolls();
	}
}
