`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:18:08 03/20/2024
// Design Name:   full_adder_1
// Module Name:   D:/Documents/Code/Verilog/FPGA_in_class/full_adder_1/tb_full_addr_1.v
// Project Name:  full_adder_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: full_adder_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_full_addr_1;

	// Inputs
	reg i_a;
	reg i_b;
	reg i_Cin;

	// Outputs
	wire o_s;
	wire o_Cout;

	// Instantiate the Unit Under Test (UUT)
	full_adder_1 uut (
		.i_a(i_a), 
		.i_b(i_b), 
		.i_Cin(i_Cin), 
		.o_s(o_s), 
		.o_Cout(o_Cout)
	);
	reg [2:0] temp;
	initial begin
		// Initialize Inputs
		temp =0;
		i_a = temp[2];
		i_b = temp[1];
		i_Cin = temp[0];
		
		// Wait 100 ns for global reset to finish
		forever #2 begin 
		i_a = temp[2];
		i_b = temp[1];
		i_Cin = temp[0];
		temp = temp+1;
		end
        
		// Add stimulus here

	end
      
endmodule

