class Switch5 {

	public static void main(String[] args){

		String s = "Priyanshu"; // datatype string
		
		switch(s){           //int, short, byte, char, String
			case "Priyanshu":
				System.out.println("Upper case");
				break;

			case "priyanshu":
				System.out.println("lowe case");
				break;


			default:
				System.out.println("No such case");//default case
				break;

		}

	}

}
