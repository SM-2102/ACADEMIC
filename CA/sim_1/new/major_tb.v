`timescale 1ns/10ps

module major_tb;
  reg [4:0]sw=0;
  wire led;
  integer i=0;
  major uut(.sw(sw),.led(led));
  initial
    begin
      for(i=0;i<32;i=i+1)begin
      #10;
        sw= sw +1'b1;
      end
    end
endmodule
