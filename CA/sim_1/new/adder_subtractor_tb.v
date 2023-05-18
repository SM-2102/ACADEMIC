`timescale 1ns / 10ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 18.05.2023 22:53:39
// Design Name: 
// Module Name: adder_subtractor_tb
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


module adder_subtractor_tb;
    reg [3:0]a;
    reg [3:0]b;
    reg cin;
    wire [3:0]s;
    wire cout;
    adder_subtractor uut(a,b,cin,s,cout);
    initial
        begin
            a= 4'b1011;b=4'b1011;cin=0;
            #10;
            a= 4'b1010;b=4'b1010;cin=1;
            #10;
            a= 4'b1011;b=4'b1111;cin=0;
            #10;
            a= 4'b0000;b=4'b0000;cin=0;
            #10;
     
    end
endmodule
