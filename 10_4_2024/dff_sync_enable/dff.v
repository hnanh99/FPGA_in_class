`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:12:22 04/10/2024 
// Design Name: 
// Module Name:    dff 
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
module dff(
    input i_clk,
    input i_rst,
    input i_d,
    output reg o_q,
    input i_enable
    );
	always @(posedge i_clk or posedge i_rst) begin
        if (i_rst == 1) o_q <= 1'b0;
        else if (i_enable == 0) o_q <= 1'b0;
        else o_q <= i_d;
    end

endmodule
