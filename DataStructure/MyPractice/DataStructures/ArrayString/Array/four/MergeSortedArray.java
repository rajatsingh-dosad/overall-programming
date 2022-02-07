
class MergeSortedArray {

	public static void main(String[] args) {

		int arr2[] = {1,12,20};
		int arr1[] = {2,4,6,8,10,18};
		int arr3[] = new int[20];
	
		int i=0,j=0,num=0;

		while(i<arr1.length && j<arr2.length) {

			if(arr1[i] < arr2[j]) {
				
				arr3[num] = arr1[i];
				num++;
				i++;
			}
			else if(arr1[i] > arr2[j]) {

				arr3[num] = arr2[j];
				num++;
				j++;
			}
	
		}
		while(i<arr1.length) {

			arr3[num] = arr1[i];
			i++;
			num++;
		}

		while(j<arr2.length) {

			arr3[num] = arr2[j];
			j++;
			num++;
		}

		for(int k=0;k<arr1.length+arr2.length;k++) {

			System.out.print(arr3[k]+ " ");
		}
		System.out.println();
	}
}
