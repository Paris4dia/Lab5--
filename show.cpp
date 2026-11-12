#include <cstdio>
using namespace std;

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
    printf("Вкажіть файл: ./program /шлях/до/файлу\n");
    return 1;
    }
    FILE *f = fopen(argv[1], "r");
    if (f == NULL) {
        printf("Не можу відкрити файл\n");
        return 1;
    }
    int c;
    while ((c = fgetc(f)) != EOF) {
        fputc(c, stdout);
    }
    fclose(f);
    return 0;
}
