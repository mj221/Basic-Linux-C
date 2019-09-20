#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[]){
	int total=0;
	int max;

	if (argc < 2){
		return 1;
	}
	max = atoi(argv[1]);
	for (int  i = 1; i< argc; i=i+1){
		total += atoi(argv[i]);
		if (max <= atoi(argv[i])){
			max=atoi(argv[i]);
		}
	}
	printf("%d %d\n", total, max);
	return 0;
} 
