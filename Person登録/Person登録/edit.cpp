#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conf.h"

// ケース 3
void edit() {
	int num = 0;
	int i;
	FILE *fp = NULL;
	PERSON p[20];
	
	// データ入力
	printf("更新No入力\n");
	scanf("%d", &num);

	// 読み込み
	if ((fp = fopen("file.dat", "rb")) == NULL) {
		exit(1);
	}
	int data_count = fread(p, sizeof(PERSON), MAX_MUN, fp);
	fclose(fp);

	// 更新入力処理
	memset(&p[num-1],0,sizeof(p[num-1]));
	
	// データ入力
	input(&p[num-1]);

	// 書き込み
	if ((fp = fopen("file.dat", "wb")) == NULL) {
		exit(1);
	}
	fwrite(&p, sizeof(PERSON), data_count, fp);
	fclose(fp);
}

