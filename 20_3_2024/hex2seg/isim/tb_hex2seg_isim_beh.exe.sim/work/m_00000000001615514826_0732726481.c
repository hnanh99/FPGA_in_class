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
static const char *ng0 = "D:/Documents/Code/Verilog/FPGA_in_class/hex2seg/hex2seg.v";
static int ng1[] = {10, 0};
static unsigned int ng2[] = {121U, 0U};
static unsigned int ng3[] = {10U, 0U};
static unsigned int ng4[] = {0U, 0U};
static unsigned int ng5[] = {64U, 0U};
static unsigned int ng6[] = {1U, 0U};
static unsigned int ng7[] = {2U, 0U};
static unsigned int ng8[] = {36U, 0U};
static unsigned int ng9[] = {3U, 0U};
static unsigned int ng10[] = {48U, 0U};
static unsigned int ng11[] = {4U, 0U};
static unsigned int ng12[] = {25U, 0U};
static unsigned int ng13[] = {5U, 0U};
static unsigned int ng14[] = {18U, 0U};
static unsigned int ng15[] = {6U, 0U};
static unsigned int ng16[] = {7U, 0U};
static unsigned int ng17[] = {120U, 0U};
static unsigned int ng18[] = {8U, 0U};
static unsigned int ng19[] = {9U, 0U};
static unsigned int ng20[] = {16U, 0U};



static void Always_30_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
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
    int t18;

LAB0:    t1 = (t0 + 2528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 2848);
    *((int *)t2) = 1;
    t3 = (t0 + 2560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB7;

LAB6:    t8 = (t4 + 4);
    if (*((unsigned int *)t8) != 0)
        goto LAB7;

LAB10:    if (*((unsigned int *)t5) > *((unsigned int *)t4))
        goto LAB8;

LAB9:    t10 = (t6 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(48, ng0);

LAB39:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1448);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);

LAB40:    t2 = ((char*)((ng4)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t18 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng6)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t18 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng7)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t18 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng9)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t18 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng11)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t18 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng13)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t18 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng15)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t18 == 1)
        goto LAB53;

LAB54:    t2 = ((char*)((ng16)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t18 == 1)
        goto LAB55;

LAB56:    t2 = ((char*)((ng18)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t18 == 1)
        goto LAB57;

LAB58:    t2 = ((char*)((ng19)));
    t18 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t18 == 1)
        goto LAB59;

LAB60:
LAB62:
LAB61:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t2, 0, 0, 7);

LAB63:
LAB13:    goto LAB2;

LAB7:    t9 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB9;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB11:    xsi_set_current_line(31, ng0);

LAB14:    xsi_set_current_line(32, ng0);
    t16 = ((char*)((ng2)));
    t17 = (t0 + 1448);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 7);
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1048U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_minus(t6, 4, t3, 4, t2, 4);

LAB15:    t4 = ((char*)((ng4)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 4, t4, 4);
    if (t18 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t18 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng7)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t18 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng9)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t18 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng11)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t18 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng13)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t18 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng15)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t18 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng16)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t18 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng18)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t18 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng19)));
    t18 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t18 == 1)
        goto LAB34;

LAB35:
LAB37:
LAB36:    xsi_set_current_line(45, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 7);

LAB38:    goto LAB13;

LAB16:    xsi_set_current_line(35, ng0);
    t5 = ((char*)((ng5)));
    t7 = (t0 + 1608);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 7);
    goto LAB38;

LAB18:    xsi_set_current_line(36, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB38;

LAB20:    xsi_set_current_line(37, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB38;

LAB22:    xsi_set_current_line(38, ng0);
    t3 = ((char*)((ng10)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB38;

LAB24:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng12)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB38;

LAB26:    xsi_set_current_line(40, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB38;

LAB28:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB38;

LAB30:    xsi_set_current_line(42, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB38;

LAB32:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB38;

LAB34:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1608);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 7);
    goto LAB38;

LAB41:    xsi_set_current_line(51, ng0);
    t4 = ((char*)((ng5)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    goto LAB63;

LAB43:    xsi_set_current_line(52, ng0);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    goto LAB63;

LAB45:    xsi_set_current_line(53, ng0);
    t4 = ((char*)((ng8)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    goto LAB63;

LAB47:    xsi_set_current_line(54, ng0);
    t4 = ((char*)((ng10)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    goto LAB63;

LAB49:    xsi_set_current_line(55, ng0);
    t4 = ((char*)((ng12)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    goto LAB63;

LAB51:    xsi_set_current_line(56, ng0);
    t4 = ((char*)((ng14)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    goto LAB63;

LAB53:    xsi_set_current_line(57, ng0);
    t4 = ((char*)((ng7)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    goto LAB63;

LAB55:    xsi_set_current_line(58, ng0);
    t4 = ((char*)((ng17)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    goto LAB63;

LAB57:    xsi_set_current_line(59, ng0);
    t4 = ((char*)((ng4)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    goto LAB63;

LAB59:    xsi_set_current_line(60, ng0);
    t4 = ((char*)((ng20)));
    t5 = (t0 + 1608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 7);
    goto LAB63;

}


extern void work_m_00000000001615514826_0732726481_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000001615514826_0732726481", "isim/tb_hex2seg_isim_beh.exe.sim/work/m_00000000001615514826_0732726481.didat");
	xsi_register_executes(pe);
}
