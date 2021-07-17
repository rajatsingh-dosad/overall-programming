class Automobiles {

	void safetyFeatures(){

		System.out.println("Airbags,Antilock Brakes,safety belt etc");

	}

}

class Cars extends Automobiles {

	void EngineType(){

		System.out.println("Petrol Engine or Diesel Engine");

	}



}

class Test {

	public static void main(String[] args){

		Automobiles obj1 = new Automobiles();
		obj1.safetyFeatures();

		Cars obj2 = new Cars();
		obj2.safetyFeatures();
		obj2.EngineType();
		

	}

}

