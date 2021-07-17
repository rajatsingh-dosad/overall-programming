
class ThreadDemo extends Thread {

	public void run() {
		
		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getPriority());
		System.out.println("In run");	
	}
}

class ThreadScenario {

	public static void main(String[] args) {

		ThreadDemo obj = new ThreadDemo();	 
		obj.start();				
		
		Thread.currentThread().setName("Core2Web");	//changing the name of main thread

		System.out.println(Thread.currentThread().getName());
		System.out.println(Thread.currentThread().getPriority());
		System.out.println("In main");	


	}
}
