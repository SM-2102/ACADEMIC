`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 11.05.2023 11:12:10
// Design Name: 
// Module Name: bin_gray
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


module bin_gray(input [3:0]a, output[3:0]c);
assign c[3] = a[3];
assign c[2] = a[3] ^a[2];
assign c[1] = a[2]^a[1];
assign c[0] = a[1] ^a[0];
endmodule
