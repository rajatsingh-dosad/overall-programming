class Switch2 {

	public static void main(String[] args){

		byte num = 100; // datatype byte
		
		switch(num){           //int, short, byte, char, String
			case 100:
				System.out.println("Case 1");
				break;

			case 110:
				System.out.println("Case 2");
				break;


			default:
				System.out.println("No such case");//default case
				break;

		}

	}

}
