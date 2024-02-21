/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003345386302_2202260495_init();
    work_m_00000000000910166091_0721988197_init();
    unisims_ver_m_00000000000924517765_3125220529_init();
    unisims_ver_m_00000000003510477262_2316096324_init();
    unisims_ver_m_00000000001162476414_1323117156_init();
    work_m_00000000001920355754_1219166749_init();
    work_m_00000000002069653421_0276799101_init();
    work_m_00000000001786963940_1829268024_init();
    work_m_00000000004186900475_3706996384_init();
    work_m_00000000000270520021_1150630993_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000270520021_1150630993");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
