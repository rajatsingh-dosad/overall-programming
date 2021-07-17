
class MyThread extends Thread {

	public void run() {

		for(int i=0;i<10;i++) {
			System.out.println("Child Thread");
		}
	}
}

class YieldDemo {

	public static void main(String[] args) {

		MyThread mt = new MyThread();
		mt.start();

		for(int i=0;i<10;i++) {

			mt.yield();
			System.out.println("Parent Thread");
		}
	}

}
