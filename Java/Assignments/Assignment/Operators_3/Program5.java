


class Cricket {

	static int players=15;
	int matches=0;

	static void displayPlayerCount() {

		System.out.println("Total Player = "+players);
	}

	void matchesCount() {

		System.out.println("Matches count = "+matches);
	}


	public static void main(String[] args) {

		Cricket indianTeam=new Cricket();
		indianTeam.displayPlayerCount();
		indianTeam.matches=7;
		indianTeam.matchesCount();
	}
}
