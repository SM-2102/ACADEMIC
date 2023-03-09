`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09.03.2023 22:23:18
// Design Name: 
// Module Name: mini_2_tb
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

module mini_2_tb;
  reg [2:0]a=0;
  wire [2:0]b;
  integer i=0;
  mini_2 uut(.a(a),.b(b));
  initial
    begin
      for(i=0;i<8;i=i+1)begin
        #10;
        a= a +1'b1;
      end
    end
endmodule
