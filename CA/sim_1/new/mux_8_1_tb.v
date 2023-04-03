`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 30.03.2023 10:31:58
// Design Name: 
// Module Name: mux_8_1_tb
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


module mux_8_1_tb;
  reg [7:0]i=8'b10110110;
  reg [2:0]s=0;
  wire y;
  integer j=0;
  mux_8_1 uut(.i(i),.s(s),.y(y));
  initial
    begin
      for(j=0;j<8;j=j+1)begin
      #10;
       s=s+1'b1;       
      end
    end
endmodule

