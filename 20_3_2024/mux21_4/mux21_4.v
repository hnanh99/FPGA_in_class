`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:10:24 03/20/2024 
// Design Name: 
// Module Name:    mux21_4 
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
module mux21_4(
    i_s,
	i_w0,
	i_w1,
	o_f
	);
	input i_s; 
	input [3:0] i_w0;
	input [3:0] i_w1;
	output reg [3:0] o_f;

	always@(*) begin
		if (i_s == 1) begin 
			o_f = i_w1;
		end
		else begin
			o_f = i_w0;
		end
	end
	

endmodule
