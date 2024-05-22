`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    13:52:32 05/08/2024 
// Design Name: 
// Module Name:    count_10 
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
module count_10(
    clk, reset, d, q, c
    );
    input clk;
    input reset;
    input d;
    output reg [3:0] q;
    output reg c;

    reg [1:0] state;

    localparam IDLE = 2'b00,
                UP = 2'b01,
                DOWN = 2'b10;
    always @(posedge clk or posedge reset)
    begin
        if (reset)
        begin
            q <= 4'b0000;
            c <= 1'b0;
            state <= IDLE;
        end
        else begin
            case (state)
                IDLE: begin
                    if (d)
                    begin
                        state <= DOWN;
								q <= q - 1;
                    end
                    else begin
                        state <= UP;
								q <= q + 1;
                    end
                end
                UP: begin
                    if (d == 0) begin
                        if (q < 9) begin
                            q <= q + 1;
                            c <= 0;
                        end
                        else begin
                            q <= 0;
                            c <= 1;
                        end
                    end
                    else begin
                        state <= DOWN;
                    end
                end
                DOWN: begin
                    if (d == 1) begin
                        if (q > 0) begin
                            q <= q - 1;
                            c <= 0;
                        end
                        else begin
                            q <= 9;
                            c <= 1;
                        end
                    end
                    else begin
                        state <= UP;
                    end
                end
            endcase
        end
    end

endmodule
