
class Mall {
	
	class Food {
		
		void eating() {

			System.out.println("Ordering Pizza");
		}
	}

	class Shopping {

		void buying() {

			System.out.println("Shopping clothes");
		}

	}
}


class Pavillion {

	public static void main(String[] args) {

		Mall m = new Mall();

		Mall.Food f = m.new Food();
		f.eating();

		Mall.Shopping s = m.new Shopping();
		s.buying();
	}
}
