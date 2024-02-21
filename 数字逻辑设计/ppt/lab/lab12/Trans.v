`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:44:43 12/16/2022 
// Design Name: 
// Module Name:    Trans 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module Trans(
		input clk,
		input [9:0] SW,
		output [3:0] A,
		output [3:0] B,
		output [3:0] C,
		output [3:0] Out
    );
	 
	 wire [3:0] I0;
	 wire Co;
	 wire Load_C;
	 wire [3:0] In;
	 
	 // follow the graphic to fill the code
	 
	 TopModule t1();  // need to fill
	 TopModule t2();
	 
	 
	 myALU a(.A(A), .B(B), .C(I0), .S(SW[6:5]),  .Co(Co) );
	 
	 // mux 2 to 1
	 assign In = ;// need to fill
	 
	 MyRegister4b c(); // need to fill
	 Load_Gen l(); // need to fill
	 
	 Mux4to1b4 m(.s(SW[8:7]), .I0(A), .I1(B), .I2(C), .I3(4'b0000), .O(Out));
	 
endmodule
