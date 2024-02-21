`timescale 1ns / 1ps
module Mux4to1(
		input [1:0]s,
		input I0,
		input I1,
		input I2,
		input I3,
		output reg O
    );

	// �����˼·������s[1:0]���������λ������γ���С���������ͬ������
	// �о����Կ�����case��ʵ��
	// �л��л�����ʱ��������뷢���ı��ʱ������
	// ������������Ϊs��I0-3
	always@(s,I0,I1,I2,I3)begin
		case(s)
			// ������ֵ����ʵ��
			2'b00:O<=I0;
			2'b01:O<=I1;
			2'b10:O<=I2;
			2'b11:O<=I3;
		endcase
	end

endmodule
