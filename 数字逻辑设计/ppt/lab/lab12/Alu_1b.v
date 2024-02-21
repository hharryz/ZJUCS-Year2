`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:58:05 11/13/2022 
// Design Name: 
// Module Name:    Alu_1b 
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
module Alu_1b(
	input wire A,B,Ctrl,Ci,
	output wire S,Co
    );
	 wire B2;
	xor x1(B2, B, Ctrl);
	Adder_1b ad1(
		.A(A),
		.B(B2),
		.C(Ci),
		.S(S),
		.Co(Co)
		);

endmodule
