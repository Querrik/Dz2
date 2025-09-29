#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE, "");
    // Исходные данные
    double H = 5000.0;
    double Vc = 250.0;
    double Vr = 400.0;

    // Расчеты
    double L = Vc * (H / sqrt(Vr * Vr - Vc * Vc));
    double S = sqrt(L * L + H * H);

    // Вывод 
    printf("===============================================\n");
    printf("ПАРАМЕТРЫ СИСТЕМЫ:\n");
    printf("===============================================\n");
    printf("Высота H:                    %12.2f м\n", H);
    printf("Скорость самолета Vc:        %12.2f м/с\n", Vc);
    printf("Скорость ракеты Vr:          %12.2f м/с\n", Vr);
    printf("===============================================\n");
    printf("РЕЗУЛЬТАТЫ РАСЧЕТА:\n");
    printf("===============================================\n");
    printf("Горизонтальная дальность L:  %12.2f м\n", L);
    printf("Дальность поражения S:       %12.2f м\n", S);
    return 0;
}