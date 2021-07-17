
class SleepDemo extends Thread {

	public void run() throws InterruptedException {

		System.out.println("In run");
		
		for(int i=0;i<3;i++) {

			System.out.println("Child thread");
			sleep(2000);

		}
	}
}

class ThreadDemo {

	public static void main(String[] args) throws InterruptedException {

		SleepDemo sd = new SleepDemo();
		sd.start();


		for(int i=0;i<3;i++) {

			System.out.println("Main thread");
		}
	
	}
}
