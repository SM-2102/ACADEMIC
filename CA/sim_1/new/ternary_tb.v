`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 16.03.2023 09:51:37
// Design Name: 
// Module Name: ternary_tb
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

module ternary_tb;
  reg a,b;
  wire c;
  ternary uut(.a(a),.b(b),.c(c));
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
