#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	
	printf("input a character : ");
	scanf ("%c", &c);
	
	printf("the next character of %c(%d) is %c (%d)\n", c,c,c+1,c+1);
	
	system("PAUSE");
	
	return 0;
}
