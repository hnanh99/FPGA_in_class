`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:53:29 03/20/2024 
// Design Name: 
// Module Name:    hex2seg 
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
module hex2seg(
	i_hex,
	o_seg_1, 
	o_seg_0
    );
input [3:0] i_hex;
output reg [6:0] o_seg_1;
output reg [6:0] o_seg_0;

always @(*) begin
    if(i_hex > 10) begin
        o_seg_1 = 7'b1111001; // "1" 

        case(i_hex-4'd10)
        4'b0000: o_seg_0 = 7'b1000000; // "0"     
        4'b0001: o_seg_0 = 7'b1111001; // "1" 
        4'b0010: o_seg_0 = 7'b0100100; // "2" 
        4'b0011: o_seg_0 = 7'b0110000; // "3" 
        4'b0100: o_seg_0 = 7'b0011001; // "4" 
        4'b0101: o_seg_0 = 7'b0010010; // "5" 
        4'b0110: o_seg_0 = 7'b0000010; // "6" 
        4'b0111: o_seg_0 = 7'b1111000; // "7" 
        4'b1000: o_seg_0 = 7'b0000000; // "8"     
        4'b1001: o_seg_0 = 7'b0010000; // "9" 
        default: o_seg_0 = 7'b1000000; // "0"
        endcase
    end
    else begin
        o_seg_1 = 7'b1000000; // "0"
        case(i_hex)
        4'b0000: o_seg_0 = 7'b1000000; // "0"     
        4'b0001: o_seg_0 = 7'b1111001; // "1" 
        4'b0010: o_seg_0 = 7'b0100100; // "2" 
        4'b0011: o_seg_0 = 7'b0110000; // "3" 
        4'b0100: o_seg_0 = 7'b0011001; // "4" 
        4'b0101: o_seg_0 = 7'b0010010; // "5" 
        4'b0110: o_seg_0 = 7'b0000010; // "6" 
        4'b0111: o_seg_0 = 7'b1111000; // "7" 
        4'b1000: o_seg_0 = 7'b0000000; // "8"     
        4'b1001: o_seg_0 = 7'b0010000; // "9" 
        default: o_seg_0 = 7'b1000000; // "0"
        endcase
    end
end
endmodule
