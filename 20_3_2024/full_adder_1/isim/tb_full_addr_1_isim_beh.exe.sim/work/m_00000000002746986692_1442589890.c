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
static const char *ng0 = "D:/Documents/Code/Verilog/FPGA_in_class/full_adder_1/full_adder_1.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {2, 0};
static int ng4[] = {3, 0};



static void Always_27_0(char *t0)
{
    char t7[8];
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    int t10;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t0 + 1208U);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 2, t5, 1, t6, 1);
    t4 = (t0 + 1368U);
    t8 = *((char **)t4);
    memset(t9, 0, 8);
    xsi_vlog_unsigned_add(t9, 2, t7, 2, t8, 1);
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t9, 0, 0, 2);
    xsi_set_current_line(29, ng0);
    t2 = (t0 + 2088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);

LAB6:    t5 = ((char*)((ng1)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t5, 32);
    if (t10 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t10 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng3)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t10 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng4)));
    t10 = xsi_vlog_unsigned_case_compare(t4, 2, t2, 32);
    if (t10 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(30, ng0);

LAB16:    xsi_set_current_line(31, ng0);
    t6 = ((char*)((ng1)));
    t8 = (t0 + 1768);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 1);
    xsi_set_current_line(32, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

LAB9:    xsi_set_current_line(34, ng0);

LAB17:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

LAB11:    xsi_set_current_line(38, ng0);

LAB18:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng1)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

LAB13:    xsi_set_current_line(42, ng0);

LAB19:    xsi_set_current_line(43, ng0);
    t3 = ((char*)((ng2)));
    t5 = (t0 + 1768);
    xsi_vlogvar_assign_value(t5, t3, 0, 0, 1);
    xsi_set_current_line(44, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB15;

}


extern void work_m_00000000002746986692_1442589890_init()
{
	static char *pe[] = {(void *)Always_27_0};
	xsi_register_didat("work_m_00000000002746986692_1442589890", "isim/tb_full_addr_1_isim_beh.exe.sim/work/m_00000000002746986692_1442589890.didat");
	xsi_register_executes(pe);
}
