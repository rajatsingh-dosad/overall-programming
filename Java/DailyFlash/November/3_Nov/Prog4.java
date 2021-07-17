
class Prog4 {

	Prog4(int side) {
		
		System.out.println("Area of square = "+(side*side));
	}

	Prog4(int len,int breadth) {
		
		System.out.println("Area of Rectangle = "+(len*breadth));

	}

	public static void main(String[] args) {


		Prog4 sq = new Prog4(10);
		Prog4 rec = new Prog4(5,4);
	}
}
