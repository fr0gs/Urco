#include "include/idt.h"

void 
idt_set_gate(unsigned char num, unsigned long base, unsigned short sel, unsigned char flags)
{
	/* We'll leave you to try and code this function: take the
   *  argument 'base' and split it up into a high and low 16-bits,
	 *  storing them in idt[num].base_hi and base_lo. The rest of the
	 *  fields that you must set in idt[num] are fairly self-
	 *  explanatory when it comes to setup */
}

/* Installs the IDT */
void 
idt_install()
{
	/* Sets the special IDT pointer up, just like in 'gdt.c' */
	idtp.limit = (sizeof (struct idt_entry) * 256) - 1;
	idtp.base = &idt;

	/* Clear out the entire IDT, initializing it to zeros */
	memset(&idt, 0, sizeof(struct idt_entry) * 256);

	/* Add any new ISRs to the IDT here using idt_set_gate */

	/* Points the processor's internal register to the new IDT */
	idt_load();
}
		
