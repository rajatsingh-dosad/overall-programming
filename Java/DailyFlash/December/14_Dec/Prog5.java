
class Rectangle {

	int length;
	int breadth;
	
	Rectangle(int length, int breadth) {

		this.length = length;
		this.breadth = breadth;
		
		area();
		Perimeter();
	}

	void area() {

		System.out.println("Area of rectangle is : "+(length*breadth));
	}

	void Perimeter() {

		System.out.println("Perimeter of Rectangle is :"+(2*(length + breadth)));
	}

}

class Square extends Rectangle {
	
	int side;

	Square(int side) {
		
		super(side,side);
		
		this.side = side;

		area();
		Perimeter();
	}

	void area() {

		System.out.println("Area of Square is : "+(side * side));
	}

	void Perimeter() {

		System.out.println("Perimeter of Square is :"+(4*side));
	
	}
		
}

class Calculate {
	
	public static void main(String[] args) {

		Square obj = new Square(5);
		
	}
}

	
