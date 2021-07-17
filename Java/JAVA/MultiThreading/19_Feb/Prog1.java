
class ThreadDemo extends Thread {

	public void run() {
	
		System.out.println("In run method");
		
		String threadName = Thread.currentThread().getName();
	
		System.out.println("Thread Name = "+threadName);
	
	}	
	

	public static void main(String[] args) {
	
	
		ThreadDemo t = new ThreadDemo();
		t.start();
		
		System.out.println("MultiThreading");
		
		String threadName = Thread.currentThread().getName();
	
		System.out.println("Thread Name = "+threadName);
		
	}
}
