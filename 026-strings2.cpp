#include <cstdio>
#include <threads.h>
#include <iostream>

int main(void) {
    std::cout << "A: " << 'A' << std::endl;

    std::cout << "================================================" << std::endl;

    for (int i = 10; i >= 0; i--) {
        std::cout << "\r" << i << " second" << (i <= 1 ? "" : "s") << "...";
        std::fflush(stdout);
        struct timespec ts = {.tv_sec = 1, .tv_nsec = 0};
        thrd_sleep(&ts, NULL);
    }

    std::cout << "\rLift off!\n" << std::endl;

    std::cout << "================================================" << std::endl;

    std::cout << "Test? " <<  ('A' == 65) << std::endl;
    std::cout << "Test\?\?! " <<  ('A' == 65) << std::endl;
    std::cout << "Test\? " <<  ('A' == 65) << std::endl;
    std::cout << "Test\?\? " <<  ('A' == 65) << std::endl;

    std::cout << "================================================" << std::endl;

    std::cout << "A\102C" << std::endl;
    std::cout << "\xE2\x80\xA2 Bullet 1" << std::endl;
    std::cout << "\xE2\x80\xA2 Bullet 2" << std::endl;
    std::cout << "\xE2\x80\xA2 Bullet 3" << std::endl;
}