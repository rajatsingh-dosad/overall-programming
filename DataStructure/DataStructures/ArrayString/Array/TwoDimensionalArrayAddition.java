
class TwoDimensionalArrayAddition {

	public static void main(String[] args) {

		int arr1[][] = {{1,2,3},{4,5,6},{7,8,9}};
		int arr2[][] = {{1,2,3},{4,5,6},{7,8,9}};

		int arr3[][] = new int[3][3];
			
		int i,j,k;

		for(i=0;i<arr1.length;i++) {
			
			for(j=0;j<arr2.length;j++) {
				
				arr3[i][j] = 0;
				for(k=0;k<3;k++) {

					arr3[i][j] = arr3[i][j] + arr1[i][k]*arr2[k][j];
				}			
			}
		}

		

		for(int l=0;l<3;l++) {

			for(int m=0;m<3;m++) {

				System.out.print(arr3[l][m]+" ");
			}
			System.out.println();
		}
	}
} 
