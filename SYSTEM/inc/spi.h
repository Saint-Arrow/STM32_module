#ifndef __SPI_H
#define __SPI_H
#include "sys.h"
//////////////////////////////////////////////////////////////////////////////////	 
//本程序只供学习使用，未经作者许可，不得用于其它任何用途
//ALIENTEK战舰STM32开发板
//SPI驱动 代码	   
//正点原子@ALIENTEK
//技术论坛:www.openedv.com
//修改日期:2012/9/9
//版本：V1.0
//版权所有，盗版必究。
//Copyright(C) 广州市星翼电子科技有限公司 2009-2019
//All rights reserved									  
//////////////////////////////////////////////////////////////////////////////////


#define SPI_Master_Slave 0	   //1 Master ;0 Slave

#if	 SPI_Master_Slave
	#define SPI_MCU_MODE SPI_Mode_Master
#else
	#define SPI_MCU_MODE SPI_Mode_Slave 
#endif
//#define SPI_INTERRUPT 
 				  	    													  
void SPI1_Init(void);			 //初始化SPI口
void SPI1_SetSpeed(uint8_t SpeedSet); //设置SPI速度  

#ifndef  SPI_INTERRUPT
uint8_t SPI1_ReadWriteByte(uint8_t TxData);//SPI总线读写一个字节
uint8_t SPI1_ReadByte(void);
void SPI1_WriteByte(uint8_t TxData);	
#endif
	 
#endif

