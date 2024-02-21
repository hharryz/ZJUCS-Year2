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
static const char *ng0 = "G:/ise/lab12/Register/Trans_sim.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {2U, 0U};
static int ng4[] = {8, 0};
static int ng5[] = {7, 0};
static unsigned int ng6[] = {0U, 0U};
static int ng7[] = {9, 0};
static int ng8[] = {10, 0};
static int ng9[] = {3, 0};
static int ng10[] = {2, 0};
static int ng11[] = {4, 0};
static unsigned int ng12[] = {3U, 0U};
static unsigned int ng13[] = {1U, 0U};
static int ng14[] = {6, 0};
static int ng15[] = {5, 0};



static void Always_49_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;

LAB0:    t1 = (t0 + 1812U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(49, ng0);

LAB4:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1712);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1712);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    goto LAB2;

}

static void Initial_53_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t6[8];
    char t29[8];
    char *t1;
    char *t2;
    char *t3;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;
    char *t15;
    unsigned int t16;
    int t17;
    int t18;
    char *t19;
    unsigned int t20;
    int t21;
    int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    int t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;

LAB0:    t1 = (t0 + 1956U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);

LAB4:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 10);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 20000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng4)));
    t11 = ((char*)((ng5)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB6:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB7;

LAB8:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB9;

LAB10:    xsi_set_current_line(68, ng0);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB11:    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng8)));
    memset(t4, 0, 8);
    xsi_vlog_signed_leq(t4, 32, t7, 32, t8, 32);
    t9 = (t4 + 4);
    t13 = *((unsigned int *)t9);
    t16 = (~(t13));
    t20 = *((unsigned int *)t4);
    t23 = (t20 & t16);
    t25 = (t23 != 0);
    if (t25 > 0)
        goto LAB12;

LAB13:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng1)));
    t11 = ((char*)((ng2)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB27;

LAB28:    xsi_set_current_line(77, ng0);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB29:    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_signed_leq(t4, 32, t7, 32, t8, 32);
    t9 = (t4 + 4);
    t13 = *((unsigned int *)t9);
    t16 = (~(t13));
    t20 = *((unsigned int *)t4);
    t23 = (t20 & t16);
    t25 = (t23 != 0);
    if (t25 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(85, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng14)));
    t11 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB45;

LAB46:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    t11 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB47;

LAB48:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB12:    xsi_set_current_line(68, ng0);

LAB14:    xsi_set_current_line(69, ng0);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 1196);
    t12 = (t0 + 1196);
    t15 = (t12 + 44U);
    t19 = *((char **)t15);
    t30 = ((char*)((ng9)));
    t31 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t5, t6, t29, ((int*)(t19)), 2, t30, 32, 1, t31, 32, 1);
    t32 = (t5 + 4);
    t26 = *((unsigned int *)t32);
    t14 = (!(t26));
    t33 = (t6 + 4);
    t34 = *((unsigned int *)t33);
    t17 = (!(t34));
    t18 = (t14 && t17);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t35);
    t21 = (!(t36));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB15;

LAB16:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB17;
    goto LAB1;

LAB15:    t37 = *((unsigned int *)t29);
    t24 = (t37 + 0);
    t38 = *((unsigned int *)t5);
    t39 = *((unsigned int *)t6);
    t27 = (t38 - t39);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t11, t10, t24, *((unsigned int *)t6), t28, 0LL);
    goto LAB16;

LAB17:    xsi_set_current_line(70, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB18;

LAB19:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB18:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB19;

LAB20:    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    t11 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB21;

LAB22:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB21:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t24, *((unsigned int *)t5), t28, 0LL);
    goto LAB22;

LAB23:    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB24;

LAB25:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB24:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB25;

LAB26:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t7, 32, t8, 32);
    t9 = (t0 + 1288);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 32);
    goto LAB11;

LAB27:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB28;

LAB30:    xsi_set_current_line(77, ng0);

LAB32:    xsi_set_current_line(78, ng0);
    t10 = ((char*)((ng6)));
    t11 = (t0 + 1196);
    t12 = (t0 + 1196);
    t15 = (t12 + 44U);
    t19 = *((char **)t15);
    t30 = ((char*)((ng9)));
    t31 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t5, t6, t29, ((int*)(t19)), 2, t30, 32, 1, t31, 32, 1);
    t32 = (t5 + 4);
    t26 = *((unsigned int *)t32);
    t14 = (!(t26));
    t33 = (t6 + 4);
    t34 = *((unsigned int *)t33);
    t17 = (!(t34));
    t18 = (t14 && t17);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t35);
    t21 = (!(t36));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB33;

LAB34:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB35;
    goto LAB1;

LAB33:    t37 = *((unsigned int *)t29);
    t24 = (t37 + 0);
    t38 = *((unsigned int *)t5);
    t39 = *((unsigned int *)t6);
    t27 = (t38 - t39);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t11, t10, t24, *((unsigned int *)t6), t28, 0LL);
    goto LAB34;

LAB35:    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB36;

LAB37:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB38;
    goto LAB1;

LAB36:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB37;

LAB38:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    t11 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB39;

LAB40:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB39:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t24, *((unsigned int *)t5), t28, 0LL);
    goto LAB40;

