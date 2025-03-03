#include <cstring>
#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    char* duplicated = strdup("023-outside-env-but-argv0-is-modified");
    if (!duplicated) {
        std::cout << "Memory allocation failed" << std::endl;
        return EXIT_FAILURE;
    }
    argv[0] = duplicated;
    
    if (!argv[1]) {
        std::cout << "argument is not provided" << std::endl;
        return EXIT_FAILURE;
    }

    for (int i = 0; i < argc; i++) {
        std::cout << "argv[" << i << "]: " << argv[i] << std::endl;
    }

    std::cout << "================================================" << std::endl;

    const char* env = std::getenv("XDG_SESSION_TYPE");
    if (!env) {
        std::cout << "XDG_SESSION_TYPE is not set" << std::endl;
        return EXIT_FAILURE;
    }
    std::cout << "XDG_SESSION_TYPE: " << env << std::endl;

    std::cout << "================================================" << std::endl;

    extern char** environ;

    for (int i = 0; environ[i] != NULL; i++) {
        std::cout << "environ[" << i << "]: " << environ[i] << std::endl;

    }

    return 0;
}