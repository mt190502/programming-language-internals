#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <threads.h>

#define THREAD_COUNT 4

int run(void* arg) {
    int p = *(int*)arg;
    std::free(arg);
    std::cout << "THREAD: Hello from thread! p = " << p << std::endl;
    return p;
}

int main(void) {
    thrd_t thread[THREAD_COUNT];

    std::cout << "MAIN: Launching " << THREAD_COUNT << " threads..." << std::endl;
    for (int i = 0; i < THREAD_COUNT; i++) {
        int* arg = (int*)malloc(sizeof *arg);
        *arg = i;
        thrd_create(thread + i, run, arg);
    }

    std::cout << "MAIN: Waiting for threads to finish..." << std::endl;
    for (int i = 0; i < THREAD_COUNT; i++) {
        int result;
        thrd_join(thread[i], &result);
        std::cout << "MAIN: Thread " << i << " returned " << result << std::endl;
    }

    return 0;
}