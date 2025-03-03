#include <cstdio>
#include <fstream>
#include <iostream>

int main(void) {
    // file read in c
    FILE* file = fopen("999-attachment.txt", "r+");
    if (!file) {
        std::printf("File open failed\n");
        return 1;
    }
 
    std::cout << "================================================" << std::endl;

    int first_char = std::fgetc(file);
    std::printf("First char: %c\n", first_char);

    std::cout << "================================================" << std::endl;

    int lines = 1;
    int next_char = std::fgetc(file);
    while (next_char != EOF) {
        if (next_char == '\n') {
            lines++;
        }
        std::printf("%c", next_char);
        next_char = std::fgetc(file);
    }
    std::printf("\n-> Lines: %d\n", lines);
    std::fclose(file);

    std::cout << "================================================" << std::endl;

    // file read in c++
    std::ifstream file_cpp("999-attachment.txt");
    if (!file_cpp.is_open()) {
        std::cerr << "File open failed" << std::endl;
        return 1;
    }
    char first_c;
    file_cpp.get(first_c);
    std::cout << "First char: " << first_c << std::endl;

    std::cout << "================================================" << std::endl;

    std::string line;
    int line_count = 0;
    while (std::getline(file_cpp, line)) {
        std::cout << line << std::endl;
        line_count++;
    }
    std::cout << "-> Lines: " << line_count << std::endl;
    file_cpp.close();

    std::cout << "================================================" << std::endl;

    // read file with c
    FILE* file2 = std::fopen("999-employees.txt", "r+");
    if (!file2) {
        std::perror("File open failed");
        return 1;
    }
    char name[10], job[10];
    int age;
    float salary;
    while (std::fscanf(file2, "%s %d %f %s", name, &age, &salary, job) != EOF) {
        printf("Name: %s\nAge: %d\nSalary: %.2f\nJob: %s\n=====\n", name, age, salary, job);
    }
    std::fclose(file2);
    
    std::cout << "================================================" << std::endl;

    // read file with c++
    std::ifstream file2_cpp("999-employees.txt");
    if (!file2_cpp.is_open()) {
        std::cerr << "File open failed" << std::endl;
        return 1;
    }
    std::string in_name, in_job;
    int in_age;
    float in_salary;
    while (file2_cpp >> in_name >> in_age >> in_salary >> in_job) {
        std::cout << "Name: " << in_name << "\nAge: " << in_age << "\nSalary: " << in_salary << "\nJob: " << in_job << "\n=====\n";
    }
    file2_cpp.close();

    std::cout << "================================================" << std::endl;
    
    // write file with c
    FILE* file3 = std::fopen("temp.txt", "w+");
    std::fputc('A', file3);
    std::fputc('\n', file3);
    std::fputc('B', file3);
    std::fprintf(file3, "\n%d\n", 10);
    std::fputs("Hello World!", file3);
    std::fclose(file3);
   
    // write file with c++
    std::ofstream file3_cpp("temp.txt");
    if (!file3_cpp.is_open()) {
        std::cerr << "File open failed" << std::endl;
        return 1;
    }
    file3_cpp << 'A' << '\n' << 'B' << '\n' << 10 << '\n' << "Hello World!";
    file3_cpp.close();
}