LAB41:    xsi_set_current_line(81, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB42;

LAB43:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB42:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB43;

LAB44:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t7 = *((char **)t3);
    t8 = ((char*)((ng1)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t7, 32, t8, 32);
    t9 = (t0 + 1288);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 32);
    goto LAB29;

LAB45:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB46;

LAB47:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t24, *((unsigned int *)t5), t28, 0LL);
    goto LAB48;

LAB49:    xsi_set_current_line(87, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB50;

LAB51:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB50:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB51;

LAB52:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    t11 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB53;

LAB54:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB55;
    goto LAB1;

LAB53:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t24, *((unsigned int *)t5), t28, 0LL);
    goto LAB54;

LAB55:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB56;

LAB57:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB58;
    goto LAB1;

LAB56:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB57;

LAB58:    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng14)));
    t11 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB59;

LAB60:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    t11 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB61;

LAB62:    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB63;
    goto LAB1;

LAB59:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB60;

LAB61:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t24, *((unsigned int *)t5), t28, 0LL);
    goto LAB62;

LAB63:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB64;

LAB65:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB66;
    goto LAB1;

LAB64:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB65;

LAB66:    xsi_set_current_line(93, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    t11 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB67;

LAB68:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB69;
    goto LAB1;

LAB67:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t24, *((unsigned int *)t5), t28, 0LL);
    goto LAB68;

LAB69:    xsi_set_current_line(94, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB70;

LAB71:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB72;
    goto LAB1;

LAB70:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB71;

LAB72:    xsi_set_current_line(95, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng14)));
    t11 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB73;

LAB74:    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    t11 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB75;

LAB76:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB73:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB74;

LAB75:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t24, *((unsigned int *)t5), t28, 0LL);
    goto LAB76;

LAB77:    xsi_set_current_line(97, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB78;

LAB79:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB78:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB79;

LAB80:    xsi_set_current_line(98, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    t11 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB81;

LAB82:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB81:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t24, *((unsigned int *)t5), t28, 0LL);
    goto LAB82;

LAB83:    xsi_set_current_line(99, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB84;

LAB85:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB86;
    goto LAB1;

LAB84:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB85;

LAB86:    xsi_set_current_line(100, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng14)));
    t11 = ((char*)((ng15)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB87;

LAB88:    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    t11 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB89;

LAB90:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB91;
    goto LAB1;

LAB87:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_assign_value(t3, t2, t24, *((unsigned int *)t5), t28);
    goto LAB88;

LAB89:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t24, *((unsigned int *)t5), t28, 0LL);
    goto LAB90;

LAB91:    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB92;

LAB93:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB94;
    goto LAB1;

LAB92:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB93;

LAB94:    xsi_set_current_line(105, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng9)));
    t11 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t9)), 2, t10, 32, 1, t11, 32, 1);
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (!(t13));
    t15 = (t5 + 4);
    t16 = *((unsigned int *)t15);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t19 = (t6 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB95;

LAB96:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB97;
    goto LAB1;

LAB95:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t3, t2, t24, *((unsigned int *)t5), t28, 0LL);
    goto LAB96;

LAB97:    xsi_set_current_line(106, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB98;

LAB99:    xsi_set_current_line(106, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB100;
    goto LAB1;

LAB98:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB99;

LAB100:    xsi_set_current_line(109, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng7)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB101;

LAB102:    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB103;
    goto LAB1;

LAB101:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB102;

LAB103:    xsi_set_current_line(110, ng0);
    t3 = ((char*)((ng12)));
    t7 = (t0 + 1196);
    t8 = (t0 + 1196);
    t9 = (t8 + 44U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng9)));
    t12 = ((char*)((ng10)));
    xsi_vlog_convert_partindices(t4, t5, t6, ((int*)(t10)), 2, t11, 32, 1, t12, 32, 1);
    t15 = (t4 + 4);
    t13 = *((unsigned int *)t15);
    t14 = (!(t13));
    t19 = (t5 + 4);
    t16 = *((unsigned int *)t19);
    t17 = (!(t16));
    t18 = (t14 && t17);
    t30 = (t6 + 4);
    t20 = *((unsigned int *)t30);
    t21 = (!(t20));
    t22 = (t18 && t21);
    if (t22 == 1)
        goto LAB104;

LAB105:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB106;
    goto LAB1;

LAB104:    t23 = *((unsigned int *)t6);
    t24 = (t23 + 0);
    t25 = *((unsigned int *)t4);
    t26 = *((unsigned int *)t5);
    t27 = (t25 - t26);
    t28 = (t27 + 1);
    xsi_vlogvar_wait_assign_value(t7, t3, t24, *((unsigned int *)t5), t28, 0LL);
    goto LAB105;

LAB106:    xsi_set_current_line(111, ng0);
    t2 = ((char*)((ng13)));
    t3 = (t0 + 1196);
    t7 = (t0 + 1196);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t10 = ((char*)((ng11)));
    xsi_vlog_generic_convert_bit_index(t4, t9, 2, t10, 32, 1);
    t11 = (t4 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB107;

LAB108:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 1856);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB109;
    goto LAB1;

LAB107:    xsi_vlogvar_wait_assign_value(t3, t2, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB108;

LAB109:    goto LAB1;

}


extern void work_m_00000000002472296075_2394982238_init()
{
	static char *pe[] = {(void *)Always_49_0,(void *)Initial_53_1};
	xsi_register_didat("work_m_00000000002472296075_2394982238", "isim/Trans_sim_isim_beh.exe.sim/work/m_00000000002472296075_2394982238.didat");
	xsi_register_executes(pe);
}
