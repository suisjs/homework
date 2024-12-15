#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE* fptr1 = NULL, * fptr2 = NULL;
    char ch;
    errno_t err1, err2;

    err1 = fopen_s(&fptr1, "welcome.txt", "r");
    err2 = fopen_s(&fptr2, "output.txt", "w");

    if (err1 == 0 && err2 == 0) 
    {
        while ((ch = getc(fptr1)) != EOF)
            putc(ch, fptr2);

        fclose(fptr1);
        fclose(fptr2);

        printf("�ɮ׫�������!!\n");
    }
    else
    {
        printf("�ɮ׶}�ҥ���!!\n");
    }

    printf("�����N���~��...");
    getchar(); 
    return 0;
}
