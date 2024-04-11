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
static const char *ng0 = "D:/Documents/Code/Verilog/FPGA_in_class/10_4_2024/universal_binary_counter/counter_tb.v";
static int ng8[] = {0, 0};
static unsigned int ng9[] = {154U, 0U};
static int ng10[] = {1, 0};

static void Forked_62_1(char *);
static void Forked_63_2(char *);
static void Forked_64_3(char *);
static void Forked_65_4(char *);
static void Forked_66_5(char *);
static void Forked_67_6(char *);
static void Forked_68_7(char *);
void Forked_62_1();
void Forked_63_2();
void Forked_64_3();
void Forked_65_4();
void Forked_66_5();
void Forked_67_6();
void Forked_68_7();


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
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(61, ng0);
    t5 = xsi_create_forkvar_inside_subprogram_invocation(t2, 7, 0);
    t6 = (t2 + 80U);
    t7 = *((char **)t6);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_62_1, t2, t7);
    t8 = (t2 + 80U);
    t9 = *((char **)t8);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_63_2, t2, t9);
    t10 = (t2 + 80U);
    t11 = *((char **)t10);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_64_3, t2, t11);
    t12 = (t2 + 80U);
    t13 = *((char **)t12);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_65_4, t2, t13);
    t14 = (t2 + 80U);
    t15 = *((char **)t14);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_66_5, t2, t15);
    t16 = (t2 + 80U);
    t17 = *((char **)t16);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_67_6, t2, t17);
    t18 = (t2 + 80U);
    t19 = *((char **)t18);
    xsi_create_forkjoin_process_inside_subprogram(0, (void *)Forked_68_7, t2, t19);
    xsi_set_forkwaitinfo_inside_subprogram_status(t2, 0, 1);
    *((char **)t3) = &&LAB5;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB5:    t20 = xsi_get_forkvar_inside_subprogram_invocation(t2, 0);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    if (*((int *)t22) > 0)
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
    xsi_set_current_line(73, ng0);

LAB5:    xsi_set_current_line(74, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t1 + 4360);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(75, ng0);

LAB6:    xsi_set_current_line(75, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 5000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB7:    xsi_set_current_line(75, ng0);
    t6 = (t1 + 4360);
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
        goto LAB11;

LAB9:    if (*((unsigned int *)t10) == 0)
        goto LAB8;

LAB10:    t16 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t16) = 1;

LAB11:    t17 = (t7 + 4);
    t18 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t7) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB13;

LAB12:    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    t27 = (t1 + 4360);
    xsi_vlogvar_assign_value(t27, t7, 0, 0, 1);
    goto LAB6;

LAB8:    *((unsigned int *)t7) = 1;
    goto LAB11;

LAB13:    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t7) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB12;

LAB14:    goto LAB4;

}

static int sp_syn_clr_gen(char *t1, char *t2)
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

LAB2:    t4 = (t1 + 1712);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(79, ng0);

LAB5:    xsi_set_current_line(80, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t1 + 4680);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(81, ng0);

LAB6:    xsi_set_current_line(81, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 1000000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB7:    xsi_set_current_line(81, ng0);
    t6 = (t1 + 4680);
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
        goto LAB11;

LAB9:    if (*((unsigned int *)t10) == 0)
        goto LAB8;

LAB10:    t16 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t16) = 1;

LAB11:    t17 = (t7 + 4);
    t18 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t7) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB13;

LAB12:    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    t27 = (t1 + 4680);
    xsi_vlogvar_assign_value(t27, t7, 0, 0, 1);
    goto LAB6;

LAB8:    *((unsigned int *)t7) = 1;
    goto LAB11;

LAB13:    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t7) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB12;

LAB14:    goto LAB4;

}

static int sp_load_gen(char *t1, char *t2)
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

LAB2:    t4 = (t1 + 2144);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(85, ng0);

LAB5:    xsi_set_current_line(86, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t1 + 4840);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(87, ng0);

LAB6:    xsi_set_current_line(87, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 501000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB7:    xsi_set_current_line(87, ng0);
    t6 = (t1 + 4840);
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
        goto LAB11;

LAB9:    if (*((unsigned int *)t10) == 0)
        goto LAB8;

LAB10:    t16 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t16) = 1;

LAB11:    t17 = (t7 + 4);
    t18 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t7) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB13;

LAB12:    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    t27 = (t1 + 4840);
    xsi_vlogvar_assign_value(t27, t7, 0, 0, 1);
    goto LAB6;

LAB8:    *((unsigned int *)t7) = 1;
    goto LAB11;

LAB13:    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t7) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB12;

LAB14:    goto LAB4;

}

static int sp_en_gen(char *t1, char *t2)
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

LAB2:    t4 = (t1 + 2576);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(91, ng0);

LAB5:    xsi_set_current_line(92, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t1 + 5000);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(93, ng0);

LAB6:    xsi_set_current_line(93, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 251000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB7:    xsi_set_current_line(93, ng0);
    t6 = (t1 + 5000);
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
        goto LAB11;

LAB9:    if (*((unsigned int *)t10) == 0)
        goto LAB8;

LAB10:    t16 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t16) = 1;

