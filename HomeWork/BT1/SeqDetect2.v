module SeqDetect2(
	w, z, clk, reset
    );
    input clk;
    input reset;
    input w;
    output z;

    localparam s0 = 3'b000
            ,  s1 = 3'b001
            ,  s2 = 3'b010
            ,  s3 = 3'b011
            ,  s4 = 3'b100;
    
    reg [2:0] state;

    always @(posedge clk or posedge reset) begin
        if (reset) begin
            state <= s0;
        end else begin
            case (state)
                s0: begin
                    if (w) begin
                        state <= s1;
                    end
                end
                s1: begin
                    if (w == 0) begin
                        state <= s2;
                    end
                end
                s2: begin
                    if (w) begin
                        state <= s4;
                    end else begin
                        state <= s3;
                    end
                end
                s3: begin
                    if (w) begin
                        state <= s4;
                    end else begin
                        state <= s0;
                    end
                end
                s4: begin
                    if (w) begin
                        state <= s1;
                    end else begin
                        state <= s2;
                    end
                end
            endcase
        end
    end

    assign z = (state == s4);

endmodule
