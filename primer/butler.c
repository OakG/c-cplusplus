#include <stdio.h>

void butler(void);

int main(void){
    printf("I'll summon the butler function.\n");
    butler();
    printf("Yes. Get me some tea, would you?\n");
}

void butler(void){
    printf("Did you summon me, sire?\n");
}

/* Shoddy ordering on purpose,
to show it works regardless. */
