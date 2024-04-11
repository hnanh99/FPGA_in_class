`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:18:56 03/20/2024 
// Design Name: 
// Module Name:    mux41_4 
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
module mux41_4(
    i_s,
	i_w0,
	i_w1,
    i_w2,
    i_w3,
	o_f
	);
	input [1:0] i_s; 
	input [3:0] i_w0;
	input [3:0] i_w1;
    input [3:0] i_w2;
    input [3:0] i_w3;
	output reg [3:0] o_f;
	wire [3:0] t0;
	wire [3:0] t1;
	wire [3:0] f;
	
		mux21_4 mux1(.i_s(i_s[0]),
                    .i_w0(i_w0),
                    .i_w1(i_w1),
                    .o_f(t0)
                    );
		mux21_4 mux2(.i_s(i_s[0]),.i_w0(i_w2),.i_w1(i_w3),.o_f(t1));
		mux21_4 mux3(.i_s(i_s[1]),.i_w0(t0),.i_w1(t1),.o_f(f));
		always@(*) begin
			o_f = f;
			end
	
endmodule
