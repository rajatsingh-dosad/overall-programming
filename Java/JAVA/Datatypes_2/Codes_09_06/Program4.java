


class FloatDemo {

	public static void main(String[] args) {

//		float x=5.2;
//		System.out.println(x);		//Error:possible lossy conversion from double to float


		float f=5.2f;
		System.out.println(f);		//5.2

		double d=5.2;
		System.out.println(d);		//5.2


		if(d==f)
			System.out.println("Same");
		else
			System.out.println("Different");

	}
}
