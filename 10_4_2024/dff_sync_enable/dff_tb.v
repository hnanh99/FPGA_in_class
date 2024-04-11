`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:14:25 04/10/2024
// Design Name:   dff
// Module Name:   D:/Documents/Code/Verilog/FPGA_in_class/10_4_2024/dff_sync_enable/dff_tb.v
// Project Name:  dff_sync_enable
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: dff
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dff_tb;

	// Inputs
	reg i_clk;
	reg i_rst;
	reg i_d;
	reg i_enable;

	// Outputs
	wire o_q;

	// Instantiate the Unit Under Test (UUT)
	dff uut (
		.i_clk(i_clk), 
		.i_rst(i_rst), 
		.i_d(i_d), 
		.o_q(o_q), 
		.i_enable(i_enable)
	);

	initial begin
		main;
	end
	task main;
		fork
			clock_gen;
			reset_gen;
			i_d_gen;
			enable_gen;
		join
	endtask
    task clock_gen;
	begin
		i_clk = 0;
		forever begin
			#10 i_clk = ~i_clk;
		end
	end
	endtask
	task reset_gen;
	begin
		i_rst = 0;
		forever begin
			#155 i_rst = 1;
			#54 i_rst = 0;
		end
	end
	endtask
	task i_d_gen;
		begin
			i_d = 0;
			forever #250 i_d = ~i_d;
		end
	endtask
	task enable_gen;
		begin
			i_enable = 0;
			forever begin
				#63
				i_enable = ~i_enable;
			end
		end
	endtask
      
endmodule

