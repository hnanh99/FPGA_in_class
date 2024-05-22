`timescale 1ns / 1ps
module counter_100(
    CLK, RESET, D, Q, C
    );
    input CLK;
    input RESET;
    input D;
    output reg [6:0] Q;
    output wire C;

    wire [3:0] q1, q2;
    wire c1, c2;

    count_10 uut1 (
        .clk(CLK), 
        .reset(RESET), 
        .d(D), 
        .q(q1), 
        .c(c1)
    );
    count_10 uut2(
        .clk(c1), 
        .reset(RESET), 
        .d(D), 
        .q(q2), 
        .c(c2)
    );

    assign C = c2&c1;
    always@* begin
        Q = q2*10+q1;
    end

endmodule
