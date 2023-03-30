`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 30.03.2023 10:31:35
// Design Name: 
// Module Name: mux_8_1
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

module mux_8_1(input [7:0]i,input[2:0]s,output y);
wire [1:0]w;
mux_4_1 m0(.i(i[3:0]),.s(s[1:0]),.y(w[0]));
mux_4_1 m1(.i(i[7:4]),.s(s[1:0]),.y(w[1]));
assign y = (~s[2]&w[0])|(s[2]&w[1]);
endmodule
