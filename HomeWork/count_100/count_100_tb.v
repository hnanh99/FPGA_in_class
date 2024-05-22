`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:28:48 05/08/2024
// Design Name:   counter_100
// Module Name:   D:/Documents/Code/Verilog/FPGA_in_class/HomeWork/count_100/count_100_tb.v
// Project Name:  count_100
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: counter_100
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module count_100_tb;

	// Inputs
	reg CLK;
	reg RESET;
	reg D;

	// Outputs
	wire [6:0] Q;
	wire C;

	// Instantiate the Unit Under Test (UUT)
	counter_100 uut (
		.CLK(CLK), 
		.RESET(RESET), 
		.D(D), 
		.Q(Q), 
		.C(C)
	);

	initial begin
			main;
		end
		task main;
			fork
				clock_gen;
				RESET_gen;
				d_gen;
			join
		endtask
		task clock_gen;
		begin
			CLK = 0;
			forever begin
				#10 CLK = ~CLK;
			end
		end
		endtask
		task RESET_gen;
		begin
			RESET = 1;
			forever begin
				#55 RESET = 0;
				// #512 RESET = 1;
				// #15 RESET = 0;
			end
		end
		endtask
		task d_gen;
			begin
				wait(RESET == 0);
				D = 0;
				#2160 D = 1;

			end
		endtask
      
      
endmodule

