#include <stdio.h> 

int main(void)

{

	printf("�п�J�{�b���ɶ��G"); 

	int hour,minute; 

	scanf("%d%d",&hour,&minute); 

	if((hour==7 && minute>=30)||(hour>=8 && hour<=16)){ 

		printf("���G�G�{�b�O�W�Ǯɶ�\n");

	}

	else{

		printf("���G�G�{�b�O��Ǯɶ�\n");

	}

	return 0 ;


}
