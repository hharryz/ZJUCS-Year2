`timescale 1ns / 1ps
module MyMC114495(
		input [3:0]D,
		
		input LE,
		input Point,
		output reg [6:0]LED,
		output reg p
    );
	 always @(D,LE,Point)begin
		if(LE==0)begin
		LED <= 7'b1111111;
		end
		else begin
			case(D)
				4'h0:LED<=7'b0000001;
				4'h1:LED<=7'b1001111;
				4'h2:LED<=7'b0010010;
				4'h3:LED<=7'b0000110;
				4'h4:LED<=7'b1001100;
				4'h5:LED<=7'b0100100;
				4'h6:LED<=7'b0100000;
				4'h7:LED<=7'b0001111;
				4'h8:LED<=7'b0000000;
				4'h9:LED<=7'b0000100;
				4'hA:LED<=7'b0001000;
				4'hB:LED<=7'b1100000;
				4'hC:LED<=7'b0110001;
				4'hD:LED<=7'b1000010;
				4'hE:LED<=7'b0110000;
				4'hF:LED<=7'b0111000;
			endcase
		end
		p<=!Point;
end
endmodule
