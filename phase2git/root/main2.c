#include <stdio.h>
#include <stdlib.h>
#include <linux/changeflag.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/time.h>
#include <sched.h>
#include <stdbool.h>


int main(int argc, char *argv[]) {
    int i =0;
    setuid(atoi(argv[1]));
    
    while(1){
        i =(i+1)%1000;
    }

    return 0;
}
