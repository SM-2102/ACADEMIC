module comp(input [3:0]a, output[3:0]b);
assign b = ~a + 1'b1;
endmodule
