`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09.03.2023 21:48:04
// Design Name: 
// Module Name: mini_1_tb
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

module mini_1_tb;
  reg [3:0]a=0;
  wire z;
  integer i=0;
  mini_1 uut(.a(a),.z(z));
  initial
    begin
      for(i=0;i<16;i=i+1)begin
        #10;
        a= a +1'b1;
      end
    end
endmodule
