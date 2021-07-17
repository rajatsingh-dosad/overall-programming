class GrandParent {

	int num1 = 10;

	
}

class Parent extends GrandParent {

	int num2 = 20;

}

class Child extends Parent {

	void addition(){

		System.out.println("Additon = " + (super.num1+super.num2));
		
	}

}

class Add {

	public static void main(String[] args){


		Child obj1 = new Child();
		obj1.addition();
		 

	}

}






