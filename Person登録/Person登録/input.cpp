#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "conf.h"

void input(PERSON* p) {
	printf("���O\n");
	scanf("%s", p->name);
	printf("�N��\n");
	scanf("%d", &p->age);
	printf("E���[���A�h���X\n");
	scanf("%s", p->email);
}