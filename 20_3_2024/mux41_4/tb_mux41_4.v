`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:21:30 03/20/2024
// Design Name:   mux41_4
// Module Name:   D:/Documents/Code/Verilog/FPGA_in_class/mux41_4/tb_mux41_4.v
// Project Name:  mux41_4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux41_4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_mux41_4;

	// Inputs
	reg [1:0] i_s;
	reg [3:0] i_w0;
	reg [3:0] i_w1;
	reg [3:0] i_w2;
	reg [3:0] i_w3;

	// Outputs
	wire [3:0] o_f;

	// Instantiate the Unit Under Test (UUT)
	mux41_4 uut (
		.i_s(i_s), 
		.i_w0(i_w0), 
		.i_w1(i_w1), 
		.i_w2(i_w2), 
		.i_w3(i_w3), 
		.o_f(o_f)
	);

	initial begin
		// Initialize Inputs
		i_s = 2'b00;
		i_w0 = 4'b0001;
		i_w1 = 4'b0010;
		i_w2 = 4'b0100;
		i_w3 = 4'b1000;
		forever #100 i_s = i_s + 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

