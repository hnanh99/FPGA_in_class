`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:57:55 04/10/2024
// Design Name:   universal_binary_counter
// Module Name:   D:/Documents/Code/Verilog/FPGA_in_class/10_4_2024/universal_binary_counter/counter_tb.v
// Project Name:  universal_binary_counter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: universal_binary_counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module counter_tb;

	// Inputs
	reg clk;
	reg reset;
	reg syn_clr;
	reg load;
	reg en;
	reg up;
	reg [7:0] d;

	// Outputs
	wire max_tick;
	wire min_tick;
	wire [7:0] q;

	// Instantiate the Unit Under Test (UUT)
	universal_binary_counter uut (
		.clk(clk), 
		.reset(reset), 
		.syn_clr(syn_clr), 
		.load(load), 
		.en(en), 
		.up(up), 
		.d(d), 
		.max_tick(max_tick), 
		.min_tick(min_tick), 
		.q(q)
	);

	initial begin
		// Initialize Inputs
		d = 8'b10011010;
		main;
	end
	task main;
		fork
			clock_gen;
			reset = 1;
			#15 reset = 0;
			syn_clr_gen;
			load_gen;
			en_gen;
			up_gen;
		join
	endtask

	task clock_gen;
	begin
		clk = 0;
		forever #5 clk = ~clk;
	end
	endtask
    task syn_clr_gen;
	begin
		syn_clr = 0;
		forever #1000 syn_clr = ~syn_clr;
	end
	endtask
	task load_gen;
	begin
		load = 0;
		forever #501 load = ~load;
	end
	endtask
	task en_gen;
	begin
		en = 0;
		forever #251 en = ~en;
	end
	endtask
	task up_gen;
	begin
		up = 0;
		forever #126 up = ~up;
	end
	endtask

endmodule

