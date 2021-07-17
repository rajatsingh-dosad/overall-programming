
class MyThread implements Runnable {

	public void run() {

		System.out.println("In run");
	}
}

class RunnableThread  {

	public static void main(String[] args) {

		Thread t = new Thread(new MyThread());
		t.start();
	}
}