LAB11:    t17 = (t7 + 4);
    t18 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t7) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB13;

LAB12:    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    t27 = (t1 + 5000);
    xsi_vlogvar_assign_value(t27, t7, 0, 0, 1);
    goto LAB6;

LAB8:    *((unsigned int *)t7) = 1;
    goto LAB11;

LAB13:    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t7) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB12;

LAB14:    goto LAB4;

}

static int sp_up_gen(char *t1, char *t2)
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

LAB2:    t4 = (t1 + 3008);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(97, ng0);

LAB5:    xsi_set_current_line(98, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t1 + 5160);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 1);
    xsi_set_current_line(99, ng0);

LAB6:    xsi_set_current_line(99, ng0);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_process_wait(t5, 126000LL);
    *((char **)t3) = &&LAB7;
    t0 = 1;

LAB1:    return t0;
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;
    goto LAB1;

LAB7:    xsi_set_current_line(99, ng0);
    t6 = (t1 + 5160);
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
        goto LAB11;

LAB9:    if (*((unsigned int *)t10) == 0)
        goto LAB8;

LAB10:    t16 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t16) = 1;

LAB11:    t17 = (t7 + 4);
    t18 = (t9 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    *((unsigned int *)t7) = t20;
    *((unsigned int *)t17) = 0;
    if (*((unsigned int *)t18) != 0)
        goto LAB13;

LAB12:    t25 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t25 & 1U);
    t26 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t26 & 1U);
    t27 = (t1 + 5160);
    xsi_vlogvar_assign_value(t27, t7, 0, 0, 1);
    goto LAB6;

LAB8:    *((unsigned int *)t7) = 1;
    goto LAB11;

LAB13:    t21 = *((unsigned int *)t7);
    t22 = *((unsigned int *)t18);
    *((unsigned int *)t7) = (t21 | t22);
    t23 = *((unsigned int *)t17);
    t24 = *((unsigned int *)t18);
    *((unsigned int *)t17) = (t23 | t24);
    goto LAB12;

LAB14:    goto LAB4;

}

static void Initial_55_0(char *t0)
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

LAB0:    t1 = (t0 + 6240U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);

LAB4:    xsi_set_current_line(57, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 5320);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 6048);
    t3 = (t0 + 848);
    t4 = xsi_create_subprogram_invocation(t2, 0, t0, t3, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t3, t4);

LAB7:    t5 = (t0 + 6144);
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

LAB6:    t14 = (t0 + 6144);
    t15 = *((char **)t14);
    t14 = (t0 + 848);
    t16 = (t0 + 6048);
    t17 = 0;
    xsi_delete_subprogram_invocation(t14, t15, t0, t16, t17);

LAB1:    return;
LAB8:;
LAB10:    t5 = (t0 + 6240U);
    *((char **)t5) = &&LAB7;
    goto LAB1;

}

static void Forked_62_1(char *t0)
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
    xsi_set_current_line(62, ng0);
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

static void Forked_63_2(char *t0)
{
    char t8[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t9;

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
    xsi_set_current_line(63, ng0);
    t6 = ((char*)((ng10)));
    t7 = (t2 + 4520);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 1);

LAB4:    t1 = xsi_get_forkvar_inside_subprogram_invocation(t0, 0);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    memcpy(t8, t5, 8);
    t9 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t9 - 1);
    xsi_vlogvar_assign_value(t1, t8, 0, 0, 32);

LAB1:    return;
}

static void Forked_64_3(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;

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
    xsi_set_current_line(64, ng0);
    t6 = xsi_get_forkjoin_process_inside_subprogram(t0, 2);
    xsi_process_wait(t6, 15000LL);
    *((char **)t4) = &&LAB5;

LAB1:    return;
LAB4:    t1 = xsi_get_forkvar_inside_subprogram_invocation(t0, 0);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    memcpy(t9, t5, 8);
    t10 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t10 - 1);
    xsi_vlogvar_assign_value(t1, t9, 0, 0, 32);
    goto LAB1;

LAB5:    xsi_set_current_line(64, ng0);
    t7 = ((char*)((ng8)));
    t8 = (t2 + 4520);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 1);
    goto LAB4;

}

static void Forked_65_4(char *t0)
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
    t3 = xsi_get_forkjoin_process_inside_subprogram(t0, 3);
    t4 = (t3 + 192U);
    t5 = *((char **)t4);
    if (t5 == 0)
        goto LAB2;

LAB3:    goto *t5;

LAB2:    t5 = xsi_get_forkjoin_process_inside_subprogram(t0, 3);
    xsi_vlog_process_setdisablestate(t5, &&LAB4);
    xsi_set_current_line(65, ng0);
    t6 = xsi_get_forkjoin_process_inside_subprogram(t0, 3);
    t7 = (t2 + 1712);
    t8 = xsi_create_subprogram_invocation(t6, 0, t2, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);

LAB7:    t9 = xsi_get_forkjoin_process_inside_subprogram(t0, 3);
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

