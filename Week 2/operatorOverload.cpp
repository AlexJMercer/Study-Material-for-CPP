#include <iostream>
#include <cstring>          // Not string.h as it already supports string join with + operator

using namespace std;

typedef struct _String
{
    char *str;
} String;

String operator+(const String &s1, const String &s2)
{
    String s;
    s.str = (char*) malloc(strlen(s1.str) + strlen(s2.str) + 1);

    strcpy(s.str, s1.str);
    strcat(s.str, s2.str);

    return s;
}

int main()
{
    String s1, s2, s3;

    s1.str = strdup("Hello");
    s2.str = strdup("World");

    s3 = s1 + s2;

    cout << s3.str << endl;
    return 0;
}