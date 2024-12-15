#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fptr;
    char ch;
    int count = 0;

    if (fopen_s(&fptr, "welcome.txt", "r") == 0) // 使用 fopen_s
    {
        while ((ch = getc(fptr)) != EOF)
        {
            printf("%c", ch);
            count++;
        }
        fclose(fptr);
        printf("\n總共有%d個字元\n", count);
    }
    else
    {
        printf("檔案開啟失敗!!\n");
    }
    printf("按任意鍵繼續...");
    getchar();
    return 0;
}
