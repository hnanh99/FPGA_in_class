`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:15:32 04/10/2024 
// Design Name: 
// Module Name:    reg_file 
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
module reg_file
    #(parameter B = 8,
            W = 2
    )
    (
    input clk,
    input wr_en,
    input [W-1:0] w_addr,
    input [W-1:0] r_addr,
    input [B-1:0] w_data,
    output [B-1:0] r_data
    );
    reg [B-1:0] array_reg [2**W-1:0];

    always@(posedge clk)begin
        if(wr_en)
            array_reg[w_addr] <= w_data; 
    end

    assign r_data = array_reg[r_addr];

endmodule
