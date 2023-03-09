`timescale 1ns/10ps

module notgate_tb;
  reg a;
  wire b;
  notgate uut(.a(a),.b(b));
  initial
    begin
      a=0;
      #10;
      a=1;
      #10;
    end
endmodule
