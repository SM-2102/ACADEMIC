`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 30.03.2023 10:21:55
// Design Name: 
// Module Name: decoder_tb
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


module decoder_tb;
  reg [2:0]i=0;
  wire [7:0]y;
  integer j=0;
  decoder uut(.i(i),.y(y));
  initial
    begin
      for(j=0;j<8;j=j+1)begin
      #10;
       i=i+1'b1;       
      end
    end
endmodule
