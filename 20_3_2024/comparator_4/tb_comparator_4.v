`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:02:03 03/20/2024
// Design Name:   comparator_4
// Module Name:   D:/Documents/Code/Verilog/FPGA_in_class/comparator_4/tb_comparator_4.v
// Project Name:  comparator_4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comparator_4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_comparator_4;

	// Inputs
	reg [3:0] i0;
	reg [3:0] i1;

	// Outputs
	wire eq;

	// Instantiate the Unit Under Test (UUT)
	comparator_4 uut (
		.i0(i0), 
		.i1(i1), 
		.eq(eq)
	);

	initial begin
		// Initialize Inputs
		i0 = 4'b0000;
		i1 = 4'b0000;
		
		// Wait 100 ns for global reset to finish
		#100 begin
		i0 = 4'b1111;
		i1 = 4'b1111;
		end
        
		  #100 begin
		i0 = 4'b1111;
		i1 = 4'b1101;
		end
		// Add stimulus here

	end
      
endmodule

