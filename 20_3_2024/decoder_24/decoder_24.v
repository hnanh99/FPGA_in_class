`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:35:23 03/20/2024 
// Design Name: 
// Module Name:    decoder_24 
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
module decoder_24(
	en,
    a,
    y
    );
    input en;
    input [1:0] a;
    output reg [3:0] y;
    always@(*) begin
        if(en == 0) 
            y = 4'b0000;
        else begin
            case (a)
                2'b00: y = 4'b0001;
                2'b01: y = 4'b0010;
                2'b10: y = 4'b0100;
                2'b11: y = 4'b1000;
                default: y = 4'b0000;
            endcase
        end
    end


endmodule
