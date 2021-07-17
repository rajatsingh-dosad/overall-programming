

class ifElseDemo {

	public static void main(String[] args) {

		int x = 10;
		int y = 11;

		if(++x <= --y) {					//if(11<=10) => false	

			System.out.println("In if statement");
			System.out.println("X ="+x);		
			System.out.println("Y ="+y);		
		}

		else {
			System.out.println("In else statement"); //print	
			System.out.println("X ="+x);		 //11
			System.out.println("Y ="+y);		 //10
		}

		System.out.println("Out of if else");		//print
	}
}


