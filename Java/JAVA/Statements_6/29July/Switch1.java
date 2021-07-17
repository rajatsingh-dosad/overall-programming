class Switch1 {

	public static void main(String[] args){

		short num = 100; // datatype short
		
		switch(num){           //int, short, byte, char, String
			case 100:
				System.out.println("Case 1");
				break;

			case 200:
				System.out.println("Case 2");
				break;


			default:
				System.out.println("No such case");//default case
				break;

		}

	}

}
