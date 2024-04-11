`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:04:34 03/20/2024 
// Design Name: 
// Module Name:    full_adder_1 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module full_adder_1(
    i_a, i_b, i_Cin,
	 o_s,o_Cout);
	 input i_a, i_b, i_Cin;
	 output reg o_s, o_Cout;
	 reg [1:0]sum;
	 always@(*) begin
		sum = i_a + i_b + i_Cin;
		case(sum)
			0: begin
				o_s = 0;
				o_Cout = 0;
			end
			1: begin
				o_s = 1;
				o_Cout = 0;
			end
			2: begin
				o_s = 0;
				o_Cout = 1;
			end
			3: begin
				o_s = 1;
				o_Cout = 1;
			end
			endcase
	 end
	 

endmodule
