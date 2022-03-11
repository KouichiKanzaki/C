#define MAX_MUN 4
#pragma warning(disable: 4996)

typedef struct _PERSON {
	char name[12];
	int age;
	char email[12];
	char reserve[4];
} PERSON;

void menu(void);
void read(void);
void add(void);
void edit(void);
void del(void);
void input(PERSON*);