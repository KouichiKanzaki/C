#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conf.h"

// �P�[�X 3
void edit() {
	int num = 0;
	int i;
	FILE *fp = NULL;
	PERSON p[20];
	
	// �f�[�^����
	printf("�X�VNo����\n");
	scanf("%d", &num);

	// �ǂݍ���
	if ((fp = fopen("file.dat", "rb")) == NULL) {
		exit(1);
	}
	int data_count = fread(p, sizeof(PERSON), MAX_MUN, fp);
	fclose(fp);

	// �X�V���͏���
	memset(&p[num-1],0,sizeof(p[num-1]));
	
	// �f�[�^����
	input(&p[num-1]);

	// ��������
	if ((fp = fopen("file.dat", "wb")) == NULL) {
		exit(1);
	}
	fwrite(&p, sizeof(PERSON), data_count, fp);
	fclose(fp);
}

