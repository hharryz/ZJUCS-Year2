`timescale 1ns / 1ps
module Mux4to1(
		input [1:0]s,
		input I0,
		input I1,
		input I2,
		input I3,
		output reg O
    );

	// 这题的思路就是用s[1:0]向量里的四位组合来形成最小项来输出不同的输入
	// 感觉可以考虑用case来实现
	// 切换切换器的时候或者输入发生改变的时候运行
	// 敏感区域设置为s和I0-3
	always@(s,I0,I1,I2,I3)begin
		case(s)
			// 按照真值表来实现
			2'b00:O<=I0;
			2'b01:O<=I1;
			2'b10:O<=I2;
			2'b11:O<=I3;
		endcase
	end

endmodule
