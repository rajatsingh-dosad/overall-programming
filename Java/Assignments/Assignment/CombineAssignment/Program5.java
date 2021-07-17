
/*	Program 5:Write a program to print the ASCII value of individual character from a
	string (take hardcoded value)
	
	e.g : abcd
	output : a= 97,b = 98,c=99,d=100
*/


class Ascii {

	public static void main(String[] args) {

		String s = "abcd";

		for(int i=0;i<s.length();i++) {

			char ch =s.charAt(i);
			if(i==s.length()-1)
				System.out.println(ch+"= "+(int)ch+".");
			else
				System.out.print(ch+"= "+(int)ch+",");

		}
			
	}
}
