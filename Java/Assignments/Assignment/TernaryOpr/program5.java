

class Volkswagen {

	public static void main(String[] args) {

		Volkswagen Audi	=new Volkswagen();
		boolean isbrand1= Audi instanceof Volkswagen;
		System.out.println(isbrand1);

		Volkswagen Nano	=null;
		boolean isbrand2= Nano instanceof Volkswagen;
		System.out.println(isbrand2);
	}
}
