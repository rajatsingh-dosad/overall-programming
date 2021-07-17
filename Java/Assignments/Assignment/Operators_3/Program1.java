

class Bitwise {

	public static void main(String[] args) {

/*		System.out.println("Bitwise And(&)");
		int x1=10;
		int y1=30;
		int ans1=0;
		ans1=x1 & y1;
		System.out.println("Integer: "+ans1 );	//Bitwise And works with Integer

		long x2=10;
		long y2=30;
		long ans2=0;
		ans2=x2 & y2;
		System.out.println("Long: "+ans2 );	//Bitwise And works with long
		
		char x3='a';
		char y3='b';
		int ans3;
		ans3=x3 & y3;
		System.out.println("Char: "+ans3 );	//Bitwise And works with char
		
		float x4=20.5f;
		float y4=30.2f;
		float ans4;
		ans4=x4 & y4;
		System.out.println("Float: "+ans4 );	//Bitwise And doesn't works with float
		
		double x5=20.5;
		double y5=30.2;
		double ans5;
		ans5=x5 & y5;
		System.out.println("Float: "+ans5 );	//Bitwise And doesn't works with float        */
		

		
		
		
/*		System.out.println("Bitwise Or(|)");
		int x1=10;
		int y1=30;
		int ans1=0;
		ans1=x1 | y1;
		System.out.println("Integer: "+ans1 );	//Bitwise Or works with Integer

		long x2=10;
		long y2=30;
		long ans2=0;
		ans2=x2 | y2;
		System.out.println("Long: "+ans2 );	//Bitwise Or works with long
		
		char x3='a';
		char y3='b';
		int ans3;
		ans3=x3 | y3;
		System.out.println("Char: "+ans3 );	//Bitwise Or works with char
		
		float x4=20.5f;
		float y4=30.2f;
		float ans4;
		ans4=x4 | y4;
		System.out.println("Float: "+ans4 );	//Bitwise Or doesn't works with float
		
		double x5=20.5;
		double y5=30.2;
		double ans5;
		ans5=x5 | y5;
		System.out.println("Float: "+ans5 );	//Bitwise Or doesn't works with float
*/	
	
	
	
		System.out.println("Bitwise Xor(^)");
		int x1=10;
		int y1=30;
		int ans1=0;
		ans1=x1 ^ y1;
		System.out.println("Integer: "+ans1 );	//Bitwise XOR works with Integer

		long x2=10;
		long y2=30;
		long ans2=0;
		ans2=x2 ^ y2;
		System.out.println("Long: "+ans2 );	//Bitwise XOR works with long
		
		char x3='a';
		char y3='b';
		int ans3;
		ans3=x3 ^ y3;
		System.out.println("Char: "+ans3 );	//Bitwise XOR works with char
		
		float x4=20.5f;
		float y4=30.2f;
		float ans4;
		ans4=x4 ^ y4;
		System.out.println("Float: "+ans4 );	//Bitwise XOR doesn't works with float
		
		double x5=20.5;
		double y5=30.2;
		double ans5;
		ans5=x5 ^ y5;
		System.out.println("Float: "+ans5 );	//Bitwise XOR doesn't works with float


}

}



//For integral types(char, int , long) , the decimal values is directly stored as binary representation.
//However , in case of floating point numbers ,there is no direct conversion between decimal number to binary. Instead flaoting point number is encodedE
//in IEEE-754 format.
//Hence Bitwise operator only works with Integer,char and Long and not with Float or double.
