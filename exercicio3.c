#include <stdio.h>
#include <stdlib.h>

void strcopy(char *str, char *str2){
	while (*str2 != '\0'){
		*str = *str2;
		str++;
		str2++;}}
int main() {
char str[50], str2[50];
fgets(str, 50, stdin);
strcopy(str,str2);
printf("%s", str);}
