
class MyThread extends Thread {

	static Thread mainThread = null;
	public void run() {
		
		try {
			mainThread.join();
		}catch(Exception e) {}
		for(int i=0;i<10;i++) {

			System.out.println("Child Thread");
		}
	}
}

class JoinDemo {

	public static void main(String[] args) throws InterruptedException {

		MyThread mt = new MyThread();
		mt.start();
		MyThread.mainThread = Thread.currentThread();
		mt.join();
		for(int i=0;i<10;i++) {

			System.out.println("Parent Thread");
		}
	}
}
