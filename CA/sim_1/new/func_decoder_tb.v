`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 13.04.2023 10:26:24
// Design Name: 
// Module Name: func_decoder_tb
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


module func_decoder_tb;
  reg [2:0]i=0;
  wire [3:1]F;
  integer j=0;
  func_decoder uut(.i(i),.F(F));
  initial
    begin
      for(j=0;j<8;j=j+1)begin
      #10;
       i=i+1'b1;       
      end
    end
endmodule
