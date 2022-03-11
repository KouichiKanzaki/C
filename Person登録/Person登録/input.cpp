#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conf.h"

void input(PERSON* p) {
	printf("名前\n");
	scanf("%s", p->name);
	printf("年齢\n");
	scanf("%d", &p->age);
	printf("Eメールアドレス\n");
	scanf("%s", p->email);
}