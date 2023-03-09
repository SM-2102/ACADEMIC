`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09.03.2023 21:30:38
// Design Name: 
// Module Name: comp_tb
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

`timescale 1ns/10ps

module comp_tb;
  reg [3:0]a=0;
  wire [3:0]b;
  integer i=0;
  comp uut(.a(a),.b(b));
  initial
    begin
      for(i=0;i<16;i=i+1)begin
        #10;
        a=a +1'b1;
      end
    end
endmodule
