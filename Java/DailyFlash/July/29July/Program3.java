

class GreatestNo {

	public static void main(String[] args) {

		int num1=40,num2=70,num3=30;

		if(num1 >num2 && num1 >num3)
			System.out.println("Largest number is "+num1);

		else if(num2 >num1 && num2 >num3)
			System.out.println("Largest number is "+num2);
	
		else if(num3 >num2 && num3 >num1)
			System.out.println("Largest number is "+num3);
	}
}
