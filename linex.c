#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* readline(FILE* file);

int main(int argc, char** argv[]){
	char* input;
	input = readline(stdin);
	int length = strlen(input);
	printf("R=");
	while(length > 0){
		printf("%c", input[length - 1]);
		length--;
	}
	printf("\n");
	free(input);
}	
char* readline(FILE* file){
	size_t size = 80;
	char* result = malloc(sizeof(char) * size);
	int position=0;
	int next = 0;
	int counter =0;
	while (1){
		next = fgetc(file);
		if (counter == size){
			size = size + 80;
			
			result = (char *) realloc(result, sizeof(char) * size);
		} 
		if (next == EOF || next == '\n'){ 
			result[position] = '\0';
			return result;
			
		} else {
			result[position++] = (char)next;
			counter++;
	
		}
	}
	
}	
