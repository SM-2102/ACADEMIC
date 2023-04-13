`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 13.04.2023 12:21:54
// Design Name: 
// Module Name: comparator_tb
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


module comparator_tb;
    reg [3:0]a=0;
    reg [3:0]b=0;
    wire g,l,e;
    comparator uut(.a(a),.b(b),.g(g),.l(l),.e(e));
    initial
        begin
            a= 4'b1011;b=4'b1011;
            #10;
            a= 4'b1010;b=4'b1011;
            #10;
            a= 4'b1011;b=4'b1111;
            #10;
            a= 4'b0000;b=4'b0000;
            #10;
            a= 4'b0011;b=4'b1011;
            #10;
    end
endmodule
