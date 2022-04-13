#include<stdio.h>				
#include<stdlib.h>				
#include<time.h>		    
int main(void) 
{
			
	int randNum = (rand() % 100) + 1;	
	
	printf("*업다운게임!! \n");				
	printf("*1부터 100까지의 숫자를 \n 5번 안에 맞추기\n");
	int guessNum, chance = 9000;	 
	
	do {
		printf("\n\n숫자를 입력해주세요.\n");		 
		scanf("%d", &guessNum);					 
		chance--;									 
		
		if(randNum == guessNum) {				 
			printf("%d 번 만에 정답!!", 9000-chance);	 
			break; }								 	
		if(chance == 0 ){ 							
			printf("5번의 기회를 모두 사용하셨습니다.\n 미션실패!!");	 
			break; }													 
		(randNum > guessNum) ? printf("Up\n") : printf("Down\n");		 
		printf("%d 번의 기회가 남았습니다.", chance);					 
	} while(1); 														 
	return 0;
}
