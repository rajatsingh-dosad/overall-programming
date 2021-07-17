
class Flat {
	
	class Kitchen {
		
		void cooking() {

			System.out.println("Cooking");
		}
	}

	class Bedroom {
		
		void sleeping() {

			System.out.println("Sleeping");
		}
	}
}

class House {

	public static void main(String[] args) {
		
		Flat f = new Flat();

		Flat.Kitchen k = f.new Kitchen();
		k.cooking();

		Flat.Bedroom b = f.new Bedroom();
		b.sleeping();
	}
}


