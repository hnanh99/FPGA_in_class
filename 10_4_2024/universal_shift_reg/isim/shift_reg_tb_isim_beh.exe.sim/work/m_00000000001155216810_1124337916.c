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

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "D:/Documents/Code/Verilog/FPGA_in_class/10_4_2024/universal_shift_reg/universal_shift_reg.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};



static void Always_36_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 3464U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 4280);
    *((int *)t2) = 1;
    t3 = (t0 + 3496);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1344U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 2384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(37, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 2544);
    xsi_vlogvar_wait_assign_value(t29, t28, 0, 0, 8, 0LL);
    goto LAB12;

}

static void Always_41_1(char *t0)
{
    char t11[8];
    char t12[8];
    char t19[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;

LAB0:    t1 = (t0 + 3712U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 4296);
    *((int *)t2) = 1;
    t3 = (t0 + 3744);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(41, ng0);

LAB5:    xsi_set_current_line(42, ng0);
    t4 = (t0 + 1504U);
    t5 = *((char **)t4);

LAB6:    t4 = ((char*)((ng3)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t4, 2);
    if (t6 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t5, 2, t2, 2);
    if (t6 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1664U);
    t3 = *((char **)t2);
    t2 = (t0 + 2384);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 8);

LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(43, ng0);
    t7 = (t0 + 2544);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t0 + 2384);
    xsi_vlogvar_assign_value(t10, t9, 0, 0, 8);
    goto LAB15;

LAB9:    xsi_set_current_line(44, ng0);
    t3 = (t0 + 1664U);
    t4 = *((char **)t3);
    memset(t12, 0, 8);
    t3 = (t12 + 4);
    t7 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 0);
    t15 = (t14 & 1);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t7);
    t17 = (t16 >> 0);
    t18 = (t17 & 1);
    *((unsigned int *)t3) = t18;
    t8 = (t0 + 2544);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t19, 0, 8);
    t20 = (t19 + 4);
    t21 = (t10 + 4);
    t22 = *((unsigned int *)t10);
    t23 = (t22 >> 0);
    *((unsigned int *)t19) = t23;
    t24 = *((unsigned int *)t21);
    t25 = (t24 >> 0);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 127U);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 127U);
    xsi_vlogtype_concat(t11, 8, 8, 2U, t19, 7, t12, 1);
    t28 = (t0 + 2384);
    xsi_vlogvar_assign_value(t28, t11, 0, 0, 8);
    goto LAB15;

LAB11:    xsi_set_current_line(45, ng0);
    t3 = (t0 + 2544);
    t4 = (t3 + 56U);
    t7 = *((char **)t4);
    memset(t12, 0, 8);
    t8 = (t12 + 4);
    t9 = (t7 + 4);
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 1);
    *((unsigned int *)t12) = t14;
    t15 = *((unsigned int *)t9);
    t16 = (t15 >> 1);
    *((unsigned int *)t8) = t16;
    t17 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t17 & 127U);
    t18 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t18 & 127U);
    t10 = (t0 + 1664U);
    t20 = *((char **)t10);
    memset(t19, 0, 8);
    t10 = (t19 + 4);
    t21 = (t20 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (t22 >> 7);
    t24 = (t23 & 1);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t21);
    t26 = (t25 >> 7);
    t27 = (t26 & 1);
    *((unsigned int *)t10) = t27;
    xsi_vlogtype_concat(t11, 8, 8, 2U, t19, 1, t12, 7);
    t28 = (t0 + 2384);
    xsi_vlogvar_assign_value(t28, t11, 0, 0, 8);
    goto LAB15;

}

static void Cont_50_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 3960U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2544);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4392);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 4312);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000001155216810_1124337916_init()
{
	static char *pe[] = {(void *)Always_36_0,(void *)Always_41_1,(void *)Cont_50_2};
	xsi_register_didat("work_m_00000000001155216810_1124337916", "isim/shift_reg_tb_isim_beh.exe.sim/work/m_00000000001155216810_1124337916.didat");
	xsi_register_executes(pe);
}
