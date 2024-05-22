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
static const char *ng0 = "D:/Documents/Code/Verilog/FPGA_in_class/HomeWork/counter10/count_10_tb.v";
static int ng4[] = {0, 0};
static int ng5[] = {1, 0};

static void Forked_28_1(char *);
static void Forked_29_2(char *);
static void Forked_30_3(char *);
void Forked_28_1();
void Forked_29_2();
void Forked_30_3();


static int sp_main(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(27, ng0);
    t5 = xsi_create_forkvar_inside_subprogram_invocation(t2, 3, 0);
    t6 = (t2 + 80U);
    t7 = *((char **)t6);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_28_1, t2, t7);
    t8 = (t2 + 80U);
    t9 = *((char **)t8);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_29_2, t2, t9);
    t10 = (t2 + 80U);
    t11 = *((char **)t10);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_30_3, t2, t11);
    xsi_set_forkwaitinfo_inside_subprogram_status(t2, 0, 1);
    *((char **)t3) = &&LAB5;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    t12 = xsi_get_forkvar_inside_subprogram_invocation(t2, 0);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    if (*((int *)t14) > 0)
        goto LAB6;

LAB7:    xsi_clean_active_fork_process_list(t2);
    goto LAB4;

LAB6:    xsi_set_forkwaitinfo_inside_subprogram_status(t2, 0, 1);
    goto LAB1;

}

static int sp_clock_gen(char *t1, char *t2)
{
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1280);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t5 = ((char*)((ng4)));
    t6 = (t1 + 3336);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(36, ng0);

LAB6:    xsi_set_current_line(36, ng0);

LAB7:    xsi_set_current_line(37, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 10000LL);
    *((char **)t3) = &&LAB8;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB8:    xsi_set_current_line(37, ng0);
    t6 = (t1 + 3336);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    t10 = (t9 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t9);
    t14 = (t13 & t12);
    t15 = (t14 & 1U);
    if (t15 != 0)
        goto LAB12;

LAB10:    if (*((unsigned int *)t10) == 0)
        goto LAB9;

LAB11:    t16 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t16) = 1;

LAB12:    t17 = (t7 + 4);
    t18 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t7) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB14;

LAB13:    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    t27 = (t1 + 3336);
    xsi_vlogvar_assign_value(t27, t7, 0, 0, 1);
    goto LAB6;

LAB9:    *((unsigned int *)t7) = 1;
    goto LAB12;

LAB14:    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t7) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB13;

LAB15:    goto LAB4;

}

static int sp_reset_gen(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t1 + 3496);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(44, ng0);

LAB6:    xsi_set_current_line(44, ng0);

LAB7:    xsi_set_current_line(45, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 55000LL);
    *((char **)t3) = &&LAB8;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB8:    xsi_set_current_line(45, ng0);
    t6 = ((char*)((ng4)));
    t7 = (t1 + 3496);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(46, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 512000LL);
    *((char **)t3) = &&LAB9;
    t0 = 1;
    goto LAB1;

LAB9:    xsi_set_current_line(46, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t1 + 3496);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(47, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 15000LL);
    *((char **)t3) = &&LAB10;
    t0 = 1;
    goto LAB1;

LAB10:    xsi_set_current_line(47, ng0);
    t6 = ((char*)((ng4)));
    t7 = (t1 + 3496);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB6;

LAB11:    goto LAB4;

}

static int sp_z_gen(char *t1, char *t2)
{
    char t9[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(52, ng0);

LAB5:    xsi_set_current_line(53, ng0);

LAB6:    t5 = (t1 + 3496);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng4)));
    memset(t9, 0, 8);
    t10 = (t7 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    t18 = (t14 | t17);
    t19 = *((unsigned int *)t10);
    t20 = *((unsigned int *)t11);
    t21 = (t19 | t20);
    t22 = (~(t21));
    t23 = (t18 & t22);
    if (t23 != 0)
        goto LAB10;

LAB7:    if (t21 != 0)
        goto LAB9;

LAB8:    *((unsigned int *)t9) = 1;

LAB10:    t25 = (t9 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t9);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB12;

LAB11:    t31 = (t2 + 88U);
    t32 = *((char **)t31);
    t33 = (t32 + 0U);
    xsi_wp_set_status(t33, 1);
    t34 = (t2 + 48U);
    *((char **)t34) = &&LAB6;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB9:    t24 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB10;

LAB12:    t35 = (t2 + 88U);
    t36 = *((char **)t35);
    t37 = (t36 + 0U);
    xsi_wp_set_status(t37, 0);
    xsi_set_current_line(54, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t1 + 3656);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 1);
    xsi_set_current_line(55, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 256000LL);
    *((char **)t3) = &&LAB13;
    t0 = 1;
    goto LAB1;

LAB13:    xsi_set_current_line(55, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t1 + 3656);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(56, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 256000LL);
    *((char **)t3) = &&LAB14;
    t0 = 1;
    goto LAB1;

LAB14:    xsi_set_current_line(56, ng0);
    t6 = ((char*)((ng4)));
    t7 = (t1 + 3656);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    xsi_set_current_line(57, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 25000LL);
    *((char **)t3) = &&LAB15;
    t0 = 1;
    goto LAB1;

LAB15:    xsi_set_current_line(57, ng0);
    t6 = ((char*)((ng5)));
    t7 = (t1 + 3656);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);
    goto LAB4;

}

static void Initial_23_0(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 4576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);

LAB4:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 4384);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 4480);
    t6 = *((char **)t5);
    t7 = (t6 + 80U);
    t8 = *((char **)t7);
    t9 = (t8 + 272U);
    t10 = *((char **)t9);
    t11 = (t10 + 0U);
    t12 = *((char **)t11);
    t13 = ((int  (*)(char *, char *))t12)(t0, t6);

