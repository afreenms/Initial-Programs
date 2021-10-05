//Program to print all perfect numbers between 1 to n
#include<stdio.h>
int main(){
	int num,i,divsum,counter;
	printf("Enter a Number\n");
	scanf("%d",&num);
	for(counter=1;counter <= num; counter++){
		divsum=0;
		for(i=1; i <= counter/2; i++){
			
			if(counter%i == 0){
				divsum += i;
			}
			
		}
		
		if(divsum==counter)
			printf("%d is a perfect number\n",counter);
		
		}
	
	getch();
	return 0;
}
