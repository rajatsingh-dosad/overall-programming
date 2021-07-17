
/*
	Program 2. The dessert cake is 'composed of' egg, chocolate and cream. Create a
	class called cake and in class cake, create objects of
	egg, chocolate and cream. While creating objects of egg, chocolate and cream pass
	amount of calories accumulated in egg, chocolate and cream via constructor.
	And then, find total number of calories in cake
*/

class Egg {
	
	int eggCal;
	Egg(int cal) {

		eggCal = cal;
	}
}

class Chocolate {

	int chocolateCal;
	Chocolate(int cal) {

		chocolateCal = cal;
	}
}

class Cream {

	int creamCal;
	Cream(int cal) {

		creamCal = cal;
	}
}


class Cake {

	public static void main(String[] args) {

		Egg e = new Egg(276);
		Chocolate choco = new Chocolate(300);
		Cream cream = new Cream(175);

		System.out.println("Total number of Calorie in cake is: "+(e.eggCal+choco.chocolateCal+cream.creamCal));
	}
}


