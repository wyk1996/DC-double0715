/*****************************************Copyright(C)******************************************
*******************************************汇誉科技*********************************************
*------------------------------------------文件信息---------------------------------------------
* FileName          : adadjust.h
* Author            : 吴斌
* Date First Issued : 2015-09-15
* Version           : V
* Description       :
*----------------------------------------历史版本信息-------------------------------------------
* History           :
* //2010        : V
* Description       :
*-----------------------------------------------------------------------------------------------
***********************************************************************************************/
#ifndef __ADADJUST_H_
#define __ADADJUST_H_
/* Includes-----------------------------------------------------------------------------------*/
#include "sysconfig.h"
/* Private define-----------------------------------------------------------------------------*/
typedef enum
{
	JUST_SW_FRONT1 = 0,  	//接触器前级电压校准
	JUST_SW_FRONT2,			//接触器前级电压校准
	JUST_SW_AFTER1,			//接触器后级电压校准
	JUST_SW_AFTER2,			//接触器后级电压校准
	JUST_CUR1,
	JUST_CUR2,
	JUST_GUN1,
	JUST_GUN2,
	JUST_T1_0_GUNA,
	JUST_T1_100_GUNA,
	JUST_T2_0_GUNA,
	JUST_T2_100_GUNA,
	JUST_T1_0_GUNB,
	JUST_T1_100_GUNB,
	JUST_T2_0_GUNB,
	JUST_T2_100_GUNB,
}_JUST_TYPE;
/* Private typedef----------------------------------------------------------------------------*/
/* Private macro------------------------------------------------------------------------------*/
/* Private variables--------------------------------------------------------------------------*/
/* Private function prototypes----------------------------------------------------------------*/
/* Private functions--------------------------------------------------------------------------*/

#endif  //__ADADJUST_H_
/************************(C)COPYRIGHT 2015 汇誉科技*****END OF FILE****************************/
