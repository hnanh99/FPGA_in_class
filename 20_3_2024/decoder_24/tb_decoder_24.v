`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:43:53 03/20/2024
// Design Name:   decoder_24
// Module Name:   D:/Documents/Code/Verilog/FPGA_in_class/decoder_24/tb_decoder_24.v
// Project Name:  decoder_24
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decoder_24
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tb_decoder_24;

	// Inputs
	reg en;
	reg [1:0] a;

	// Outputs
	wire [3:0] y;

	// Instantiate the Unit Under Test (UUT)
	decoder_24 uut (
		.en(en), 
		.a(a), 
		.y(y)
	);

	initial begin
		// Initialize Inputs
		en = 0;
		#100 en = 1;
		a = 2'b00;
		forever #50 a = a+1;
		
		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

