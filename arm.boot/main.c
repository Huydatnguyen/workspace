#include "main.h"

/**
 * This is the C entry point, upcalled once the hardware has been setup properly
 * in assembly language, see the reset.s file.
 */

void _start() {
  int i = 0;
  int count = 0;
  uart_send_string(UART0, "\nQuit with \"C-a c\" and then type in \"quit\".\n");
  uart_send_string(UART0, "\nHello world!\n");

// declare variable 'rev' for storing the value received from UART0
  uint8_t rev;
  for (;;) {
    while (0 == uart_receive(UART0, &rev)) {
      if(rev == 13) // ENTER key pressed
      {
	 uart_send(UART0, '\r');
	 uart_send(UART0, '\n');
	 } else {
	 // print the character onto screen via UART0
	 uart_send(UART0, rev);
	 }
	 // reset rev to 0 before starting the new loop
	 rev = 0;
      }
    wfi();
   }
}
