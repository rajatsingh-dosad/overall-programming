
import java.util.Scanner;

class Prog4 {

	public static void main(String[] args) {

		Scanner sc = new Scanner(System.in);

		int n,total_ball,total_score=0,six = 0, four = 0, other = 0, dot=0;
		System.out.println("Enter the number of overs: ");
		n = sc.nextInt();

		total_ball = n * 6;

		int[] runs = new int[total_ball];
		
		System.out.println("Enter the runs for "+total_ball+" ball: ");
		for(int i=0;i<runs.length;i++) {

			runs[i] = sc.nextInt();
			total_score += runs[i]; 
		}

		for(int i=0;i<runs.length;i++) {

			if(runs[i]==6)
				six++;
			else if(runs[i]==4)
				four++;
			else if(runs[i]==0)
				dot++;
			else
				other++;
			

		}

		System.out.println("Total score = "+total_score);
		System.out.println("Total number of balls = "+total_ball);
		System.out.println("Total number of sixes = "+six);
		System.out.println("Total number of fours = "+four);
		System.out.println("Total number of other runs = "+other);
		System.out.println("Total number of dotBalls = "+dot);
	}
}




