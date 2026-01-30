#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <assert.h>
#include <errno.h>

// Esses typedefs são convenientes para projetos de baixo nível
typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;
typedef unsigned long long int int64;

// Veja na Wikipedia o que cada um representa
struct s_icmp {
    int8 type;
    int8 code;
    int16 checksum;
    int8 data[];
};
typedef struct s_icmp icmp;

void zero (int8*, int16);

icmp * mkicmp(int8, int8, int8*, int16);

int main (int, char**);
