`timescale 1ns / 1ps

module Mux4to1b4(
		input [1:0]	s,
		input [3:0] I0,
		input [3:0] I1,
		input [3:0] I2,
		input [3:0] I3,
		output reg [3:0] O
    );

	always @(s,I0,I1,I2,I3) begin
		case(s)
			2'b00:O<=I0;
			2'b01:O<=I1;
			2'b10:O<=I2;
			2'b11:O<=I3;
		endcase
	end
endmodule
