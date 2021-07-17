
class NewThread extends Thread {

	public void run() {
		
		System.out.println("Thread Name = "+Thread.currentThread().getName());
	}
}

class MyThread extends Thread {

	public void run() {

		System.out.println("Thread Name = "+Thread.currentThread().getName());

		NewThread nt = new NewThread();
		nt.start();
	}
}

class MultipleThreads {

	public static void main(String[] args) {

		MyThread mt1 = new MyThread();
		mt1.start();

		System.out.println("Thread Name = "+Thread.currentThread().getName());
		
	}
}
