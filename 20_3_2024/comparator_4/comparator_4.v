`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:56:35 03/20/2024 
// Design Name: 
// Module Name:    comparator_4 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module comparator_4(
    i0,i1,
	 eq);
	input [3:0]i0,i1;
	output eq;
	wire eq1,eq2,eq3,eq0;
	comparator_1 c0(.i0(i0[0]),.i1(i1[0]),.eq(eq0));
	comparator_1 c1(.i0(i0[1]),.i1(i1[1]),.eq(eq1));
	comparator_1 c2(.i0(i0[2]),.i1(i1[2]),.eq(eq2));
	comparator_1 c3(.i0(i0[3]),.i1(i1[3]),.eq(eq3));
	assign eq = eq0 & eq1 & eq2 & eq3;

endmodule
