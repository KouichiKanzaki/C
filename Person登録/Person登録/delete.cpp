#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conf.h"

// ケース 4
void del() {
	FILE *fp = NULL;
	PERSON p[MAX_MUN];
	int num = 0;
	int i;

	// データ入力
	printf("削除No入力\n");
	scanf("%d", &num);

	// 読み込み
	if ((fp = fopen("file.dat", "rb")) == NULL) {
		exit(1);
	}
	int data_count = fread(p, sizeof(PERSON), MAX_MUN, fp);
	fclose(fp);

	// データ削除
	data_count = data_count - 1;
	memcpy(&p[num-1], &p[num], sizeof(p[num]) * (data_count - num + 1));

	// 書き込み
	if ((fp = fopen("file.dat", "wb")) == NULL) {
		exit(1);
	}
	fwrite(&p, sizeof(PERSON), data_count, fp);
	fclose(fp);
}

