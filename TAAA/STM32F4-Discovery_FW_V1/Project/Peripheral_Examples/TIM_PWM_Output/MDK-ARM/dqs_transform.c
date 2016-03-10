/*============================================================================*/
/*	                   File Name: dqs_transform.c                             */
/*============================================================================*/
#include "stm32f4_discovery.h"
#include "stm32f4xx.h"
#include "dqs_transform.h"
#include "math.h"

/***********************************************************/
/*                       _____________                     */
/*                      |             |                    */
/*           Vab ======>| V_ABC->VDQs |=====> VDs          */
/*           Vbc ======>|             |=====> VQs          */
/*                      |_____________|                    */
/***********************************************************/


void DQs_calc(DQs *p)
{
		p->VQs = 1/sqrt(3) * p->Vbc ;
		p->VDs = 2/3 * (p->Vab + p->Vbc/2);	
}