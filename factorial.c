#include <stdio.h>

int main(int argc, char *argv[]) {

char *input; 
int i,num;
long double total=1;
printf("\n");
if (argc < 2) {
	printf("No command line input. Please enter a number: ");
	fgets(input,10,stdin);
	int ret = sscanf(input,"%i",&num);
	    if (ret==0) {
		printf("Not a valid number!\n\n");
		return(0);
		}
}
else {
	input=argv[1];
	int ret = sscanf(input,"%i",&num);
	    if (ret==0) {
		printf("Not a valid Number\n\n");
		return(0);
		}
}
if (num<=0){
	printf("This number cannot be a factorial!\n\n");
	return(0);
}
if (num==1) {
	printf("The Factorial of 1 is: 1\n\n");
	return(0);
}

for (i=num; i>=1 ; i--) {
	total=total*i;
}

printf("The Factorial of %i is: %Lf\n\n",num,total);

return (0);
}
