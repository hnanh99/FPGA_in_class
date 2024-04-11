`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:24:11 04/10/2024 
// Design Name: 
// Module Name:    universal_shift_reg 
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
module universal_shift_reg
	#(parameter N = 8)
    (
    i_clk, i_rst, i_ctrl, i_d,
    o_q
    );
    input i_clk;
    input i_rst;
    input [1:0] i_ctrl;
    input [N-1 : 0] i_d;
    output wire [N-1:0] o_q;

    
    reg [N-1:0] r_next, r_reg;

    always @(posedge i_clk or posedge i_rst) begin
       if(i_rst == 1) r_reg <= 0;
       else r_reg <= r_next; 
    end

    always @(*) begin
        case(i_ctrl)
            2'b00: r_next = r_reg;
            2'b01: r_next = {r_reg[N-2:0],i_d[0]};
            2'b10: r_next = {i_d[N-1],r_reg[N-1:1]};
            default: r_next = i_d;
        endcase
    end

    assign o_q = r_reg;

endmodule
