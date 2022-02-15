#include "core.h"
void kernel_main(void) 
{
	terminal_clearscreen();
    terminal_setcolor(TERMINAL_COLOR_WHITE | TERMINAL_COLOR_BLACK);
	terminal_writestr("Welcome to GregOS\n");
    //terminal_input("GregOS > ");
}