`timescale 1ns/10ps

module tristate_tb;
  reg a,en;
  wire b;
  tristate uut(.en(en),.a(a),.b(b));
  initial
    begin
      en=0;
      a=0;
      #10;
      en=0;
      a=1;
      #10;
      en=1;
      a=0;
      #10;
      en=1;
      a=1;
      #10;
    end
endmodule
