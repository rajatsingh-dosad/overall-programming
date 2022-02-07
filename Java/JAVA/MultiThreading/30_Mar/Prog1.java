import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;

class ThreadExeDemo implements Runnable {
	
	String workNum = null;

	ThreadExeDemo(String workNum) {

		this.workNum = workNum;
	}

	public void run() {
		
		System.out.println(Thread.currentThread().getName() + " start task " + workNum);
		workAssign();		
		System.out.println(Thread.currentThread().getName() + " End task ");
		
	}

	void workAssign() {
		
		try {
			Thread.sleep(3000);
		}catch(InterruptedException ie) {


		}
	}
	
}


class MyThreadExecutor {

	public static void main(String[] args) {

		ExecutorService exec = Executors.newCachedThreadPool();

		for(int i=0;i<20;i++) {

			ThreadExeDemo work = new ThreadExeDemo("" + i);
			exec.execute(work);	
	 	}

		try {
			Thread.sleep(2000);
		}catch(InterruptedException ie) {
		}
		
		for(int i=0;i<20;i++) {

			ThreadExeDemo work = new ThreadExeDemo("" + i);
			exec.execute(work);	
	 	}
	}	
}
