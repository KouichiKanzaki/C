#include<stdio.h>
#pragma warning(disable: 4996)

int main(void) 
{ 
	FILE *file;
	int buf = 100;
	file = fopen("test.dat", "wb");
	fwrite(&buf,sizeof(buf),1,file);
	fclose(file);
	return 0; 
}

