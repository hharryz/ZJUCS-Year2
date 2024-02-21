<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="kintex7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="clk" />
        <signal name="RST" />
        <signal name="AN(3:0)" />
        <signal name="point" />
        <signal name="LED(6:0)" />
        <signal name="XLXN_8" />
        <signal name="XLXN_9" />
        <signal name="XLXN_10(3:0)" />
        <signal name="HEXS(15:0)" />
        <signal name="points(3:0)" />
        <signal name="LES(3:0)" />
        <signal name="clkdiv(31:0)" />
        <signal name="clkdiv(18:17)" />
        <port polarity="Input" name="clk" />
        <port polarity="Input" name="RST" />
        <port polarity="Output" name="AN(3:0)" />
        <port polarity="Output" name="point" />
        <port polarity="Output" name="LED(6:0)" />
        <port polarity="Input" name="HEXS(15:0)" />
        <port polarity="Input" name="points(3:0)" />
        <port polarity="Input" name="LES(3:0)" />
        <blockdef name="MyMC114495">
            <timestamp>2022-10-27T14:37:58</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="DisplaySync">
            <timestamp>2022-10-31T22:47:6</timestamp>
            <rect width="256" x="64" y="-256" height="256" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-224" y2="-224" x1="320" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="clkdiv">
            <timestamp>2022-10-31T22:49:7</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <block symbolname="MyMC114495" name="XLXI_1">
            <blockpin signalname="XLXN_9" name="LE" />
            <blockpin signalname="XLXN_8" name="Point" />
            <blockpin signalname="XLXN_10(3:0)" name="D(3:0)" />
            <blockpin signalname="point" name="p" />
            <blockpin signalname="LED(6:0)" name="LED(6:0)" />
        </block>
        <block symbolname="DisplaySync" name="XLXI_2">
            <blockpin signalname="HEXS(15:0)" name="Hexs(15:0)" />
            <blockpin signalname="clkdiv(18:17)" name="Scan(1:0)" />
            <blockpin signalname="points(3:0)" name="Point(3:0)" />
            <blockpin signalname="LES(3:0)" name="Les(3:0)" />
            <blockpin signalname="XLXN_8" name="p" />
            <blockpin signalname="XLXN_9" name="LE" />
            <blockpin signalname="XLXN_10(3:0)" name="Hex(3:0)" />
            <blockpin signalname="AN(3:0)" name="AN(3:0)" />
        </block>
        <block symbolname="clkdiv" name="XLXI_3">
            <blockpin signalname="clk" name="clk" />
            <blockpin signalname="RST" name="rst" />
            <blockpin signalname="clkdiv(31:0)" name="clkdiv(31:0)" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="1840" y="1072" name="XLXI_1" orien="R0">
        </instance>
        <instance x="848" y="1376" name="XLXI_2" orien="R0">
        </instance>
        <instance x="832" y="544" name="XLXI_3" orien="R0">
        </instance>
        <branch name="clk">
            <wire x2="832" y1="448" y2="448" x1="800" />
        </branch>
        <iomarker fontsize="28" x="800" y="448" name="clk" orien="R180" />
        <branch name="RST">
            <wire x2="832" y1="512" y2="512" x1="800" />
        </branch>
        <iomarker fontsize="28" x="800" y="512" name="RST" orien="R180" />
        <branch name="AN(3:0)">
            <wire x2="1264" y1="1344" y2="1344" x1="1232" />
        </branch>
        <iomarker fontsize="28" x="1264" y="1344" name="AN(3:0)" orien="R0" />
        <branch name="point">
            <wire x2="2256" y1="912" y2="912" x1="2224" />
        </branch>
        <iomarker fontsize="28" x="2256" y="912" name="point" orien="R0" />
        <branch name="LED(6:0)">
            <wire x2="2256" y1="1040" y2="1040" x1="2224" />
        </branch>
        <iomarker fontsize="28" x="2256" y="1040" name="LED(6:0)" orien="R0" />
        <branch name="XLXN_8">
            <wire x2="1536" y1="1152" y2="1152" x1="1232" />
            <wire x2="1536" y1="976" y2="1152" x1="1536" />
            <wire x2="1840" y1="976" y2="976" x1="1536" />
        </branch>
        <branch name="XLXN_9">
            <wire x2="1520" y1="1216" y2="1216" x1="1232" />
            <wire x2="1520" y1="912" y2="1216" x1="1520" />
            <wire x2="1840" y1="912" y2="912" x1="1520" />
        </branch>
        <branch name="XLXN_10(3:0)">
            <wire x2="1552" y1="1280" y2="1280" x1="1232" />
            <wire x2="1552" y1="1040" y2="1280" x1="1552" />
            <wire x2="1840" y1="1040" y2="1040" x1="1552" />
        </branch>
        <branch name="HEXS(15:0)">
            <wire x2="848" y1="1152" y2="1152" x1="816" />
        </branch>
        <iomarker fontsize="28" x="816" y="1152" name="HEXS(15:0)" orien="R180" />
        <branch name="points(3:0)">
            <wire x2="848" y1="1280" y2="1280" x1="816" />
        </branch>
        <iomarker fontsize="28" x="816" y="1280" name="points(3:0)" orien="R180" />
        <branch name="LES(3:0)">
            <wire x2="848" y1="1344" y2="1344" x1="816" />
        </branch>
        <iomarker fontsize="28" x="816" y="1344" name="LES(3:0)" orien="R180" />
        <branch name="clkdiv(31:0)">
            <wire x2="1360" y1="896" y2="896" x1="512" />
            <wire x2="512" y1="896" y2="1216" x1="512" />
            <wire x2="512" y1="1216" y2="1824" x1="512" />
            <wire x2="1360" y1="448" y2="448" x1="1216" />
            <wire x2="1360" y1="448" y2="896" x1="1360" />
        </branch>
        <bustap x2="608" y1="1216" y2="1216" x1="512" />
        <branch name="clkdiv(18:17)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="728" y="1216" type="branch" />
            <wire x2="736" y1="1216" y2="1216" x1="608" />
            <wire x2="848" y1="1216" y2="1216" x1="736" />
        </branch>
    </sheet>
</drawing>