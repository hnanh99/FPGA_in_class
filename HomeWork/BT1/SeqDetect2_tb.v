`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:58:23 05/08/2024
// Design Name:   SeqDetect2
// Module Name:   D:/Documents/Code/Verilog/Project/HomeWork/BT1/SeqDetect2_tb.v
// Project Name:  BT1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: SeqDetect2
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SeqDetect2_tb;

	// Inputs
	reg w;
	reg clk;
	reg reset;

	// Outputs
	wire z;

	// Instantiate the Unit Under Test (UUT)
	SeqDetect2 uut (
		.w(w), 
		.z(z), 
		.clk(clk), 
		.reset(reset)
	);

	initial begin
			main;
		end
		task main;
			fork
				clock_gen;
				reset_gen;
				z_gen;
			join
		endtask
		task clock_gen;
		begin
			clk = 0;
			forever begin
				#10 clk = ~clk;
			end
		end
		endtask
		task reset_gen;
		begin
			reset = 1;
			forever begin
				#55 reset = 0;
				#512 reset = 1;
				#15 reset = 0;
			end
		end
		endtask
		task z_gen;
			begin
				wait(reset == 0);
				w = 0;
				#9 w = 1;
				#20	w = 0;
				#20	w = 0;
				#20	w = 0;
				#20	w = 0;
				#20	w = 1;
				#20	w = 1;
				#20	w = 0;
				#20	w = 1;
				#20	w = 1;
				#20	w = 0;
				#20	w = 0;
				#20	w = 1;
				#20	w = 0;
				#20	w = 1;
				#20	w = 0;
				#20	w = 0;
				#20	w = 1;
				#20	w = 0;
				#20	w = 0;
				#20	w = 0;
				#20	w = 0;
				#20	w = 1;
				#20	w = 0;
				#20	w = 1;
				#20	w = 1;
			end
		endtask
		
endmodule

