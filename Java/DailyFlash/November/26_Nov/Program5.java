class Google {

	void ReleaseDate(){

		System.out.println("Google was launched on 4th September 1998");

	}
	
}

class GooglePixel extends Google {

	void ReleaseDate(){

		System.out.println("First Google Pixel was launched on 20th October");

	}

}

class Pixel5a extends GooglePixel {

	void ReleaseDate(){

		System.out.println("Google Pixel 5a was launched on 30th September 2020");
		
	}

}

class Product {

	public static void main(String[] args){

		Google obj1 = new Google();
		obj1.ReleaseDate();

		GooglePixel obj2 = new GooglePixel();
		obj2.ReleaseDate();

		Pixel5a obj3 = new Pixel5a();
		obj3.ReleaseDate();
		 

	}

}






