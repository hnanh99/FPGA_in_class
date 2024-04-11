`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:19:20 04/10/2024
// Design Name:   reg_file
// Module Name:   D:/Documents/Code/Verilog/FPGA_in_class/10_4_2024/reg_file/reg_file_tb.v
// Project Name:  reg_file
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: reg_file
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module reg_file_tb;

	// Inputs
	reg clk;
	reg wr_en;
	reg [1:0] w_addr;
	reg [1:0] r_addr;
	reg [7:0] w_data;

	// Outputs
	wire [7:0] r_data;

	// Instantiate the Unit Under Test (UUT)
	reg_file uut (
		.clk(clk), 
		.wr_en(wr_en), 
		.w_addr(w_addr), 
		.r_addr(r_addr), 
		.w_data(w_data), 
		.r_data(r_data)
	);

	initial begin
		main;
	end
	task main;
		clock_gen;
		write;
		write;
		read;
	endtask
    task clock_gen;
	begin
		clk = 0;
		forever #10 clk = ~i_clk;
	end
	endtask
	task write;
	input [7:0] data;
	input [1:0] addr;
	
	endtask
	task read;
	endtask
endmodule

