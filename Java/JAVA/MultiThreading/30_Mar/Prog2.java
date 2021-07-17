
class ThreadDemo extends Thread {

	ThreadDemo(ThreadGroup tg, String tName) {

		super(tg,tName);
	}

	public void run() {

		System.out.println(Thread.currentThread().getName());
	}
}


class ThreadGroupDemo {

	public static void main(String[] args) {
		
		ThreadGroup tg1 = new ThreadGroup("ParentGroup");

		ThreadDemo t1 = new ThreadDemo(tg1,"One");
		ThreadDemo t2 = new ThreadDemo(tg1,"Two");
		ThreadDemo t3 = new ThreadDemo(tg1,"Three");

		System.out.println(tg1.activeCount());

		t1.start();
		t2.start();
		t3.start();
		
		System.out.println(tg1.activeCount());
	}
}
