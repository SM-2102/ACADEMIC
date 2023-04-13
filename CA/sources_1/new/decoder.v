`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 30.03.2023 10:21:18
// Design Name: 
// Module Name: decoder
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


module decoder(input[2:0]i,input[7:0]y);
assign y[0] = (~i[0]&~i[1]&~i[2]);
assign y[1] = (i[0]&~i[1]&~i[2]);
assign y[2] = (~i[0]&i[1]&~i[2]);
assign y[3] = (i[0]&i[1]&~i[2]);
assign y[4] = (~i[0]&~i[1]&i[2]);
assign y[5] = (i[0]&~i[1]&i[2]);
assign y[6] = (~i[0]&i[1]&i[2]);
assign y[7] = (i[0]&i[1]&i[2]);
endmodule
