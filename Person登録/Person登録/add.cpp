#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conf.h"

// �P�[�X 2
void add() {
	FILE *fp = NULL;
	PERSON p;
	int i = 0;
	int num = 0;
	memset(&p,0,sizeof(p));

	// �f�[�^����
	input(&p);

	// ��������
	if ((fp = fopen("file.dat", "ab")) == NULL) {
		exit(1);
	}
	fwrite(&p, sizeof(PERSON), 1, fp);
	fclose(fp);

}

