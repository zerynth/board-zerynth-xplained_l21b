#ifndef __VBOARD__
#define __VBOARD__


#define VBOARD_SLEEP_MICRO_COMPENSATION	50

extern uint8_t __ramvectors__[];

#define CORTEX_FLASH_VTABLE 0x0000
#define CORTEX_VTOR_INIT ((uint32_t)(&__ramvectors__))
#define CORTEX_VECTOR_COUNT	28

#define CORTEX_ENABLE_WFI_IDLE          TRUE
#define CORTEX_SIMPLIFIED_PRIORITY		FALSE
#define CORTEX_USE_FPU					FALSE

#define PORT_PRIO_BITS 2
#define PORT_PRIO_MASK(n) ((n) << (8 - PORT_PRIO_BITS))


#define __SAML21J18B__     1
#if !defined(__ATSAML21J18B__)
#define __ATSAML21J18B__   1
#endif


#define RTOS_IRQ_PROLOGUE 1
//#define VHAL_SYSTEM_INIT 1

#endif
