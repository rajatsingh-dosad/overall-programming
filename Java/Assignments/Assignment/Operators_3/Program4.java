

class Complement {

	public static void main(String[] args) {

		int x=10;
		System.out.println("Integer Complement: "+(~x));	//Complement(~) works with integer
		
		char y=10;
		System.out.println("Character Complement: "+(~y));	//Complement(~) works with character

		long z=10;
		System.out.println("Long Complement: "+(~z));		//Complement(~) works with integer
	
		float a=10.5f;
		System.out.println("Float Complement: "+(~a));		//Complement(~) doesn't works with float
		
		double b=20.5;
		System.out.println("Double Complement: "+(~b));		//Complement(~) doesn't works with double
	}
}	
