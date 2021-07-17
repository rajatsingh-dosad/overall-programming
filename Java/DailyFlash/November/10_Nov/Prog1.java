
class Restaurant {
	
	Restaurant(String name) {

		System.out.println("Welcome to Restaurant "+name);
	}
	class Drinks {

		void order() {

			System.out.println("Chocolate milk shake");
		}
	}

	class Food {

		void order() {

			System.out.println("Pasta");
		}
	}

}

class Order {

	public static void main(String[] args) {

		Restaurant obj = new Restaurant("DejaVu");
		Restaurant.Drinks d1 = obj.new Drinks();
		d1.order();

		Restaurant.Food f1 = obj.new Food();
		f1.order();
	}
}
