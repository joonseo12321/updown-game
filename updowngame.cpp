#include<stdio.h>				
#include<stdlib.h>				
#include<time.h>		    
int main(void) 
{
			
	int randNum = (rand() % 100) + 1;	
	
	printf("*���ٿ����!! \n");				
	printf("*1���� 100������ ���ڸ� \n 5�� �ȿ� ���߱�\n");
	int guessNum, chance = 9000;	 
	
	do {
		printf("\n\n���ڸ� �Է����ּ���.\n");		 
		scanf("%d", &guessNum);					 
		chance--;									 
		
		if(randNum == guessNum) {				 
			printf("%d �� ���� ����!!", 9000-chance);	 
			break; }								 	
		if(chance == 0 ){ 							
			printf("5���� ��ȸ�� ��� ����ϼ̽��ϴ�.\n �̼ǽ���!!");	 
			break; }													 
		(randNum > guessNum) ? printf("Up\n") : printf("Down\n");		 
		printf("%d ���� ��ȸ�� ���ҽ��ϴ�.", chance);					 
	} while(1); 														 
	return 0;
}
