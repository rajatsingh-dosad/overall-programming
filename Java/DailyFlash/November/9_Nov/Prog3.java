
class CarModel {

	String modelName ;

	CarModel(String mName) {

		modelName = mName;
	}

	void getModelName() {

		System.out.println("ModelName of the car is: "+modelName);
	}
}

class Model {

	public static void main(String[] args) {

		CarModel c = new CarModel("Audi q7");
		c.getModelName();
	}
}




