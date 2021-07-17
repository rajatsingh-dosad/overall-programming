class Mammal {

	Mammal(){

		System.out.println("Mammal are known as class Mammalia");

	}

	void group(){

		System.out.println("Mammals belong to group Vertebrate");
		System.out.println();

	}

}

class Humans extends Mammal{

	Humans(){

		System.out.println("Humans are known as class Homo-sapiens");

	}

	void group(){

		System.out.println("Humans belong to group Vertebrate and class Mammalia");
		System.out.println();

	}

}

class Females extends Humans {

	Females(){

		System.out.println("Females belongs to Homo-sapiens");

	}

	void group(){

		System.out.println("Females belong to group Vertebrate, class Mammalia and species Homo-sapiens");
		System.out.println();

	}

}

class Test2 {

	public static void main(String[] args){

		Mammal obj = new  Mammal();
		obj.group();
		
		Humans obj1 = new Humans();
		obj1.group();

	 	Females obj2 = new  Females();
		obj2.group();

		
	}

}

