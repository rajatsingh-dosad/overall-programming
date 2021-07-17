interface Parent {

	void m1();

}

interface Child1 extends Parent {

	default void m2(){

		System.out.println("In Child1 m2");

	}

}

interface Child2 extends Parent {

	default void m3(){

		System.out.println("In Child2 m3");

	}

}

class Derived implements Child1,Child2 {

	public void m1(){

		System.out.println("In Derived m1");

	}

}

class Test3 {

	public static void main(String[] args){

		Derived obj = new Derived();
		obj.m1();
		obj.m2();
		obj.m3();

	}

}

