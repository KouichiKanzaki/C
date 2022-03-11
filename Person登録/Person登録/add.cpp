#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conf.h"

// ケース 2
void add() {
	FILE *fp = NULL;
	PERSON p;
	int i = 0;
	int num = 0;
	memset(&p,0,sizeof(p));

	// データ入力
	input(&p);

	// 書き込み
	if ((fp = fopen("file.dat", "ab")) == NULL) {
		exit(1);
	}
	fwrite(&p, sizeof(PERSON), 1, fp);
	fclose(fp);

}

