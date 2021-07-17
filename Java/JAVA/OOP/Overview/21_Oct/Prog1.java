
class IPLPlayer {
	String pName = "KL Rahul";
	int runs2020 = 524;
	static int totalRuns = 5230;

	void playerInfo() {
		
		System.out.println("Player name = "+pName);
		System.out.println("Ipl 2020 runs = "+runs2020);
		System.out.println("Total Runs = "+totalRuns);

	}

	public static void main(String[] args) {

		IPLPlayer ipl2020 = new IPLPlayer();
		ipl2020.playerInfo();
		System.out.println("Player name = "+ipl2020.pName);
		System.out.println("Ipl 2020 runs = "+ipl2020.runs2020);
		System.out.println("Total Runs = "+ipl2020.totalRuns);
	}
}
/*
class OOPPreparation
*/
