class Library {

	String book1 = "Java";
	String book2 = "Cpp";
	String book3 = "Python";

	
}

class Book extends Library {

	void info(){

		System.out.println("Book1 = " + super.book1);
		System.out.println("Book2 = " + super.book2);
		System.out.println("Book2 = " + super.book3);

	}

}

class Student {

	public static void main(String[] args){


		Book obj1 = new Book();
		obj1.info();
		 

	}

}






