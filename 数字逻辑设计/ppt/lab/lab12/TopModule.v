`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    22:57:28 12/14/2022 
// Design Name: 
// Module Name:    TopModule 
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
module TopModule(
		input clk,
		input [2:0] SW,
		input [3:0] In,
		output [3:0] A
    );
	
	wire [3:0] Al;
	wire Load_A; 
	wire [3:0] A_IN;
	wire Co;
	
	
		MyRegister4b RegA(.clk(clk), .IN(A_IN), .Load_A(Load_A), .A(A));	Load_Gen m0(); // need to fill
		Alu_4b m1( .Ctrl(), .A(A), .B(4'b0001), .S(Al), .Co(Co)); // need to fill
	
	// mux 2 to 1
	assign A_IN = // need to fill
endmodule
