#include <stdio.h>

#define TAB_LENGTH 4 

main() {
	int c;
	unsigned int noSpaces;

	while ((c=getchar()) != EOF) {
		if (c == '\t') {
			noSpaces = TAB_LENGTH;

			while (noSpaces) {
				putchar(' ');
				--noSpaces;
			}
		}
		else { putchar(c); }
	}
}
