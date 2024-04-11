`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:14:40 03/20/2024
// Design Name:   priority_endcoder_42
// Module Name:   D:/Documents/Code/Verilog/FPGA_in_class/priority_encoder_42/tb_priorit_encoder.v
// Project Name:  priority_encoder_42
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: priority_endcoder_42
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_priorit_encoder;

	// Inputs
	reg [3:0] i_r;

	// Outputs
	wire [2:0] o_pcode;

	// Instantiate the Unit Under Test (UUT)
	priority_endcoder_42 uut (
		.i_r(i_r), 
		.o_pcode(o_pcode)
	);

	initial begin
		// Initialize Inputs
		i_r = 4'b0000;
		forever #100 i_r = i_r + 1;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

