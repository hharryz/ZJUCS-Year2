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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/lab/lab11/MyCounter/clk_1s.v";
static int ng1[] = {0, 0};
static int ng2[] = {25, 0};
static int ng3[] = {1, 0};



static void Initial_27_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(27, ng0);

LAB2:    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 920);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);
    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 828);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);

LAB1:    return;
}

static void Always_31_1(char *t0)
{
    char t8[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    t1 = (t0 + 1588U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 1784);
    *((int *)t2) = 1;
    t3 = (t0 + 1616);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 920);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB7;

LAB6:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t6) < *((unsigned int *)t7))
        goto LAB8;

LAB9:    t12 = (t8 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t8);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(34, ng0);

LAB15:    xsi_set_current_line(35, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t8, 0, 8);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t5);
    t14 = (~(t13));
    t15 = *((unsigned int *)t4);
    t16 = (t15 & t14);
    t17 = (t16 & 1U);
    if (t17 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t5) == 0)
        goto LAB16;

LAB18:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;

LAB19:    t7 = (t8 + 4);
    t9 = (t4 + 4);
    t24 = *((unsigned int *)t4);
    t25 = (~(t24));
    *((unsigned int *)t8) = t25;
    *((unsigned int *)t7) = 0;
    if (*((unsigned int *)t9) != 0)
        goto LAB21;

LAB20:    t30 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t30 & 1U);
    t31 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t31 & 1U);
    t10 = (t0 + 828);
    xsi_vlogvar_wait_assign_value(t10, t8, 0, 0, 1, 0LL);

LAB13:    goto LAB2;

LAB7:    t11 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t8) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(32, ng0);

LAB14:    xsi_set_current_line(33, ng0);
    t18 = (t0 + 920);
    t19 = (t18 + 36U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_unsigned_add(t22, 32, t20, 32, t21, 32);
    t23 = (t0 + 920);
    xsi_vlogvar_wait_assign_value(t23, t22, 0, 0, 32, 0LL);
    goto LAB13;

LAB16:    *((unsigned int *)t8) = 1;
    goto LAB19;

LAB21:    t26 = *((unsigned int *)t8);
    t27 = *((unsigned int *)t9);
    *((unsigned int *)t8) = (t26 | t27);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t9);
    *((unsigned int *)t7) = (t28 | t29);
    goto LAB20;

}


extern void work_m_00000000000000188556_2154641950_init()
{
	static char *pe[] = {(void *)Initial_27_0,(void *)Always_31_1};
	xsi_register_didat("work_m_00000000000000188556_2154641950", "isim/RevCounter_isim_beh.exe.sim/work/m_00000000000000188556_2154641950.didat");
	xsi_register_executes(pe);
}
