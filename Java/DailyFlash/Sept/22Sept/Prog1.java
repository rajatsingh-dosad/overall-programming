
import java.io.*;

class IPLTeam {

	String teamName;
	String captain;
	int jerseyNum;
	String franchiseOwner;
	int countOfTrophiesWon;

	public static void main(String[] args) throws IOException {

		IPLTeam ipl = new IPLTeam();

		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		
		System.out.print("Enter team Name: ");
		ipl.teamName = br.readLine();
		
		System.out.print("Enter captain Name: ");
		ipl.captain = br.readLine();
	
		System.out.print("Enter jersey number of "+ipl.captain+" : ");
		ipl.jerseyNum = Integer.parseInt(br.readLine());
	
		System.out.print("Enter Franchise Owner of "+ipl.teamName+" : ");
		ipl.franchiseOwner = br.readLine();
	
		System.out.print("Enter number of trophies won by "+ipl.teamName+" : ");
		ipl.countOfTrophiesWon = Integer.parseInt(br.readLine());



		System.out.println();
		System.out.println("*****************Output*********************");
		System.out.println("The name of the team is "+ipl.teamName);
		System.out.println("The captain of "+ipl.teamName+" is "+ipl.captain);
		System.out.println("The jersey Number of "+ipl.captain+" is "+ipl.jerseyNum);
		System.out.println("The franchiseOwner is "+ipl.franchiseOwner);
		System.out.println("Number of trophies won are "+ipl.countOfTrophiesWon);
	}
}


