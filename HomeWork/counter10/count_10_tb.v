`timescale 1ns / 1ps

module count_10_tb;

	// Inputs
	reg clk;
	reg reset;
	reg d;

	// Outputs
	wire [3:0] q;
	wire c;

	// Instantiate the Unit Under Test (UUT)
	count_10 uut (
		.clk(clk), 
		.reset(reset), 
		.d(d), 
		.q(q), 
		.c(c)
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
				d = 0;
				#256 d = 1;
				#256 d = 0;
				#25 d = 1;
			end
		endtask
      
endmodule

