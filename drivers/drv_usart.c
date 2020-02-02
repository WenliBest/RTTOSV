#include "drv_usart.h"

 int usart1_init(void){
	gd_eval_com_init(EVAL_COM0);
	return 0;
}
 INIT_BOARD_EXPORT( usart1_init);
 void rt_hw_console_output(const char *str){
	 printf(str);
 }
