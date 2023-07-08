#include <stdlib.h>
#include <stdio.h>
#include "myString.h"

//Function Searches for the first occurrence of the character c in the first n bytes of the string pointed to, by the argument str.
void *MyMemchr(const void *str, int c, unsigned int n)
{
    void *ptr=NULL;
    if(NULL==str)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        unsigned char *i=str;
        for(i;i<str+n;i++)
        {
            if(*i==c)
            {
                ptr=i;
                break;
            }
        }
    }
    return ptr;
}

//Function compares the first n bytes of memory area str1 and memory area str2.
int MyMemcmp(const void *str1, const void *str2, unsigned int n)
{
    int retVal=0;
    if(NULL==str1||NULL==str2)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        unsigned char *str1Temp=str1;
        unsigned char *str2Temp=str2;
        if(str1Temp==str2Temp)
        {
            retVal=0;
        }
        else
        {
        while(n--)
        {
            if(*str1Temp!=*str2Temp)
            {
                if(*str1Temp<*str2Temp)
                {
                    retVal=-1;
                    break;
                }
                else if(*str1Temp>*str2Temp)
                {
                    retVal=1;
                    break;
                }
            }
            else
            {
                str1Temp++;
                str2Temp++;
            }
        }
    }
    }
    return retVal;
}

//Function copies n characters from memory area src to memory area dest.
void *MyMemcpy(void *dest, const void * src, unsigned int n)
{
    if(NULL==dest||NULL==src)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        unsigned char *destTemp=dest;
        unsigned char *srcTemp;
        for(srcTemp=src;srcTemp<src+n;srcTemp++)
        {
            *destTemp++=*srcTemp;
        }
    }
    return dest;
}

//Function copies the character c to the first n characters of the string pointed to, by the argument str.
void *myMemset(void *str, int c, unsigned int n)
{
    if(NULL==str)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        unsigned char *i;
        for(i=str;i<str+n;i++)
        {
            *i=c;
        }
    }
    return str;
}

//Function appends the string pointed to by src to the end of the string pointed to by dest.
char *MyStrcat(char *dest, const char *src)
{

    if(NULL==src || NULL==dest)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        char *destTemp=dest+MyStrlen(dest);
        char *srcTemp=src;
        while(*srcTemp!='\0')
        {
            *destTemp=*srcTemp;
            destTemp++;
            srcTemp++;
        }
        *destTemp='\0';
    }
    return dest;
}

//Function appends the string pointed to by src to the end of the string pointed to by dest up to n characters long.
char *MyStrncat(char *dest, const char *src, unsigned int n)
{
     if(NULL==src || NULL==dest)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        char *destTemp=dest+MyStrlen(dest);
        char *srcTemp=src;
        for(srcTemp;srcTemp<src+n;srcTemp++)
        {
            *destTemp=*srcTemp;
            destTemp++;
        }
        *destTemp='\0';
    }
    return dest;
}

//Function searches for the first occurrence of the character c in the string pointed to by the argument str.
char *MyStrchr(const char *str, int c)
{
    void *ptr=NULL;
    if(NULL==str)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        unsigned char *temp=str;
        while(*temp!='\0')
        {
            if(*temp==c)
            {
                ptr=temp;
                break;
            }
            temp++;
        }
    }
    return ptr;
}

//Function compares the string pointed to, by str1 to the string pointed to by str2.
int MyStrcmp(const char *str1, const char *str2)
{
    int retVal=0;
    if(NULL==str1||NULL==str2)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        if(str1==str2)
        {
            return retVal;
        }
        else
        {
            int max=strlen(str1)>strlen(str2) ? strlen(str1):strlen(str2);
            char *str1Temp=str1;
            char *str2Temp=str2;
            while(max--)
            {
                if(*str1Temp!=*str2Temp)
                {
                    retVal=*str1Temp-*str2Temp;
                    break;
                }
                str1Temp++;
                str2Temp++;
            }
        }

    }
    return retVal;
}

int MyStrncmp(const char *str1, const char *str2, unsigned int n)
{
    {
    int retVal=0;
    if(NULL==str1||NULL==str2)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        if(str1==str2)
        {
            return retVal;
        }
        else
        {
            char *str1Temp=str1;
            char *str2Temp=str2;
            while(n--)
            {
                if(*str1Temp!=*str2Temp)
                {
                    retVal=*str1Temp-*str2Temp;
                    break;
                }
                str1Temp++;
                str2Temp++;
            }
        }

    }
    return retVal;
}

}

//Function copies the string pointed to, by src to dest.
char *MyStrcpy(char *dest, const char *src){
    if(NULL==dest||NULL==src)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        char *destTemp=dest;
        char *srcTemp;
        int size=strlen(src);
        for(srcTemp=src;srcTemp<src+size;srcTemp++)
        {
            *destTemp++=*srcTemp;
        }
    }
    return dest;
}

//Function copies up to n characters from the string pointed to, by src to dest.
char *MyStrncpy(char *dest, const char *src, unsigned int n)
{
    if(NULL==dest||NULL==src)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        char *destTemp=dest;
        char *srcTemp;
        for(srcTemp=src;srcTemp<src+n;srcTemp++)
        {
            *destTemp++=*srcTemp;
        }
    }
    return dest;
}

