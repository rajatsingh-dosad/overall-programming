
class ThreadDemo extends Thread {

	public void gun()  {
		
		System.out.println(Thread.currentThread().getName());
		for(int i=0;i<10;i++) {

			System.out.println("Core2Web");
		}
	}
}

class Demo {

	public static void main(String[] args) {
		
		ThreadDemo t = new ThreadDemo();
		t.start();
		t.gun();

		System.out.println(Thread.currentThread().getName());
		for(int i=0;i<10;i++) {

			System.out.println("Biencaps");
		}
		
	}

}
