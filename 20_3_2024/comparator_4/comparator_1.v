`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:53:05 03/20/2024 
// Design Name: 
// Module Name:    comparator_1 
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
module comparator_1(
    i0,
	 i1,
	 eq);
	 input i0,i1;
	 output eq;
	 wire p0,p1;
	 assign p0 = ~i1 & ~i0;
	 assign p1 = i1 & i0;
	 assign eq = p1 | p0;


endmodule
