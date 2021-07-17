class Diwali {

	void preperation(){

		System.out.println("Preparing for decoration,pooja and greetings");

	}

}

class Shopping extends Diwali {

	void preperation(){

		System.out.println("Preparing for Shopping with Covid-19 guidelines");

	}

	void ShoppingList(){

		System.out.println("1.Dresses");
		System.out.println("2.Accessories");

	}

}

class Decoration extends Diwali {

	void preperation(){

		System.out.println("New Decoration articles");

	}

	void newDecoration(){

		System.out.println("New lights,diyas,lanterns");

	}


}

class Greetings extends Diwali {

	void preperation(){

		System.out.println("Greetings friends and relatives with greetings");

	}

	void waysOfGreeting(){

		System.out.println("Greetings through phone and video call");

	}

}

class Festival {

	public static void main(String[] args){

		Diwali obj = new Diwali();
		obj.preperation();

		Shopping obj1 = new Shopping();
		obj1.preperation();
		obj1.ShoppingList();

		Decoration obj2 = new Decoration();
		obj2.preperation();
		obj2.newDecoration();

		Greetings obj3 = new Greetings();
		obj3.preperation();
		obj3.waysOfGreeting();		 

	}

}






