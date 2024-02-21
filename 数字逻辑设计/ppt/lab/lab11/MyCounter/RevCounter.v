`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:41:35 11/28/2023 
// Design Name: 
// Module Name:    RevCounter 
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
module RevCounter(
		input wire clk,         // 时钟信号（极快）
		input wire s,			// 自增或自减（1为自减，0为自增）
		output reg [15:0] cnt,  // 计数
		output wire Rc			// 自增到FFFF之后或自减到0000时
    );
	 
	 wire clk_1s;
	 
	 clk_1s clk_count(.clk(clk), .clk_1s(clk_1s));
	 assign Rc = (~s&(~|cnt)) | (s & (&cnt));
	 initial begin
		cnt = 0;
	 end
	 
	 // need to fill
	 // 需要实现每1scnt自增或自减（根据s的不同）
	 
endmodule
