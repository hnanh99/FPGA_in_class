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
static const char *ng0 = "D:/Documents/Code/Verilog/FPGA_in_class/HomeWork/count_100/count_10.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {2U, 0U};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {0, 0};
static int ng6[] = {9, 0};



static void Always_35_0(char *t0)
{
    char t16[8];
    char t33[8];
    char t47[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t48;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(35, ng0);
    t2 = (t0 + 3736);
    *((int *)t2) = 1;
    t3 = (t0 + 3448);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(36, ng0);

LAB5:    xsi_set_current_line(37, ng0);
    t4 = (t0 + 1616U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(43, ng0);

LAB10:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2496);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng1)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 2);
    if (t13 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng4)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng2)));
    t13 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 2);
    if (t13 == 1)
        goto LAB16;

LAB17:
LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(38, ng0);

LAB9:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2176);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB8;

LAB12:    xsi_set_current_line(45, ng0);

LAB19:    xsi_set_current_line(46, ng0);
    t11 = (t0 + 1776U);
    t12 = *((char **)t11);
    t11 = (t12 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t12);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(51, ng0);

LAB24:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2176);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_add(t16, 32, t5, 4, t11, 32);
    t12 = (t0 + 2176);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 4, 0LL);

LAB22:    goto LAB18;

LAB14:    xsi_set_current_line(56, ng0);

LAB25:    xsi_set_current_line(57, ng0);
    t3 = (t0 + 1776U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng5)));
    memset(t16, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB29;

LAB26:    if (t21 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t16) = 1;

LAB29:    t15 = (t16 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(67, ng0);

LAB44:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB32:    goto LAB18;

LAB16:    xsi_set_current_line(71, ng0);

LAB45:    xsi_set_current_line(72, ng0);
    t3 = (t0 + 1776U);
    t5 = *((char **)t3);
    t3 = ((char*)((ng3)));
    memset(t16, 0, 8);
    t11 = (t5 + 4);
    t12 = (t3 + 4);
    t6 = *((unsigned int *)t5);
    t7 = *((unsigned int *)t3);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t17 = (t9 ^ t10);
    t18 = (t8 | t17);
    t19 = *((unsigned int *)t11);
    t20 = *((unsigned int *)t12);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB49;

LAB46:    if (t21 != 0)
        goto LAB48;

LAB47:    *((unsigned int *)t16) = 1;

LAB49:    t15 = (t16 + 4);
    t24 = *((unsigned int *)t15);
    t25 = (~(t24));
    t26 = *((unsigned int *)t16);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(82, ng0);

LAB64:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB52:    goto LAB18;

LAB20:    xsi_set_current_line(47, ng0);

LAB23:    xsi_set_current_line(48, ng0);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 2496);
    xsi_vlogvar_wait_assign_value(t15, t14, 0, 0, 2, 0LL);
    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2176);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t11 = ((char*)((ng3)));
    memset(t16, 0, 8);
    xsi_vlog_unsigned_minus(t16, 32, t5, 4, t11, 32);
    t12 = (t0 + 2176);
    xsi_vlogvar_wait_assign_value(t12, t16, 0, 0, 4, 0LL);
    goto LAB22;

LAB28:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(57, ng0);

LAB33:    xsi_set_current_line(58, ng0);
    t29 = (t0 + 2176);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng6)));
    memset(t33, 0, 8);
    t34 = (t31 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB35;

LAB34:    t35 = (t32 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB35;

LAB38:    if (*((unsigned int *)t31) < *((unsigned int *)t32))
        goto LAB36;

LAB37:    t37 = (t33 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t33);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(62, ng0);

LAB43:    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2176);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB41:    goto LAB32;

LAB35:    t36 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB37;

LAB36:    *((unsigned int *)t33) = 1;
    goto LAB37;

LAB39:    xsi_set_current_line(58, ng0);

LAB42:    xsi_set_current_line(59, ng0);
    t43 = (t0 + 2176);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng3)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_add(t47, 32, t45, 4, t46, 32);
    t48 = (t0 + 2176);
    xsi_vlogvar_wait_assign_value(t48, t47, 0, 0, 4, 0LL);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB41;

LAB48:    t14 = (t16 + 4);
    *((unsigned int *)t16) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB49;

LAB50:    xsi_set_current_line(72, ng0);

LAB53:    xsi_set_current_line(73, ng0);
    t29 = (t0 + 2176);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    t32 = ((char*)((ng5)));
    memset(t33, 0, 8);
    t34 = (t31 + 4);
    if (*((unsigned int *)t34) != 0)
        goto LAB55;

LAB54:    t35 = (t32 + 4);
    if (*((unsigned int *)t35) != 0)
        goto LAB55;

LAB58:    if (*((unsigned int *)t31) > *((unsigned int *)t32))
        goto LAB56;

LAB57:    t37 = (t33 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (~(t38));
    t40 = *((unsigned int *)t33);
    t41 = (t40 & t39);
    t42 = (t41 != 0);
    if (t42 > 0)
        goto LAB59;

LAB60:    xsi_set_current_line(77, ng0);

LAB63:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2176);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 4, 0LL);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB61:    goto LAB52;

LAB55:    t36 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t36) = 1;
    goto LAB57;

LAB56:    *((unsigned int *)t33) = 1;
    goto LAB57;

LAB59:    xsi_set_current_line(73, ng0);

LAB62:    xsi_set_current_line(74, ng0);
    t43 = (t0 + 2176);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    t46 = ((char*)((ng3)));
    memset(t47, 0, 8);
    xsi_vlog_unsigned_minus(t47, 32, t45, 4, t46, 32);
    t48 = (t0 + 2176);
    xsi_vlogvar_wait_assign_value(t48, t47, 0, 0, 4, 0LL);
    xsi_set_current_line(75, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2336);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB61;

}


extern void work_m_00000000003661994882_4004232423_init()
{
	static char *pe[] = {(void *)Always_35_0};
	xsi_register_didat("work_m_00000000003661994882_4004232423", "isim/count_100_tb_isim_beh.exe.sim/work/m_00000000003661994882_4004232423.didat");
	xsi_register_executes(pe);
}
