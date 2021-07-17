
class IndianDefence {

	IndianDefence() {

		System.out.println("Major General Bipin Rawat");
	}

	class Army {

		void attack() {

			System.out.println("URI Attack");
		}
	}

	class Navy {

		void attack() {

			System.out.println("Ghazi Attack");
		}
	}

	class AirForce {

		void attack() {

			System.out.println("Balakot Attack");
		}
	}

	public static void main(String[] args) {

		IndianDefence obj = new IndianDefence();
		
		Army army = obj.new Army();
		army.attack();
		
		Navy navy = obj.new Navy();
		navy.attack();
		
		AirForce air = obj.new AirForce();
		air.attack();
	}
}
