#include <iostream>

int main(int argc,char* argv[])
{
    char usage[] = "usage: trash <-d> filename\n";
    int ret = 0;
    char newfilename[256] = "";

    //パラメータなし
    if (argc <= 1) {
        printf(usage);
        return 1;
    }
    //-d指定あり
    else if (strcmp(argv[1], "-d") == 0) {
        if (argc <= 2) {
            printf(usage);
            return 2;
        }
        ret = remove(argv[2]);
        if (ret == 0)
            printf("ファイルを削除しました");
        else
            printf("ファイルを削除できませんでした");
    }
    //-d指定なし
    else {
        sprintf_s(newfilename, "%s.bak", argv[1]);
        ret = rename(argv[1], newfilename);
        if (ret == 0)
            printf(".bakを付けました\n");
        else
            printf("ファイル名を変更できませんでした\n");
    }
    return 0;
}
