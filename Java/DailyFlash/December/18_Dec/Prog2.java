
abstract class Marks {

	abstract float getPercentage();
}

class A extends Marks {
	
	int a,b,c;
	A(int a, int b, int c) {
		
		this.a = a;
		this.b = b;
		this.c = c;
	}

	float getPercentage() {
		
		return ((float)(a+b+c)/2);

	}
}

class B extends Marks {

	int a,b,c,d;
	B(int a, int b, int c,int d) {
		
		this.a = a;
		this.b = b;
		this.c = c;
		this.d = d;
	}

	float getPercentage() {

		System.out.println("Percentage obtained by student B is : "+((float)(a+b+c+d)/2)+"%");
	}
}

class Student {

	public static void main(String[] args) {

		A s1 = new A(82,75,79);
		s1.getPercentage();

		B s2 = new B(78,98,54,79);
		s2.getPercentage();
		System.out.println("Percentage obtained by student A is : "+);
	}
}
		
