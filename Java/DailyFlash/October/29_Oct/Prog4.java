
interface Team {

	void getPlayerNum();
	void getPlayerName();

	default void WinsLose(int wins,int loses) {

		System.out.println("Total wins = "+wins);
		System.out.println("Total lose = "+loses);
	}

}

class RCB implements Team {

	public void getPlayerName() {

		System.out.println("Name = Virat Kohli(Captain)");
	}
	
	public void getPlayerNum() {

		System.out.println("Virat Number is 18");
	 }

}

class CSK implements Team {

	public void getPlayerName() {

		System.out.println("Name = Dhoni(Captain)");
	}
	
	public void getPlayerNum() {

		System.out.println("Dhoni Number is 07");
	 }

}

class RUNS {

	public static void main(String[] args) {
		
		System.out.println("RCB:");
		RCB r = new RCB();
		r.getPlayerName();
		r.getPlayerNum();
		r.WinsLose(9,7);
		
		System.out.println("\nCSK:");
		CSK c = new CSK();
		c.getPlayerName();
		c.getPlayerNum();
		c.WinsLose(12,5);

	}
}
