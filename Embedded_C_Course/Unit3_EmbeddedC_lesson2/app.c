#include "uart.h"

unsigned char stringBuffer[50] = "Learn-in-depth : Muhammad";

const int x_roData = 5;

static int x_bss;

void main(void)
{
	uartSendString(stringBuffer);
	return;
}