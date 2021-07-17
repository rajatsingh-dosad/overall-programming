class  Program1{

	Program1(){

		System.out.println("In default constructor");

		Argument();

	}

	void Argument(){
	
		System.out.println("In method argument");


	}

}

class Prg1{

	public static void main(String[] args){

		Program1 obj = new Program1();

	}


}

