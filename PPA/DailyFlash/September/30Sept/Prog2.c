
#include<stdio.h>

void main() {
	
	int iarr[5];
	char carr[5];
	float farr[5];
	
	int *iptr= iarr;
	char *cptr= carr;
	float *fptr= farr;

	printf("Enter the elements in integer array: ");
	for(int i=0;i<5;i++) {

		scanf("%d",&iarr[i]);
	}
	
	printf("Enter the elements in char array: ");
	for(int i=0;i<5;i++) {

		scanf(" %c",&carr[i]);
	}


	printf("Enter the elements in float array: ");
	for(int i=0;i<5;i++) {

		scanf("%f",&farr[i]);
	}
	
	//Considering starting address as 100 for integer array
	//Considering starting address as 200 for character array
	//Considering starting address as 300 for float array

	printf("Before any operation\n");
	printf("%d\n",*iptr);			//10
	printf("%c\n",*cptr);			//'a'
	printf("%f\n",*fptr);			//10.5
	
	printf("\nAfter addition with 1\n");
	iptr = iptr + 1;			//100 + 1*sizeof(DTP) i.e 100+4 = 104
	cptr = cptr + 1;			//200 + 1*sizeof(Dtp) i.e 200+1 = 201
	fptr = fptr + 1;			//300 + 1*sizeof(Dtp) i.e 300+4 = 304

	printf("%d\n",*iptr);			//20
	printf("%c\n",*cptr);			//'b'
	printf("%f\n",*fptr);			//20.5
	
	printf("\nAfter subtraction with 1\n");
	iptr = iptr - 1;			//104 - 1*sizeof(DTP) i.e 104-4 = 100
	cptr = cptr - 1;			//201 - 1*sizeof(Dtp) i.e 201-1 = 200
	fptr = fptr - 1;			//304 - 1*sizeof(Dtp) i.e 304-4 = 300

	printf("%d\n",*iptr);			//10
	printf("%c\n",*cptr);			//'a'
	printf("%f\n",*fptr);			//10.5


}

//Output : 

//	10
//	a
//	10.5

//	20
//	b
//	20.5


//	10
//	a
//	10.5

/* Here in the first output iptr,cptr and fptr are pointing to first element of their 
 * respective array so when we write *iptr,*cptr and *fptr it prints value at first index

   For second output we are increamenting by 1 i.e one element forward
   & For third output we are decrementing by 1 i.e one element behind

  */
