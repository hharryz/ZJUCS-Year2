<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="kintex7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="A(3:0)" />
        <signal name="B(3:0)" />
        <signal name="S(1:0)" />
        <signal name="S(0)" />
        <signal name="XLXN_7" />
        <signal name="XLXN_8(3:0)" />
        <signal name="XLXN_9(3:0)" />
        <signal name="XLXN_10(3:0)" />
        <signal name="XLXN_11" />
        <signal name="C(3:0)" />
        <signal name="Co" />
        <signal name="XLXN_13" />
        <port polarity="Input" name="A(3:0)" />
        <port polarity="Input" name="B(3:0)" />
        <port polarity="Input" name="S(1:0)" />
        <port polarity="Output" name="C(3:0)" />
        <port polarity="Output" name="Co" />
        <blockdef name="myOr2b4">
            <timestamp>2022-11-13T13:18:18</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="myAnd2b4">
            <timestamp>2022-11-13T13:18:12</timestamp>
            <rect width="256" x="64" y="-128" height="128" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-108" height="24" />
            <line x2="384" y1="-96" y2="-96" x1="320" />
        </blockdef>
        <blockdef name="Mux4to1b4">
            <timestamp>2022-11-13T13:20:53</timestamp>
            <rect width="256" x="64" y="-320" height="320" />
            <rect width="64" x="0" y="-300" height="24" />
            <line x2="0" y1="-288" y2="-288" x1="64" />
            <rect width="64" x="0" y="-236" height="24" />
            <line x2="0" y1="-224" y2="-224" x1="64" />
            <rect width="64" x="0" y="-172" height="24" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <rect width="64" x="320" y="-300" height="24" />
            <line x2="384" y1="-288" y2="-288" x1="320" />
        </blockdef>
        <blockdef name="Alu_4b">
            <timestamp>2022-11-13T13:18:38</timestamp>
            <rect width="256" x="64" y="-192" height="192" />
            <line x2="0" y1="-160" y2="-160" x1="64" />
            <rect width="64" x="0" y="-108" height="24" />
            <line x2="0" y1="-96" y2="-96" x1="64" />
            <rect width="64" x="0" y="-44" height="24" />
            <line x2="0" y1="-32" y2="-32" x1="64" />
            <line x2="384" y1="-160" y2="-160" x1="320" />
            <rect width="64" x="320" y="-44" height="24" />
            <line x2="384" y1="-32" y2="-32" x1="320" />
        </blockdef>
        <blockdef name="Mux4to1">
            <timestamp>2022-11-13T13:22:42</timestamp>
            <line x2="0" y1="32" y2="32" x1="64" />
            <line x2="0" y1="96" y2="96" x1="64" />
            <line x2="0" y1="160" y2="160" x1="64" />
            <line x2="0" y1="224" y2="224" x1="64" />
            <rect width="64" x="0" y="276" height="24" />
            <line x2="0" y1="288" y2="288" x1="64" />
            <line x2="384" y1="32" y2="32" x1="320" />
            <rect width="256" x="64" y="-64" height="384" />
        </blockdef>
        <blockdef name="gnd">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-96" x1="64" />
            <line x2="52" y1="-48" y2="-48" x1="76" />
            <line x2="60" y1="-32" y2="-32" x1="68" />
            <line x2="40" y1="-64" y2="-64" x1="88" />
            <line x2="64" y1="-64" y2="-80" x1="64" />
            <line x2="64" y1="-128" y2="-96" x1="64" />
        </blockdef>
        <block symbolname="Mux4to1b4" name="XLXI_4">
            <blockpin signalname="S(1:0)" name="s(1:0)" />
            <blockpin signalname="XLXN_10(3:0)" name="I0(3:0)" />
            <blockpin signalname="XLXN_10(3:0)" name="I1(3:0)" />
            <blockpin signalname="XLXN_8(3:0)" name="I2(3:0)" />
            <blockpin signalname="XLXN_9(3:0)" name="I3(3:0)" />
            <blockpin signalname="C(3:0)" name="O(3:0)" />
        </block>
        <block symbolname="Alu_4b" name="XLXI_5">
            <blockpin signalname="S(0)" name="Ctrl" />
            <blockpin signalname="A(3:0)" name="A(3:0)" />
            <blockpin signalname="B(3:0)" name="B(3:0)" />
            <blockpin signalname="XLXN_7" name="Co" />
            <blockpin signalname="XLXN_10(3:0)" name="S(3:0)" />
        </block>
        <block symbolname="Mux4to1" name="XLXI_6">
            <blockpin signalname="XLXN_7" name="I0" />
            <blockpin signalname="XLXN_7" name="I1" />
            <blockpin signalname="XLXN_11" name="I2" />
            <blockpin signalname="XLXN_11" name="I3" />
            <blockpin signalname="S(1:0)" name="s(1:0)" />
            <blockpin signalname="Co" name="O" />
        </block>
        <block symbolname="myOr2b4" name="XLXI_1">
            <blockpin signalname="A(3:0)" name="A(3:0)" />
            <blockpin signalname="B(3:0)" name="B(3:0)" />
            <blockpin signalname="XLXN_9(3:0)" name="C(3:0)" />
        </block>
        <block symbolname="myAnd2b4" name="XLXI_2">
            <blockpin signalname="A(3:0)" name="A(3:0)" />
            <blockpin signalname="B(3:0)" name="B(3:0)" />
            <blockpin signalname="XLXN_8(3:0)" name="C(3:0)" />
        </block>
        <block symbolname="gnd" name="XLXI_9">
            <blockpin signalname="XLXN_11" name="G" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="2496" y="928" name="XLXI_4" orien="R0">
        </instance>
        <instance x="1376" y="688" name="XLXI_5" orien="R0">
        </instance>
        <instance x="2496" y="1568" name="XLXI_6" orien="R0">
        </instance>
        <branch name="A(3:0)">
            <wire x2="1008" y1="592" y2="592" x1="512" />
            <wire x2="1376" y1="592" y2="592" x1="1008" />
            <wire x2="1008" y1="592" y2="1104" x1="1008" />
            <wire x2="1008" y1="1104" y2="1440" x1="1008" />
            <wire x2="1168" y1="1440" y2="1440" x1="1008" />
            <wire x2="1184" y1="1104" y2="1104" x1="1008" />
        </branch>
        <branch name="B(3:0)">
            <wire x2="864" y1="656" y2="656" x1="512" />
            <wire x2="1376" y1="656" y2="656" x1="864" />
            <wire x2="864" y1="656" y2="1168" x1="864" />
            <wire x2="864" y1="1168" y2="1504" x1="864" />
            <wire x2="1168" y1="1504" y2="1504" x1="864" />
            <wire x2="1184" y1="1168" y2="1168" x1="864" />
        </branch>
        <instance x="1168" y="1536" name="XLXI_1" orien="R0">
        </instance>
        <instance x="1184" y="1200" name="XLXI_2" orien="R0">
        </instance>
        <branch name="S(1:0)">
            <wire x2="992" y1="272" y2="272" x1="528" />
            <wire x2="2304" y1="272" y2="272" x1="992" />
            <wire x2="2304" y1="272" y2="640" x1="2304" />
            <wire x2="2304" y1="640" y2="1856" x1="2304" />
            <wire x2="2496" y1="1856" y2="1856" x1="2304" />
            <wire x2="2496" y1="640" y2="640" x1="2304" />
        </branch>
        <iomarker fontsize="28" x="528" y="272" name="S(1:0)" orien="R180" />
        <iomarker fontsize="28" x="512" y="592" name="A(3:0)" orien="R180" />
        <iomarker fontsize="28" x="512" y="656" name="B(3:0)" orien="R180" />
        <branch name="S(0)">
            <attrtext style="alignment:SOFT-LEFT;fontsize:28;fontname:Arial" attrname="Name" x="992" y="392" type="branch" />
            <wire x2="992" y1="368" y2="528" x1="992" />
            <wire x2="1376" y1="528" y2="528" x1="992" />
        </branch>
        <bustap x2="992" y1="272" y2="368" x1="992" />
        <branch name="XLXN_8(3:0)">
            <wire x2="2016" y1="1104" y2="1104" x1="1568" />
            <wire x2="2016" y1="832" y2="1104" x1="2016" />
            <wire x2="2496" y1="832" y2="832" x1="2016" />
        </branch>
        <branch name="XLXN_9(3:0)">
            <wire x2="2048" y1="1440" y2="1440" x1="1552" />
            <wire x2="2048" y1="896" y2="1440" x1="2048" />
            <wire x2="2496" y1="896" y2="896" x1="2048" />
        </branch>
        <branch name="XLXN_10(3:0)">
            <wire x2="2128" y1="656" y2="656" x1="1760" />
            <wire x2="2128" y1="656" y2="704" x1="2128" />
            <wire x2="2496" y1="704" y2="704" x1="2128" />
            <wire x2="2128" y1="704" y2="768" x1="2128" />
            <wire x2="2496" y1="768" y2="768" x1="2128" />
        </branch>
        <branch name="C(3:0)">
            <wire x2="2912" y1="640" y2="640" x1="2880" />
        </branch>
        <iomarker fontsize="28" x="2912" y="640" name="C(3:0)" orien="R0" />
        <branch name="Co">
            <wire x2="2912" y1="1600" y2="1600" x1="2880" />
        </branch>
        <iomarker fontsize="28" x="2912" y="1600" name="Co" orien="R0" />
        <branch name="XLXN_7">
            <wire x2="2032" y1="528" y2="528" x1="1760" />
            <wire x2="2032" y1="528" y2="1600" x1="2032" />
            <wire x2="2032" y1="1600" y2="1648" x1="2032" />
            <wire x2="2032" y1="1648" y2="1664" x1="2032" />
            <wire x2="2496" y1="1664" y2="1664" x1="2032" />
            <wire x2="2496" y1="1600" y2="1600" x1="2032" />
        </branch>
        <branch name="XLXN_11">
            <wire x2="2192" y1="1728" y2="1728" x1="2096" />
            <wire x2="2192" y1="1728" y2="1792" x1="2192" />
            <wire x2="2496" y1="1792" y2="1792" x1="2192" />
            <wire x2="2496" y1="1728" y2="1728" x1="2192" />
            <wire x2="2096" y1="1728" y2="1776" x1="2096" />
        </branch>
        <instance x="2032" y="1904" name="XLXI_9" orien="R0" />
    </sheet>
</drawing>