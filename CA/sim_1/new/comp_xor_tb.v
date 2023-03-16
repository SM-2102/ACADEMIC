`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 16.03.2023 10:27:00
// Design Name: 
// Module Name: d
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

module comp_xor_tb;
  reg [3:0]a=0;
  wire [3:0]b;
  wire[3:0]c;
  integer i=0;
  comp_xor uut(.a(a),.b(b),.c(c));
  initial
    begin
      for(i=0;i<16;i=i+1)begin
        #10;
        a=a +1'b1;
      end
    end
endmodule
