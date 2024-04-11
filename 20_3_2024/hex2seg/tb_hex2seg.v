`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:04:44 03/20/2024
// Design Name:   hex2seg
// Module Name:   D:/Documents/Code/Verilog/FPGA_in_class/hex2seg/tb_hex2seg.v
// Project Name:  hex2seg
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: hex2seg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_hex2seg;

	// Inputs
	reg [3:0] i_hex;

	// Outputs
	wire [6:0] o_seg_1;
	wire [6:0] o_seg_0;

	// Instantiate the Unit Under Test (UUT)
	hex2seg uut (
		.i_hex(i_hex), 
		.o_seg_1(o_seg_1), 
		.o_seg_0(o_seg_0)
	);

	initial begin
		// Initialize Inputs
		
		i_hex = 4'd15;
		forever #20 i_hex = i_hex - 1;
	end
      
endmodule

