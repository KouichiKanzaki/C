#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conf.h"

int main() {
	PERSON p;
	FILE *fp = NULL;

	int list_no = 0;
	while(1){
		// ���j���[�\��
		menu();
		printf("1����5����͂��Ă��������F");
		scanf("%d", &list_no);

		switch(list_no){
			case 1:
				read();
				break;
			case 2:
				add();
				break;
			case 3:
				edit();
				break;
			case 4:
				del();
				break;
			case 5:
				exit(1);
				break;
			default:
				printf("���̓~�X\n");
		}
	}
}
