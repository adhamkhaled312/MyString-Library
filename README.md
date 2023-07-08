# MyString Library
This repo was made during my practicing for programming with C.
This repo is an implentation for the functions in string.h library.
You can just download is and inlcude myString.h in your code and use it, if you want any details of any function implementation you can find it in myString.c file.
# Functions included
void *MyMemchr(const void *str, int c, unsigned int n);
int MyMemcmp(const void *str1, const void *str2, unsigned int n);
void *MyMemcpy(void *dest, const void * src, unsigned int n);
void *myMemset(void *str, int c, unsigned int n);
char *MyStrcat(char *dest, const char *src);
char *MyStrncat(char *dest, const char *src, unsigned int n);
char *MyStrchr(const char *str, int c);
int MyStrcmp(const char *str1, const char *str2);
int MyStrncmp(const char *str1, const char *str2, unsigned int n);
char *MyStrcpy(char *dest, const char *src);
char *MyStrncpy(char *dest, const char *src, unsigned int n);
unsigned int MyStrcspn(const char *str1, const char *str2);
unsigned int MyStrlen(const char *str);
char *MyStrpbrk(const char *str1, const char *str2);
char *MyStrrchr(const char *str, int c);
unsigned int MyStrspn(const char *str1, const char *str2);
char *MyStrstr(const char *haystack, const char *needle);
char *MyStrtok(char *str, const char *delim);
unsigned int MyStrxfrm(char *dest, const char *src, unsigned int n);
