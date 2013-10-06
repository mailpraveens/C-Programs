#include<stdio.h>
// Program to convert a string to integer and testing by multiplying it
int getIntFromString(char *a){
	int result = 0;
	while(*a!='\0'){
		int digit;
		digit = a[0]-'0';
		result = result * 10 + digit;
		a++;
	}
	return result;
}


int main(){	
	char * a = malloc(10);
	char * b = malloc(10);
	strcpy(a,"12");
	strcpy(b,"2");

	printf("Mutliplying %s with %s and the product is %d",a ,b,getIntFromString(a)*getIntFromString(b));

}