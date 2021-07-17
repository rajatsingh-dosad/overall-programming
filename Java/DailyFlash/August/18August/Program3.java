

class CheckChar  {

	public static void main(String[] args) {

		char ch = '*';

		if(ch>=48 && ch<=57)
			System.out.println(ch+" is a Digit");
		else if((ch>=65 && ch<=90) || (ch>=97 && ch<=122))
			System.out.println(ch+" is a Alphabet");
		else
			System.out.println(ch+" is a Special Character");
	}
}

