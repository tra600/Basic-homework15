#include <stdio.h> 

int main(void)

{

	printf("請輸入現在的時間："); 

	int hour,minute; 

	scanf("%d%d",&hour,&minute); 

	if((hour==7 && minute>=30)||(hour>=8 && hour<=16)){ 

		printf("結果：現在是上學時間\n");

	}

	else{

		printf("結果：現在是放學時間\n");

	}

	return 0 ;


}
