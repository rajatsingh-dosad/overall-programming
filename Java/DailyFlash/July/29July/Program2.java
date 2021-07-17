

class UpperLowerChar {

	public static void main(String[] args) {

		char ch = 'a';
		if(ch>=65 && ch<=90) {
			char c=(char)(ch+32);	
			System.out.println(c);
		}
	
		if(ch>=97 && ch<=122) {
			char c=(char)(ch-32);	
			System.out.println(c);
	}}
}
