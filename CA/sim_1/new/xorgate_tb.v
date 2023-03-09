`timescale 1ns/10ps

module xorgate_tb;
  reg a,b;
  wire c;
  xorgate uut(.a(a),.b(b),.c(c));
  initial
    begin
      a=0;
      b=0;
      #10;
      a=0;
      b=1;
      #10;
      a=1;
      b=0;
      #10;
      a=1;
      b=1;
      #10;
    end
endmodule
