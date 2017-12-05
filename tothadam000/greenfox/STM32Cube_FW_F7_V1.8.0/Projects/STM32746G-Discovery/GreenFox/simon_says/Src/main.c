/**
 ******************************************************************************
 * @file    Templates/Src/main.c
 * @author  MCD Application Team
 * @version V1.0.3
 * @date    22-April-2016
 * @brief   STM32F7xx HAL API Template project
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; COPYRIGHT(c) 2016 STMicroelectronics</center></h2>
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include <string.h>

/** @addtogroup STM32F7xx_HAL_Examples
 * @{
 */

/** @addtogroup Templates
 * @{
 */
/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/
UART_HandleTypeDef uart_handle;

/* Private function prototypes -----------------------------------------------*/

#ifdef __GNUC__
/* With GCC/RAISONANCE, small printf (option LD Linker->Libraries->Small printf
 set to 'Yes') calls __io_putchar() */
#define PUTCHAR_PROTOTYPE int __io_putchar(int ch)
#else
#define PUTCHAR_PROTOTYPE int fputc(int ch, FILE *f)
#endif /* __GNUC__ */

static void SystemClock_Config(void);
static void Error_Handler(void);
static void MPU_Config(void);
static void CPU_CACHE_Enable(void);

/* Private functions ---------------------------------------------------------*/

/**
 * @brief  Main program
 * @param  None
 * @retval None
 */
void end_blinking();

