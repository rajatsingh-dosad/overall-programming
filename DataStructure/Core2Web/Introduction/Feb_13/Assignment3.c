
#include <stdio.h>
#include <string.h>

void* malloc(size_t size);

struct Book {

	char bName[10];
	int pages;
	float price;
};

void main() {

	char choice = 'y';
	
	printf("*************Select the data-type you want*************\n");
	printf("1) Int \n2) Float \n3) Char\n4) Double\n5) Struct\n");
	int option;
	scanf("%d",&option);

	void *vptr = NULL;
	int size;

	switch(option) {

		case 1: {
				
				printf("Enter the size you want for Int: ");
				scanf("%d",&size);
				vptr = malloc(size*sizeof(int));
				int *iptr = (int*)vptr;

				printf("Enter the elements: ");
				for(int i=0;i<size;i++) {

					scanf("%d",(iptr+i));
				}

				for(int i=0;i<size;i++) {
					
					printf("%d\n",*(iptr+i));
				}

				break;
			}

		case 2: {
				printf("Enter the size you want for float: ");
				scanf("%d",&size);
				vptr = malloc(size * sizeof(float));
				float *iptr = (float*)vptr;

				printf("Enter the elements: ");
				for(int i=0;i<size;i++) {

					scanf("%f",(iptr+i));
				}

				for(int i=0;i<size;i++) {
					
					printf("%f\n",*(iptr+i));
				}

				break;
			}

		case 3: {
				printf("Enter the size you want for char: ");
				scanf("%d",&size);
				vptr = malloc(size * sizeof(char));
				char *iptr = (char*)vptr;

				printf("Enter the elements: ");
				for(int i=0;i<size;i++) {

					scanf("%c",(iptr+i));
				}

				for(int i=0;i<size;i++) {
					
					printf("%c\n",*(iptr+i));
				}

				break;
			}

		case 4: {
				printf("Enter the size you want for double: ");
				scanf("%d",&size);
				vptr = malloc(size * sizeof(double));
				double *iptr = (double*)vptr;

				printf("Enter the elements: ");
				for(int i=0;i<size;i++) {

					scanf("%lf",(iptr+i));
				}

				for(int i=0;i<size;i++) {
					
					printf("%lf\n",*(iptr+i));
				}

				break;
			}

		case 5: {
				printf("Enter the size you want for structure: ");
				scanf("%d",&size);
				vptr = malloc(size * sizeof(struct Book));
				struct Book *iptr = (struct Book*)vptr;


				printf("Enter the elements: bName page price ");
				for(int i=0;i<size;i++) {
					
					scanf("%s",iptr->bName);
					scanf("%d",&iptr->pages);
					scanf("%f",&iptr->price);
					iptr++;
					
				}

				iptr = iptr - 2;
				printf("The info about books are:\n");
				for(int i=0;i<size;i++) {
					
					printf("%s ",iptr->bName);
					printf("%d ",iptr->pages);
					printf("%f\n",iptr->price);	
					iptr++;
				}
				break;
			}

		default:
			printf("You entered a wrong option!!!\n");

	}
}
