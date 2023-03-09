`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 09.03.2023 21:47:37
// Design Name: 
// Module Name: mini_1
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


module mini_1(input [3:0]a,output z);
  assign z = (~a[2]&~a[1])|(~a[3]&~a[1]&~a[0])|(~a[3]&~a[2]&a[0])|(a[3]&a[2]&a[1]&a[0]);
endmodule