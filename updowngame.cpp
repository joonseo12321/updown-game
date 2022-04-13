#include<stdio.h>				
#include<stdlib.h>		//stdlib를 선언		
#include<time.h>		    //time을 선언 
int main(void) 	
{
	srand(time(0)); 	//수식 함수 없어도 실행은 되지만 똑같은 수만 나오는 상황때문에 입력
	int randNum = (rand() % 100) + 1;		//1~100까지 랜덤수를 정해줌
	
	printf("*up or down game!! \n");		
	printf("*1부터 100까지의 숫자를 \n5번 안에 맞추기\n");		//게임 룰을 출력해줌
	int guessNum, chance = 5;					//기회를 5번으로 설정
	
	do {
		printf("\n\n 숫자를 입력해주세요.\n");		//안내문
		scanf("%d", &guessNum);					 	//자신이 생각하는 수를 입력.
		chance--;									 // 입력할때마다 찬스값이 -1씩 낮아짐
		
		if(randNum == guessNum) {				 //랜덤수와 입력한 값이 똑같은지 비교
			printf("%d번 만에 정답!!", 5-chance);			//입력한 수와 랜덤수가 같은지 비교하고 똑같다면 (남은 찬스수)+번 만에 정답이라는 말을 출력
			break; }								 	   //조건에 만족하면 반복문을 종료
		if(chance == 0 ){ 							 //위 조건문을 만족하지 않으면서 찬스값이 0이되면 아래 조건문을 실행
			printf("5번의 기회를 모두 사용하셨습니다.\n 미션실패!!");		//5번의 기회를 모두 사용하셨습니다.\n미션실패!! 라는 문구를 출력
			break; }													 	//반복문을 종료
		(randNum > guessNum) ? printf("Up\n") : printf("Down\n");		 	//만약 랜덤수가 > 입력한 값이 크면 Up을 출력 작다면 Down을 출력
		printf("%d 번 의 기회가 남았습니다.", chance);					 //몇번의 기회가 남았는지 (찬스값)+번 의 기회가 남았습니다. 로 출력
	} while(1); 														 
	return 0;
}
