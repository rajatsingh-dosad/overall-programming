class  Program3{


	Program3(){

		System.out.println("In default constructor");

	}

	Program3(int a){

		System.out.println("In 1st parameterised constructor");

		System.out.println("a = " + a);


	}

	Program3(int id, String name){

		System.out.println("In 2nd parameterised constructor");

		System.out.println("id = " + id);
		System.out.println("String = " + name);

	}


}

class Prg3{

	public static void main(String[] args){

		Program3 obj = new Program3();
		Program3 obj1 = new Program3(10);
		Program3 obj2 = new Program3(1,"Shruti");

	}


}

