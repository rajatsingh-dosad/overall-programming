
class Addition {

	void add(int x,int y) {

		System.out.println("Int Method");
		System.out.println(x+y);
	}

	void add(int ...vargs) {

		System.out.println("Varargs Method");
		int sum = 0;

		for(int i: vargs) {

			sum += i;
		}

		System.out.println(sum);
	}

	public static void main(String[] args) {
		
		Addition a = new Addition();
		a.add(10,20);

		a.add(10,20,30,40);
	}
}
