`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:15:42 03/20/2024
// Design Name:   mux21_4
// Module Name:   D:/Documents/Code/Verilog/FPGA_in_class/mux21_4/tb_mux21_4.v
// Project Name:  mux21_4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux21_4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_mux21_4;

	// Inputs
	reg i_s;
	reg [3:0] i_w0;
	reg [3:0] i_w1;

	// Outputs
	wire [3:0] o_f;

	// Instantiate the Unit Under Test (UUT)
	mux21_4 uut (
		.i_s(i_s), 
		.i_w0(i_w0), 
		.i_w1(i_w1), 
		.o_f(o_f)
	);

	initial begin
		// Initialize Inputs
		i_s = 0;
		i_w0 = 4'b0101;
		i_w1 = 4'b1110;
	
		// Wait 100 ns for global reset to finish
		forever #100 i_s = ~i_s;
        
		// Add stimulus here

	end
      
endmodule