//Function calculates the length of the initial segment of str1, which consists entirely of characters not in str2.
unsigned int MyStrcspn(const char *str1, const char *str2)
{
    unsigned int retVal;
    if(NULL==str1||NULL==str2)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        unsigned int counter1;
        unsigned int counter2;
        unsigned int str1Size=MyStrlen(str1);
        unsigned int str2Size=MyStrlen(str2);
        retVal=str1Size;
        for(counter1=0;counter1<str2Size;counter1++)
        {
            for(counter2=0;counter2<str1Size;counter2++)
            {
                if(str2[counter1]==str1[counter2])
                {
                    retVal=retVal<=counter2 ? retVal:counter2;

                }
            }
        }
    }
    return retVal;
}

//Function computes the length of the string str up to, but not including the terminating null character.
unsigned int MyStrlen(const char *str)
{
    unsigned int size=0;
    if(NULL==str)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        char *temp=str;
        while(*temp!='\0')
        {
            size++;
            temp++;
        }
    }
    return size;
}

//Function finds the first character in the string str1 that matches any character specified in str2.
char *MyStrpbrk(const char *str1, const char *str2)
{
    char *retVal=NULL;
    if(NULL==str1||NULL==str2)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        unsigned int temp=MyStrcspn(str1,str2);
        if(temp==MyStrlen(str1))
        {
            retVal=NULL;
        }
        else
        {
            retVal=str1+temp;
        }
    }
    return retVal;
}

//Function searches for the last occurrence of the character c in the string pointed to, by the argument str.
char *MyStrrchr(const char *str, int c)
{
    char *retVal=NULL;
    if(NULL==str)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        char *temp=str;
        while(*temp!='\0')
        {
            if(*temp==c)
            {
                retVal=temp;
            }
            temp++;
        }
    }
    return retVal;
}

//Function calculates the length of the initial segment of str1, which consists entirely of characters not in str2.
unsigned int MyStrspn(const char *str1, const char *str2)
{
    unsigned int retVal=0;
    if(NULL==str1||NULL==str2)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        unsigned int counter1;
        unsigned int counter2;
        unsigned int str1Size=MyStrlen(str1);
        unsigned int str2Size=MyStrlen(str2);
        for(counter1=0;counter1<str1Size;counter1++)
        {
            for(counter2=0;counter2<=str2Size;counter2++)
            {
                if(counter2==str2Size)
                {
                    return retVal;
                }

                if(str1[counter1]==str2[counter2])
                {
                    retVal++;
                    break;
                }
            }
        }
    }
    return retVal;
}

//Function finds the first occurrence of the substring needle in the string haystack.
char *MyStrstr(const char *haystack, const char *needle)
{
    char *retVal=NULL;
    if(NULL==haystack||NULL==needle)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        char *haystackTemp=haystack;
        char *needleTemp=needle;
        unsigned int sizeHaystack=MyStrlen(haystack);
        for(haystackTemp;haystackTemp<haystack+sizeHaystack;haystackTemp++)
        {
            if(*needleTemp=='\0')
            {
                break;
            }
            if(*haystackTemp==needle[0])
            {
                char*temp=haystackTemp;
                while(temp!='\0')
                {
                    if(*needleTemp=='\0')
                    {
                        retVal=haystackTemp;
                        break;
                    }
                    if(*temp!=*needleTemp)
                    {
                        needleTemp=needle;
                        break;
                    }
                    else
                    {
                        temp++;
                        needleTemp++;
                    }
                }
            }
        }
    }
    return retVal;
}

//Function breaks string str into a series of tokens using the delimiter delim.
unsigned int isDelim(char c,char* str)
{
    while(*str!='\0')
    {
        if( c==*str)
        {
            return 1;
        }
        str++;
    }

    return 0;
}
char *MyStrtok(char *str, const char *delim)
{
    static char*temp;
    if(str==NULL)
    {
        str=temp;
    }
    if(str==NULL)
    {
        return NULL;
    }
    while(1)
    {
        if(isDelim(*str,delim))
        {
            str++;
            continue;
        }
        if(*str=='\0')
        {
            return NULL;
        }
        break;
    }
    char *retVal=str;
    while(1)
    {
        if(*str=='\0')
        {
            temp=str;
            return retVal;
        }
        if(isDelim(*str,delim))
        {
            *str='\0';
            temp=str+1;
            return retVal;
        }
        str++;
    }

}
//Function transforms the first n characters of the string src into current locale and place them in the string dest.
unsigned int MyStrxfrm(char *dest, const char *src, unsigned int n)
{
    if(NULL==dest||NULL==src)
    {
        printf("NULL POINTER\n");
    }
    else
    {
        char *destTemp=dest;
        char *srcTemp;
        for(srcTemp=src;srcTemp<src+n;srcTemp++)
        {
            *destTemp++=*srcTemp;
        }
    }
    return MyStrlen(src);
}