int round;
uint32_t rnd_num;
RNG_HandleTypeDef rnd;
int main(void) {
	/* This project template calls firstly two functions in order to configure MPU feature
	 and to enable the CPU Cache, respectively MPU_Config() and CPU_CACHE_Enable().
	 These functions are provided as template implementation that User may integrate
	 in his application, to enhance the performance in case of use of AXI interface
	 with several masters. */

	/* Configure the MPU attributes as Write Through */
	MPU_Config();

	/* Enable the CPU Cache */
	CPU_CACHE_Enable();

	/* STM32F7xx HAL library initialization:
	 - Configure the Flash ART accelerator on ITCM interface
	 - Configure the Systick to generate an interrupt each 1 msec
	 - Set NVIC Group Priority to 4
	 - Low Level Initialization
	 */
	HAL_Init();

	/* Configure the System clock to have a frequency of 216 MHz */
	SystemClock_Config();

	uart_handle.Init.BaudRate   = 115200;
	uart_handle.Init.WordLength = UART_WORDLENGTH_8B;
	uart_handle.Init.StopBits   = UART_STOPBITS_1;
	uart_handle.Init.Parity     = UART_PARITY_NONE;
	uart_handle.Init.HwFlowCtl  = UART_HWCONTROL_NONE;
	uart_handle.Init.Mode       = UART_MODE_TX_RX;

	  BSP_COM_Init(COM1, &uart_handle);
	/* Add your application code here
	 */
	__HAL_RCC_GPIOF_CLK_ENABLE();
	__HAL_RCC_GPIOC_CLK_ENABLE();
	__HAL_RCC_GPIOG_CLK_ENABLE();
	__HAL_RCC_GPIOB_CLK_ENABLE();    // we need to enable the GPIOF port's clock first

	GPIO_InitTypeDef red;            // create a config structure
	red.Pin = GPIO_PIN_6;            // this is about PIN A5
	red.Mode = GPIO_MODE_OUTPUT_PP; // Configure as output with push-up-down enabled
	red.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
	red.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

	HAL_GPIO_Init(GPIOF, &red);    // initialize the pin on GPIOF port with HAL;

	GPIO_InitTypeDef green;            // create a config structure
	green.Pin = GPIO_PIN_7;            // this is about PIN A4
	green.Mode = GPIO_MODE_OUTPUT_PP; // Configure as output with push-up-down enabled
	green.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
	green.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

	HAL_GPIO_Init(GPIOF, &green);    // initialize the pin on GPIOA port with HAL;

	GPIO_InitTypeDef yellow;            // create a config structure
	yellow.Pin = GPIO_PIN_8;            // this is about PIN A3
	yellow.Mode = GPIO_MODE_OUTPUT_PP; // Configure as output with push-up-down enabled
	yellow.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
	yellow.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

	HAL_GPIO_Init(GPIOF, &yellow);    // initialize the pin on GPIOF port with HAL;

	GPIO_InitTypeDef blue;            // create a config structure
	blue.Pin = GPIO_PIN_9;            // this is about PIN A2
	blue.Mode = GPIO_MODE_OUTPUT_PP; // Configure as output with push-up-down enabled
	blue.Pull = GPIO_PULLDOWN;        // the push-up-down should work as pulldown
	blue.Speed = GPIO_SPEED_HIGH;     // we need a high-speed output

	HAL_GPIO_Init(GPIOF, &blue);    // initialize the pin on GPIOF port with HAL;

	GPIO_InitTypeDef button_red;		// create a config structure
	button_red.Pin = GPIO_PIN_6;			// this is about PIN C6
	button_red.Mode = GPIO_MODE_INPUT;
	button_red.Pull = GPIO_PULLUP;
	button_red.Speed = GPIO_SPEED_HIGH;

	HAL_GPIO_Init(GPIOC, &button_red);		// initialize the pin on GPIOC port with HAL;

	GPIO_InitTypeDef button_green;			// create a config structure
	button_green.Pin = GPIO_PIN_6;			// this is about PIN G6
	button_green.Mode = GPIO_MODE_INPUT;
	button_green.Pull = GPIO_PULLUP;
	button_green.Speed = GPIO_SPEED_HIGH;

	HAL_GPIO_Init(GPIOG, &button_green);		// initialize the pin on GPIOG port with HAL;

	GPIO_InitTypeDef button_yellow;			// create a config structure
	button_yellow.Pin = GPIO_PIN_4;			// this is about PIN B4
	button_yellow.Mode = GPIO_MODE_INPUT;
	button_yellow.Pull = GPIO_PULLUP;
	button_yellow.Speed = GPIO_SPEED_HIGH;

	HAL_GPIO_Init(GPIOB, &button_yellow);		// initialize the pin on GPIOB port with HAL;

	GPIO_InitTypeDef button_blue;			// create a config structure
	button_blue.Pin = GPIO_PIN_7;			// this is about PIN G7
	button_blue.Mode = GPIO_MODE_INPUT;
	button_blue.Pull = GPIO_PULLUP;
	button_blue.Speed = GPIO_SPEED_HIGH;

	HAL_GPIO_Init(GPIOG, &button_blue);		// initialize the pin on GPIOG port with HAL;

	int sequence [16];
	int user_seq [16];
	uint32_t round = 1;
	while (1){
	rnd.Instance = RNG;
	HAL_RNG_Init(&rnd);

	 for (int j = 0; j < 18 ; j++){
			for (int i = 0; i < j; i ++){
				rnd_num = HAL_RNG_GetRandomNumber(&rnd) % 4 + 1;
				sequence[j] = rnd_num;
				if (sequence[i] == 1){
					HAL_GPIO_WritePin(GPIOF, GPIO_PIN_6, GPIO_PIN_SET);
					HAL_Delay(200);
					HAL_GPIO_WritePin(GPIOF, GPIO_PIN_6, GPIO_PIN_RESET);
					HAL_Delay(500);
				}else if (sequence[i] == 2){
					HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_SET);
					HAL_Delay(200);
					HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_RESET);
					HAL_Delay(500);
				}else if (sequence[i] == 3){
					HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_SET);
					HAL_Delay(200);
					HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);
					HAL_Delay(500);
				}else if (sequence[i] == 4){
					HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);
					HAL_Delay(200);
					HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);
					HAL_Delay(500);
				}
			}HAL_Delay(3000);

				if (round == 1 && sequence[0] == user_seq[0]){
						continue;
				} else {
						end_blinking();
					}
						break;
				if (round == 2 && sequence[1] == user_seq[1]){
						continue;
				} else {
					end_blinking();
				}
						break;
				if (round == 3 && sequence[1][2][3] == user_seq[1][2][3]){
						continue;
				} else {
					end_blinking();
				}
						break;
				if (round == 4 && sequence[1][2][3][4]==  user_seq[1][2][3][4]){
						continue;
				} else {
					end_blinking();
				}
						break;
				if (round == 5 && sequence[1][2][3][4][5] == user_seq[1][2][3][4][5]){
						continue;
				}else{
					end_blinking();
				}
						break;
				if (round == 17) {
					end_blinking();

					break;
				}
				round++;
		}
		HAL_Delay(4000);
	}
}
void end_blinking(){
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_6, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_SET);
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_SET);
	HAL_Delay(5000);
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_6, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_7, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_8, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(GPIOF, GPIO_PIN_9, GPIO_PIN_RESET);

}

	/**
	 * @brief  Retargets the C library printf function to the USART.
	 * @param  None
	 * @retval None
	 */
	PUTCHAR_PROTOTYPE {
		/* Place your implementation of fputc here */
		/* e.g. write a character to the EVAL_COM1 and Loop until the end of transmission */
		HAL_UART_Transmit(&uart_handle, (uint8_t *) &ch, 1, 0xFFFF);

		return ch;
	}

	/**
	 * @brief  System Clock Configuration
	 *         The system Clock is configured as follow :
	 *            System Clock source            = PLL (HSE)
	 *            SYSCLK(Hz)                     = 216000000
	 *            HCLK(Hz)                       = 216000000
	 *            AHB Prescaler                  = 1
	 *            APB1 Prescaler                 = 4
	 *            APB2 Prescaler                 = 2
	 *            HSE Frequency(Hz)              = 25000000
	 *            PLL_M                          = 25
	 *            PLL_N                          = 432
	 *            PLL_P                          = 2
	 *            PLL_Q                          = 9
	 *            VDD(V)                         = 3.3
	 *            Main regulator output voltage  = Scale1 mode
	 *            Flash Latency(WS)              = 7
	 * @param  None
	 * @retval None
	 */
	static void SystemClock_Config(void) {
		RCC_ClkInitTypeDef RCC_ClkInitStruct;
		RCC_OscInitTypeDef RCC_OscInitStruct;

		/* Enable HSE Oscillator and activate PLL with HSE as source */
		RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
		RCC_OscInitStruct.HSEState = RCC_HSE_ON;
		RCC_OscInitStruct.HSIState = RCC_HSI_OFF;
		RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
		RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
		RCC_OscInitStruct.PLL.PLLM = 25;
		RCC_OscInitStruct.PLL.PLLN = 432;
		RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
		RCC_OscInitStruct.PLL.PLLQ = 9;
		if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK) {
			Error_Handler();
		}

		/* activate the OverDrive to reach the 216 Mhz Frequency */
		if (HAL_PWREx_EnableOverDrive() != HAL_OK) {
			Error_Handler();
		}

		/* Select PLL as system clock source and configure the HCLK, PCLK1 and PCLK2
		 clocks dividers */
		RCC_ClkInitStruct.ClockType = (RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_HCLK
				| RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2);
		RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
		RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
		RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
		RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
		if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_7)
				!= HAL_OK) {
			Error_Handler();
		}
	}

	/**
	 * @brief  This function is executed in case of error occurrence.
	 * @param  None
	 * @retval None
	 */
	static void Error_Handler(void) {
		/* User may add here some code to deal with this error */
		while (1) {
		}
	}

	/**
	 * @brief  Configure the MPU attributes as Write Through for SRAM1/2.
	 * @note   The Base Address is 0x20010000 since this memory interface is the AXI.
	 *         The Region Size is 256KB, it is related to SRAM1 and SRAM2  memory size.
	 * @param  None
	 * @retval None
	 */
	static void MPU_Config(void) {
		MPU_Region_InitTypeDef MPU_InitStruct;

		/* Disable the MPU */
		HAL_MPU_Disable();

		/* Configure the MPU attributes as WT for SRAM */
		MPU_InitStruct.Enable = MPU_REGION_ENABLE;
		MPU_InitStruct.BaseAddress = 0x20010000;
		MPU_InitStruct.Size = MPU_REGION_SIZE_256KB;
		MPU_InitStruct.AccessPermission = MPU_REGION_FULL_ACCESS;
		MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;
		MPU_InitStruct.IsCacheable = MPU_ACCESS_CACHEABLE;
		MPU_InitStruct.IsShareable = MPU_ACCESS_SHAREABLE;
		MPU_InitStruct.Number = MPU_REGION_NUMBER0;
		MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;
		MPU_InitStruct.SubRegionDisable = 0x00;
		MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_ENABLE;

		HAL_MPU_ConfigRegion(&MPU_InitStruct);

		/* Enable the MPU */
		HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);
	}

	/**
	 * @brief  CPU L1-Cache enable.
	 * @param  None
	 * @retval None
	 */
	static void CPU_CACHE_Enable(void) {
		/* Enable I-Cache */
		SCB_EnableICache();

		/* Enable D-Cache */
		SCB_EnableDCache();
	}

#ifdef  USE_FULL_ASSERT

	/**
	 * @brief  Reports the name of the source file and the source line number
	 *         where the assert_param error has occurred.
	 * @param  file: pointer to the source file name
	 * @param  line: assert_param error line source number
	 * @retval None
	 */
	void assert_failed(uint8_t* file, uint32_t line)
	{
		/* User can add his own implementation to report the file name and line number,
		 ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */

		/* Infinite loop */
		while (1)
		{
		}
	}
#endif

	/**
	 * @}
	 */

	/**
	 * @}
	 */

	/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
