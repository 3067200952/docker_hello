#include<stdio.h>

int main()
{
    FILE *fp;
    char ch;

    printf("新文件内容\n");
    if((fp = fopen("/data/data.txt","r")) == NULL)
    {
        printf("文件打开失败！");
        return 0;
    }
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}
