#include <stdio.h>
#include <string.h>

/*
The basic idea is to choose one character and find permutations of the rest by inserting that character in different locations
Finally backtrack and print only strings of the length equal to length of the input.
Complexity is 0(n!)
*/
void swapCharacters(char * a, char * b){
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

void permutation(char * input , int startPosition, int endPosition){
	int j;
	if (startPosition == endPosition){
		printf("%s\n",input);
	}else{
		for(j = startPosition; j <= endPosition ; j++){
			swapCharacters((input + startPosition), (input + j));
			permutation(input, startPosition + 1 ,endPosition);
			swapCharacters((input + startPosition), (input + j));
		}
	}
}

int main(int argc, char const *argv[])
{
	
	char a[] = "ABCDEF";
	permutation(a,0,strlen(a)-1);

	return 0;
}