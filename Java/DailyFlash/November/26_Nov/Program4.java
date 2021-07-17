class Company {

	void Founder(){

		System.out.println("The founder of Reliance Industries is Late Shri Dhirubhai Ambani");
		
	}


	
}


class Product extends Company {

	void Founder(){

		System.out.println("The founder of Jio is Mr Mukesh Ambani");
		
	}

}

class Industry {

	public static void main(String[] args){


		Company obj1 = new Company();
		obj1.Founder();

		Product obj2 = new Product();
		obj2.Founder();
		 

	}

}




