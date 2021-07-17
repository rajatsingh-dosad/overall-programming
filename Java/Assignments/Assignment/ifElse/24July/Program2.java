

class Angle {

	public static void main(String[] args) {

		int angle = 20;

		if(angle<90) {
			System.out.println("Angle = "+angle);
			System.out.println("Acute Angle");
		}
		
		 if(angle==90) {
			System.out.println("Angle = "+angle);
			System.out.println("Right Angle");
		}
		
		 if(angle>90) {
			System.out.println("Angle = "+angle);
			System.out.println("Obtuse Angle");
		}
	}
}
