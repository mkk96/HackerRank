#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the encryption function below.

// Please either make the string static or allocate on the heap. For example,
// static char str[] = "hello world";
// return str;
//
// OR
//
// char* str = "hello world";
// return str;
//
char* encryption(char* s) {
    
    int len=strlen(s);
    int count=0;
    char *string=(char *)malloc(sizeof(char)*len);
    for(int i=0;i<len;i++)
    {
        if(s[i]!=' ')
        {
            string[count++]=s[i];
        }
    }
    int row=sqrt(count);
    int column=(sqrt(count)-(int)sqrt(count)>0)?(sqrt(count)+1):sqrt(count);
    int x=row,y=column,i,j;
    int min=row*column;
    if(x*y<count)
    {
        if(x<=y)
        {
            x=x+1;
        }
        else
        {
            y=y+1;
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            if(i*j>=count&&min>i*j)
            {
                x=i;
                y=j;
            }
        }
    }
    char a[x][y];
    count=0;
    for(i=0;i<x;i++)
    {
        for(j=0;j<y;j++)
        {
            a[i][j]=string[count++];
        }
    }
    char *b=(char *)malloc(sizeof(char)*100);
    count=0;
    for(i=0;i<y;i++)
    {
        for(j=0;j<x;j++)
        {
            printf("%c",a[j][i]);
            if(a[j][i]!='\0')
                b[count++]=a[j][i];
        }
        printf("\n");
        b[count++]=' ';
    }
    b[count]='\0';
    //printf("%s",b);
return b;
}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* s = readline();

    char* result = encryption(s);

    fprintf(fptr, "%s\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
