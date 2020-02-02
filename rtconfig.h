#ifndef RT_CONFIG_H__
#define RT_CONFIG_H__

/* Automatically generated file; DO NOT EDIT. */
/* RootMenu */

/* RT-Thread Kernel */

/* Base Configuration */

#define RT_NAME_MAX 8
#define RT_ALIGN_SIZE 4
#define RT_THREAD_PRIORITY_MAX 8
#define RT_TICK_PER_SECOND 1000
#define RT_USING_TIMER_SOFT
#define RT_TIMER_THREAD_PRIO 4
#define RT_TIMER_THREAD_STACK_SIZE 512
#define RT_USING_COMPONENTS_INIT
#define RT_USING_USER_MAIN
#define RT_MAIN_THREAD_STACK_SIZE 1024

/* Debug Configuration */

#define RT_DEBUG

/* InterThread Communication */

#define RT_USING_SEMAPHORE

/* Memory Management */

#define RT_USING_MEMPOOL
#define RT_USING_HEAP
#define RT_USING_SMALL_MEM
#define RT_USING_TINY_SIZE

/* FinSH Shell */

#define RT_USING_CONSOLE
#define RT_CONSOLEBUF_SIZE 128

#endif
