#include <iostream>
using namespace std;

int stringLength(char *str){
    int len = 0;
    while (*str != '\0'){
        len++;
        str++;
    }
    return len;
}

int main(){
    char str[1000] = "Hello, World!";
    cout << stringLength(str);

    return 0;
}