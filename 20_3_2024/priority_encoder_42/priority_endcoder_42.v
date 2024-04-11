`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:03:06 03/20/2024 
// Design Name: 
// Module Name:    priority_endcoder_42 
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
module priority_endcoder_42(
    i_r,
    o_pcode);
    input [3:0] i_r;
    output reg [2:0] o_pcode;
    always @(*) begin
        if (i_r[3] == 1) o_pcode = 3'b100;
        else if (i_r[2] == 1) o_pcode = 3'b011;
        else if (i_r[1] == 1) o_pcode = 3'b010;
        else if (i_r[0] == 1) o_pcode = 3'b001;
        else o_pcode = 3'b000;
    end


endmodule
