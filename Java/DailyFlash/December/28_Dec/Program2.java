class Parent {

	void m1(){

		System.out.println("In Parent m1");

	}

}

class Child extends Parent {

	void m1(){

		System.out.println("In Child m1");

	}

}

class Test1 {

	public static void main(String[] args){

		Parent obj1 = new Parent();
		obj1.m1();

	 	Child obj2 = new  Child();
		obj2.m1();

		Parent obj3 = new  Child();
		obj3.m1();
		

	}

}

