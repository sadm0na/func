#include "Str_easy.h"

std::string itc_hello_str(std::string name) {
    return "Hello, " + name;
}

long long itc_len(std::string str) {
    return str.size();
}

void itc_print_copy_str(std::string str, int number) {
    std::string copy = str;
    number -= 1;
    while (number != 0) {
        str.append(copy);
        number -= 1;
    }
    std::cout<<str;
}

void itc_first_end_three(std::string str) {
    std::string str2;
    if (str.size() > 5) {
        std::cout<<str.substr(0, 3)<<str.substr(str.size() - 3);
    }
    else {
        std::cout<<str2.append(str.size(), str[0]);
    }
}

int itc_count_char_in_str(char ch, std::string str) {
    return 0;
}

std::string itc_even_place(std::string str) {
    return "aboba";
}

double itc_percent_lower_uppercase(std::string str) {
    return 0.5;
}

 std::string itc_reverse_str(std::string str) {
    return "bob";
 }

 std::string itc_slice_str(std::string str, int start, int end) {
    return "bib";
 }

 bool itc_equal_reverse(std::string str) {
    return false;
 }

 std::string itc_cmp_str(std::string str1, std::string str2, int num) {
    return "lil";
 }

 int itc_find_str(std::string str1, std::string str2) {
    return 0;
 }

 std::string itc_three_str(std::string str1, std::string str2, std::string str3) {
    return "lol";
 }

int itc_max_char_on_end(std::string str) {
    return 0;
}



