class  Program4{

	Program4(int a){

		System.out.println("In 1st parameterised constructor");

		System.out.println("a = " + a);

		Argument();

		
	}

	void Argument(){
	
		System.out.println("In non static method");


	}


	

}

class Prg4{

	public static void main(String[] args){

		Program4 obj1 = new Program4(10);
		
	}


}

