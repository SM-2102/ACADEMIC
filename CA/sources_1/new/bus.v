`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 16.03.2023 10:59:47
// Design Name: 
// Module Name: bus
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


module bus(input [3:0]i, input c, output [3:0]z);
assign z[3] = (i[3]&c)|(~c & 1'bz);
assign z[2] = (i[2]&c)|(~c & 1'bz);
assign z[1] = (i[1]&c)|(~c & 1'bz);
assign z[0] = (i[0]&c)|(~c & 1'bz);
endmodule
