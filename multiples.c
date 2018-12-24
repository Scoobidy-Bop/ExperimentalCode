#include <stdio.h>

int main() {
int i, input, count;
char *string_input;
printf("Enter any number less than 1000: ");
fgets(string_input, 10, stdin);
sscanf(string_input,"%i",&input);
printf("\n");
printf(" Input = %i\n",input);

return (0);
}
