
import java.util.*;

class Gym {

	class Day1 {
		
		void workOutPlan() {
			
			System.out.println("Chest Day");
		}
	}

	class Day2 {

		void workOutPlan() {
			
			System.out.println("Back Day");
		}
	}

	class Day3 {

		void workOutPlan() {
			
			System.out.println("Arms Day");
		}
	}

	class Day4 {

		void workOutPlan() {
			
			System.out.println("Leg Day");
		}
	}

	class Day5 {

		void workOutPlan() {
			
			System.out.println("Abs Day");
		}
	}

	void todaysWorkout() {
		
		Scanner sc = new Scanner(System.in);

		System.out.println("Input : Enter Day");
		int num = sc.nextInt();
		

		switch(num) {

			case 1: 
				Day1 d1 = new Day1();
				d1.workOutPlan();
				break;
			case 2: 
				Day2 d2 = new Day2();
				d2.workOutPlan();
				break;
			case 3: 
				Day3 d3 = new Day3();
				d3.workOutPlan();
				break;
			case 4: 
				Day4 d4 = new Day4();
				d4.workOutPlan();
				break;
			case 5: 
				Day5 d5 = new Day5();
				d5.workOutPlan();
				break;
			default:
				System.out.println("YOU ENTERED A WRONG CHOICE");
		}
	}

	public static void main(String[] args) {

		Gym g = new Gym();
		g.todaysWorkout();
	}
}



