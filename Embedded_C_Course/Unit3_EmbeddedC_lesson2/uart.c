#include "uart.h"

void uartSendString(unsigned char * tx_PtrString)
{
	while(* tx_PtrString != '\0')
	{
		UART0DR = (unsigned int)(*tx_PtrString);
		
		tx_PtrString++;
	}
	
	return;
}