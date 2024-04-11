`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:33:26 04/10/2024
// Design Name:   universal_shift_reg
// Module Name:   D:/Documents/Code/Verilog/FPGA_in_class/10_4_2024/universal_shift_reg/shift_reg_tb.v
// Project Name:  universal_shift_reg
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: universal_shift_reg
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module shift_reg_tb;

	// Inputs
	reg i_clk;
	reg i_rst;
	reg [1:0] i_ctrl;
	reg [7:0] i_d;

	// Outputs
	wire [7:0] o_q;

	// Instantiate the Unit Under Test (UUT)
	universal_shift_reg uut (
		.i_clk(i_clk), 
		.i_rst(i_rst), 
		.i_ctrl(i_ctrl), 
		.i_d(i_d), 
		.o_q(o_q)
	);

	initial begin
		main;
	end
	task main;
		fork
			clock_gen;
			reset_gen;
			ctrl_gen;
			i_d_gen;
		join
	endtask
	task clock_gen;
	begin
		i_clk = 0;
		forever #10 i_clk = ~i_clk;
	end
	endtask
	task reset_gen;
	begin
		
		i_rst = 1;
		#200 i_rst = 0;
	end
	endtask
	task ctrl_gen;
	begin
		i_ctrl = 2'b00;
		#250;
		#183 i_ctrl = 2'b01;
		#183 i_ctrl = 2'b10;
		#183 i_ctrl = 2'b11;
	end
	endtask
	task i_d_gen;
	i_d = 8'b11110001;
	endtask
      
endmodule

