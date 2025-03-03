int add(int argc, int argv[]) {
    int sum = 0;
    for (int i = 0; i < argc; i++) {
        sum += argv[i];
    }
    return sum;
}