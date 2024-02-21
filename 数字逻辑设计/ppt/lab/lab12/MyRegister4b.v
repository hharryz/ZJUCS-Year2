`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:54:52 12/15/2022 
// Design Name: 
// Module Name:    MyRegister4b 
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
module MyRegister4b(
		input wire clk,
		input wire [3:0] IN,
		input wire Load_A,
		output reg [3:0] A
    );

	initial A = 4'b0000;
	
	// only can Load = 1'b1, 
	// and the posdge clk
	// the register can be passed
	always @ (?) begin		if (Load_A) ;// need to fill	end
endmodule