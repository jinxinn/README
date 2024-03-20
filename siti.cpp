#include <stdio.h>

int main() {
    float ji[] = {0.8, 1, 2, 3, 3, 3, 4, 5, 5, 5};
    int count = 9;

    for (int i = 0; i < count; i += 2) {
        for (int j = 10; j <= 180; j += 10) {
            float shuju = (float)ji[i]  / j;
            printf("注射剂量选择 %.1f/%.1fml, 注射次数选择 %d次, 单次注射剂量为: %.3f ml\n", (float)ji[i], ji[i + 1], j, shuju);
        }
    }

    return 0;
}