LAB9:    if (t13 != 0)
        goto LAB10;

LAB5:    t6 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t6);

LAB6:    t14 = (t0 + 4480);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 4384);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);

LAB1:    return;
LAB8:;
LAB10:    t5 = (t0 + 4576U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

}

static void Forked_28_1(char *t0)
{
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t26;

LAB0:    t1 = (t0 + 72U);
    t2 = *((char **)t1);
    t3 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t4 = (t3 + 192U);
    t5 = *((char **)t4);
    if (t5 == 0)
        goto LAB2;

LAB3:    goto *t5;

LAB2:    t5 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    xsi_vlog_process_setdisablestate(t5, &&LAB4);
    xsi_set_current_line(28, ng0);
    t6 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t7 = (t2 + 1280);
    t8 = xsi_create_subprogram_invocation(t6, 0, t2, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);

LAB7:    t9 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t10 = (t9 + 96U);
    t11 = *((char **)t10);
    t12 = (t11 + 80U);
    t13 = *((char **)t12);
    t14 = (t13 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t18 = ((int  (*)(char *, char *))t17)(t2, t11);

LAB9:    if (t18 != 0)
        goto LAB10;

LAB5:    t19 = (t2 + 1280);
    xsi_vlog_subprogram_popinvocation(t19);

LAB6:    t20 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t21 = (t20 + 96U);
    t22 = *((char **)t21);
    t21 = (t2 + 1280);
    t23 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t2, t23, t24);

LAB4:    t1 = xsi_get_forkvar_inside_subprogram_invocation(t0, 0);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    memcpy(t25, t5, 8);
    t26 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t26 - 1);
    xsi_vlogvar_assign_value(t1, t25, 0, 0, 32);

LAB1:    return;
LAB8:;
LAB10:    t10 = xsi_get_forkjoin_process_inside_subprogram(t0, 0);
    t11 = (t10 + 192U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

}

static void Forked_29_2(char *t0)
{
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t26;

LAB0:    t1 = (t0 + 72U);
    t2 = *((char **)t1);
    t3 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t4 = (t3 + 192U);
    t5 = *((char **)t4);
    if (t5 == 0)
        goto LAB2;

LAB3:    goto *t5;

LAB2:    t5 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    xsi_vlog_process_setdisablestate(t5, &&LAB4);
    xsi_set_current_line(29, ng0);
    t6 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t7 = (t2 + 1712);
    t8 = xsi_create_subprogram_invocation(t6, 0, t2, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);

LAB7:    t9 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t10 = (t9 + 96U);
    t11 = *((char **)t10);
    t12 = (t11 + 80U);
    t13 = *((char **)t12);
    t14 = (t13 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t18 = ((int  (*)(char *, char *))t17)(t2, t11);

LAB9:    if (t18 != 0)
        goto LAB10;

LAB5:    t19 = (t2 + 1712);
    xsi_vlog_subprogram_popinvocation(t19);

LAB6:    t20 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t21 = (t20 + 96U);
    t22 = *((char **)t21);
    t21 = (t2 + 1712);
    t23 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t2, t23, t24);

LAB4:    t1 = xsi_get_forkvar_inside_subprogram_invocation(t0, 0);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    memcpy(t25, t5, 8);
    t26 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t26 - 1);
    xsi_vlogvar_assign_value(t1, t25, 0, 0, 32);

LAB1:    return;
LAB8:;
LAB10:    t10 = xsi_get_forkjoin_process_inside_subprogram(t0, 1);
    t11 = (t10 + 192U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

}

static void Forked_30_3(char *t0)
{
    char t25[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    unsigned int t26;

LAB0:    t1 = (t0 + 72U);
    t2 = *((char **)t1);
    t3 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    t4 = (t3 + 192U);
    t5 = *((char **)t4);
    if (t5 == 0)
        goto LAB2;

LAB3:    goto *t5;

LAB2:    t5 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    xsi_vlog_process_setdisablestate(t5, &&LAB4);
    xsi_set_current_line(30, ng0);
    t6 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    t7 = (t2 + 2144);
    t8 = xsi_create_subprogram_invocation(t6, 0, t2, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);

LAB7:    t9 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    t10 = (t9 + 96U);
    t11 = *((char **)t10);
    t12 = (t11 + 80U);
    t13 = *((char **)t12);
    t14 = (t13 + 272U);
    t15 = *((char **)t14);
    t16 = (t15 + 0U);
    t17 = *((char **)t16);
    t18 = ((int  (*)(char *, char *))t17)(t2, t11);

LAB9:    if (t18 != 0)
        goto LAB10;

LAB5:    t19 = (t2 + 2144);
    xsi_vlog_subprogram_popinvocation(t19);

LAB6:    t20 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    t21 = (t20 + 96U);
    t22 = *((char **)t21);
    t21 = (t2 + 2144);
    t23 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    t24 = 0;
    xsi_delete_subprogram_invocation(t21, t22, t2, t23, t24);

LAB4:    t1 = xsi_get_forkvar_inside_subprogram_invocation(t0, 0);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    memcpy(t25, t5, 8);
    t26 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t26 - 1);
    xsi_vlogvar_assign_value(t1, t25, 0, 0, 32);

LAB1:    return;
LAB8:;
LAB10:    t10 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    t11 = (t10 + 192U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

}


extern void work_m_00000000000318500686_3006590485_init()
{
	static char *pe[] = {(void *)Initial_23_0};
	static char *se[] = {(void *)sp_main,(void *)sp_clock_gen,(void *)sp_reset_gen,(void *)sp_z_gen};
	xsi_register_didat("work_m_00000000000318500686_3006590485", "isim/count_10_tb_isim_beh.exe.sim/work/m_00000000000318500686_3006590485.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
