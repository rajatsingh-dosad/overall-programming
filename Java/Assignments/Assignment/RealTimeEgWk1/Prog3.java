
/*
	Program 3. A group of ants is called colony. Write a class called colony which has an
	array, that will store 5 Ant class objects.
	Print address of all ant objects stored in array.
*/

class Ant {
	
	void hardWorking() {
		System.out.println("Ants Class");
	}
}

class Colony {

	public static void main(String[] args) {

		Ant arr[] = new Ant[5];
		
		for(int i=0;i<5;i++) {
			
			arr[i] = new Ant();
		}

		for(int i=0;i<5;i++) {

			System.out.println(arr[i].hashCode());
		}
	}
}


