class Switch4 {

	public static void main(String[] args){

		char ch = '8'; // datatype character
		
		switch(ch){           //int, short, byte, char, String
			case 8:
				System.out.println("value - 8");
				break;

			case '8':
				System.out.println("char - 8");
				break;


			default:
				System.out.println("No such case");//default case
				break;

		}

	}

}
