#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conf.h"

// �P�[�X 1
void read() {

	FILE *fp = NULL;
	PERSON p[MAX_MUN];
	int i;
	
	printf("%p\n", malloc(sizeof(p)));
	// �ǂݍ���
	if ((fp = fopen("file.dat", "rb")) == NULL) {
		exit(1);
	}
	int data_count = fread(p, sizeof(PERSON), MAX_MUN, fp);
	fclose(fp);

	// ���X�g�\������
	printf("[���X�g�\��]\n");
	printf("  No         ���O   �N��        E-mail\n");
	printf("-----------------------------------------\n");
	for(i=0;i<data_count;i++){
		printf("  %02d", i+1);
		printf("%12s  ", p[i].name);
		printf("%5d  ", p[i].age);
		printf("%12s\n", p[i].email);
	}
	
}