#include <iostream>
using namespace std;
int countCharacter(string &str, char ch)
{
    int count = 0;
    int i = 0;
    while (str[i] != '\0')
    {
        if(str[i]==ch)
        {
            count++;
        }
        i++;
    }
    return count;   
}

int main(){
    string str = "Hello, World!";
    char ch = 'l';
    cout << countCharacter(str, ch);

    return 0;
}