`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:45:26 11/28/2023 
// Design Name: 
// Module Name:    clk_1s 
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
module clk_1s(
		input wire clk,		// 板子的时钟，极快
		output reg clk_1s   // 需要输出的时钟信号，clk每走25_000_000个时钟周期后改变一次（改变一次，而不是clk_1s的一个时钟周期）
    );

	reg [31:0] cnt;
	initial begin
		cnt = 0;
		clk_1s = 0;
	end
	// 需要实现使得clk每走25_000_000个周期后，clk_1s改变一次
	always@(posedge clk)begin
		if(...)begin		      // need to fill
			// need to fill
		end else begin
			// need to fill
		end
	end

endmodule
