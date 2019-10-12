#include "include/vid.h"

void kmain(void)
{
    const char *str    = "my again kernel v.0.0.1";
    char       *vidptr = (char*)VID_START;
    unsigned int i = 0, j = 0;
    while(j<VID_LEN){
        vidptr[j] = ' ';
        vidptr[j+1] = VID_BLACK;
        j+=2;
    }
    j = 0;
    while(str[j] != '\0'){
        vidptr[i] = str[j];
        vidptr[i+1] = (VID_BRIGHT | VID_GREEN | VID_GREEN_ | VID_BLINK);
        j+=1; i+=2;
    }
    return;
}
