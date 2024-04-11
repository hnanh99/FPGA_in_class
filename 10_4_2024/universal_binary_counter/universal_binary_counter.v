`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:51:00 04/10/2024 
// Design Name: 
// Module Name:    universal_binary_counter 
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
module universal_binary_counter
    #(parameter N=8)(
    input clk,
    input reset,
    input syn_clr, load, en, up,
    input [N-1:0] d,
    output max_tick, min_tick,
    output wire [N-1:0] q
    );

    reg [N-1:0] r_reg, r_next;

    always@(posedge clk or posedge reset)
    begin
        if(reset) r_reg <= 0;
        else r_reg <= r_next;
    end
    always@(*)begin
        if(syn_clr) r_next = 0;
        else if(load) r_next = d;
        else if(en&up) r_next = r_reg + 1;
        else if (en&~up) r_next = r_reg - 1;
        else r_next = r_reg;
    end

    assign q = r_reg;
    assign max_tick = (r_reg==2**N-1) ? 1'b1 : 1'b0;
    assign min_tick = (r_reg==0)? 1'b1 : 1'b0;
    


endmodule
