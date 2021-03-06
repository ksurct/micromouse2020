/* 
 * main.c
 */

#include <asf.h>

#include "robot/robot_setup.h"
#include "robot/robot.h"

robot_t robot;

// Function Declarations
void systick_init(void);

int main(void)
{
  // ASF system and board initialization
  system_init();

  /* Insert application code here, after the board has been initialized. */
  printf("System Initialized\r\n");

  init_robot(&robot);

#ifdef CONTINUOUS_MODE
  while (1)
  {
    run_robot_loop(&robot);
  }
#else
  systick_init();
#endif
}

void systick_init(void)
{
  // Configure SysTick to trigger an ISR every millisecond using a 48MHz CPU Clock
  SysTick->CTRL = 0;                 // Disable SysTick
  SysTick->LOAD = 47999UL;           // Set reload register for 1mS interrupts
  NVIC_SetPriority(SysTick_IRQn, 3); // Set interrupt priority to least urgency
  SysTick->VAL = 0;                  // Reset the SysTick counter value
  SysTick->CTRL = 0x00000007;        // Enable SysTick, Enable SysTick Exceptions, Use CPU Clock
  NVIC_EnableIRQ(SysTick_IRQn);      // Enable SysTick Interrupt
}

void SysTick_Handler(void)
{
  run_robot_loop(&robot);
}
