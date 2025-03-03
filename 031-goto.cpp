#include <iostream>

int main(void) {
    for (int i = 0; i <= 10; i++) {
        printf("%d\n", i);
        if (i == 5) {
            goto end;
        }
    }

end:
    std::cout << "i is " << 5 << std::endl;
    return 0;
}