LAB6:    t20 = xsi_get_forkjoin_process_inside_subprogram(t0, 3);
    t21 = (t20 + 96U);
    t22 = *((char **)t21);
    t21 = (t2 + 1712);
    t23 = xsi_get_forkjoin_process_inside_subprogram(t0, 3);
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
LAB10:    t10 = xsi_get_forkjoin_process_inside_subprogram(t0, 3);
    t11 = (t10 + 192U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

}

static void Forked_66_5(char *t0)
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
    t3 = xsi_get_forkjoin_process_inside_subprogram(t0, 4);
    t4 = (t3 + 192U);
    t5 = *((char **)t4);
    if (t5 == 0)
        goto LAB2;

LAB3:    goto *t5;

LAB2:    t5 = xsi_get_forkjoin_process_inside_subprogram(t0, 4);
    xsi_vlog_process_setdisablestate(t5, &&LAB4);
    xsi_set_current_line(66, ng0);
    t6 = xsi_get_forkjoin_process_inside_subprogram(t0, 4);
    t7 = (t2 + 2144);
    t8 = xsi_create_subprogram_invocation(t6, 0, t2, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);

LAB7:    t9 = xsi_get_forkjoin_process_inside_subprogram(t0, 4);
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

LAB6:    t20 = xsi_get_forkjoin_process_inside_subprogram(t0, 4);
    t21 = (t20 + 96U);
    t22 = *((char **)t21);
    t21 = (t2 + 2144);
    t23 = xsi_get_forkjoin_process_inside_subprogram(t0, 4);
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
LAB10:    t10 = xsi_get_forkjoin_process_inside_subprogram(t0, 4);
    t11 = (t10 + 192U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

}

static void Forked_67_6(char *t0)
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
    t3 = xsi_get_forkjoin_process_inside_subprogram(t0, 5);
    t4 = (t3 + 192U);
    t5 = *((char **)t4);
    if (t5 == 0)
        goto LAB2;

LAB3:    goto *t5;

LAB2:    t5 = xsi_get_forkjoin_process_inside_subprogram(t0, 5);
    xsi_vlog_process_setdisablestate(t5, &&LAB4);
    xsi_set_current_line(67, ng0);
    t6 = xsi_get_forkjoin_process_inside_subprogram(t0, 5);
    t7 = (t2 + 2576);
    t8 = xsi_create_subprogram_invocation(t6, 0, t2, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);

LAB7:    t9 = xsi_get_forkjoin_process_inside_subprogram(t0, 5);
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

LAB5:    t19 = (t2 + 2576);
    xsi_vlog_subprogram_popinvocation(t19);

LAB6:    t20 = xsi_get_forkjoin_process_inside_subprogram(t0, 5);
    t21 = (t20 + 96U);
    t22 = *((char **)t21);
    t21 = (t2 + 2576);
    t23 = xsi_get_forkjoin_process_inside_subprogram(t0, 5);
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
LAB10:    t10 = xsi_get_forkjoin_process_inside_subprogram(t0, 5);
    t11 = (t10 + 192U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

}

static void Forked_68_7(char *t0)
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
    t3 = xsi_get_forkjoin_process_inside_subprogram(t0, 6);
    t4 = (t3 + 192U);
    t5 = *((char **)t4);
    if (t5 == 0)
        goto LAB2;

LAB3:    goto *t5;

LAB2:    t5 = xsi_get_forkjoin_process_inside_subprogram(t0, 6);
    xsi_vlog_process_setdisablestate(t5, &&LAB4);
    xsi_set_current_line(68, ng0);
    t6 = xsi_get_forkjoin_process_inside_subprogram(t0, 6);
    t7 = (t2 + 3008);
    t8 = xsi_create_subprogram_invocation(t6, 0, t2, t7, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t7, t8);

LAB7:    t9 = xsi_get_forkjoin_process_inside_subprogram(t0, 6);
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

LAB5:    t19 = (t2 + 3008);
    xsi_vlog_subprogram_popinvocation(t19);

LAB6:    t20 = xsi_get_forkjoin_process_inside_subprogram(t0, 6);
    t21 = (t20 + 96U);
    t22 = *((char **)t21);
    t21 = (t2 + 3008);
    t23 = xsi_get_forkjoin_process_inside_subprogram(t0, 6);
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
LAB10:    t10 = xsi_get_forkjoin_process_inside_subprogram(t0, 6);
    t11 = (t10 + 192U);
    *((char **)t11) = &&LAB7;
    goto LAB1;

}


extern void work_m_00000000000198823763_0508150645_init()
{
	static char *pe[] = {(void *)Initial_55_0};
	static char *se[] = {(void *)sp_main,(void *)sp_clock_gen,(void *)sp_syn_clr_gen,(void *)sp_load_gen,(void *)sp_en_gen,(void *)sp_up_gen};
	xsi_register_didat("work_m_00000000000198823763_0508150645", "isim/counter_tb_isim_beh.exe.sim/work/m_00000000000198823763_0508150645.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
