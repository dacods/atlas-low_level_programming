#include <stdio.h>
#include <ctype.h>
/**
 * main - Prints the alphabet without q and e.
 *
 * Return: Always 0.
 */
int main(void){
char letters;

for (letters = 'a'; letters <= 'z'; letters++){
	if (letters == 'q' || letters == 'e'){
		continue;
	}
	else{
		putchar(letters);
	}
	}
putchar('\n');
return (0);
}
