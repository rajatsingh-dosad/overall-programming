
#include<stdio.h>

typedef struct CrickerScores {

	char *name;
	float avg_runRate;
	int careerRuns;
}cs;

void main() {
	
	cs plyr1 = {"Virat Kohli",50.5,5000};
	cs plyr2 = {"Rohit Sharma",48.2,4100};
	cs plyr3 = {"Shikhar Dhawan",45.5,3205};
	cs plyr4 = {"Mahendra Singh Dhoni",40.8,3500};

	cs plyrarr[4] = {plyr1,plyr2,plyr3,plyr4};
	
	printf("Player who has runs greater than or equal to 4000 are:\n");
	for(int i=0;i<4;i++) {
		
		if(plyrarr[i].careerRuns >= 4000)
			printf("%s\n",plyrarr[i].name);	
	}
	
	int lowRunRate = 0;
	float min = 100.00;
	printf("\nThe player who has the lowest average run rate is:\n");
	for(int i=0;i<4;i++) {
		
		if(plyrarr[i].avg_runRate < min) {
			min = plyrarr[i].avg_runRate;
			lowRunRate++;
		}
	}
	printf("%s\n\n",plyrarr[lowRunRate-1].name);

	int lowRun = 5001;
	int index = 0;
	printf("Name of the player who is low run_scorer among the player is:\n");
	for(int i=0;i<4;i++) {
		
		if(plyrarr[i].careerRuns < lowRun) {
			lowRun = plyrarr[i].careerRuns;
			index++;
		}
	}
	printf("%s\n",plyrarr[index-1].name);
}

