
class Prog3 {

	public static void main(String[] args) {

		int[] arr = {1,3,4,5,6};
		
		int index = 0;
		int[] miss = new int[3];
		int num ;
		for(int i=0;i<4;i++) {
			num = arr[i];
			if(++num == arr[i+1])
				continue;
			else	{
				miss[index] = num;
				index++;
			}
		}
		
		System.out.println("Output:");
		for(int i=0;i<index;i++) {
			System.out.print(miss[i]+" ");
		}
		System.out.println();
	}
}
