#include "ping.h"

void zero(int8* str, int16 size) {
    int8* p;
    int16 n;
    for (n = 0, p = str; n < size; n++, p++) {
        *p = 0;
    }

    return;
}

icmp *mkicmp(int8 type, int8 code, int8* data, int16 size) {
    int16 n;
    icmp *p;
    if (!data || !size ) {
        return (icmp*) 0;
    }

    n = sizeof(struct s_icmp) + size;
    p = (icmp *)malloc((int)n);
    // Para evitar que malloc falhe / que não tenha memória
    assert(p);
    zero((int8*)p, n);
    
    p->type = type;
    p->code = code;
    p->checksum = 

}

int main (int argc, char* argv[]) {

    return 0;
}
