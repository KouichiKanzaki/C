#include <iostream>
#include <stdio.h>

struct Data_tag {
    int a;
    double b;
    char c[4];
    struct Data_tag* d;
};

void print_data(const struct Data_tag* data)
{
    printf(".a == %d\n", data->a);
    printf(".b == %f\n", data->b);
    printf(".c == %s\n", data->c);
    printf(".d == %p\n", data->d);
}

int main(void)
{
    struct Data_tag s;

    // s のすべてのメンバに 0 を入れる

    print_data(&s);
}