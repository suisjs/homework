#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fptr;
    char ch;
    int count = 0;

    if (fopen_s(&fptr, "welcome.txt", "r") == 0) // �ϥ� fopen_s
    {
        while ((ch = getc(fptr)) != EOF)
        {
            printf("%c", ch);
            count++;
        }
        fclose(fptr);
        printf("\n�`�@��%d�Ӧr��\n", count);
    }
    else
    {
        printf("�ɮ׶}�ҥ���!!\n");
    }
    printf("�����N���~��...");
    getchar();
    return 0;
}
