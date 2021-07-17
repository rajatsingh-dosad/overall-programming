
class Trip {

	Trip() {

		System.out.println("Trip Constructor");
	}

	void place() {

		System.out.println("Ooooohhh Goa");
	}
}

class Today {

	public static void main(String[] args) {

		Trip obj = new Trip() {

			void place() {

				System.out.println("Alibag");

			}
		};

		obj.place();
	}
}
