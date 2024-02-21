<?xml version="1.0" encoding="UTF-8"?>
<drawing version="7">
    <attr value="kintex7" name="DeviceFamilyName">
        <trait delete="all:0" />
        <trait editname="all:0" />
        <trait edittrait="all:0" />
    </attr>
    <netlist>
        <signal name="A" />
        <signal name="C" />
        <signal name="XLXN_7" />
        <signal name="XLXN_8" />
        <signal name="XLXN_9" />
        <signal name="Co" />
        <signal name="S" />
        <signal name="XLXN_12" />
        <signal name="B" />
        <port polarity="Input" name="A" />
        <port polarity="Input" name="C" />
        <port polarity="Output" name="Co" />
        <port polarity="Output" name="S" />
        <port polarity="Input" name="B" />
        <blockdef name="xor2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="60" y1="-128" y2="-128" x1="0" />
            <line x2="208" y1="-96" y2="-96" x1="256" />
            <arc ex="44" ey="-144" sx="48" sy="-48" r="56" cx="16" cy="-96" />
            <arc ex="64" ey="-144" sx="64" sy="-48" r="56" cx="32" cy="-96" />
            <line x2="64" y1="-144" y2="-144" x1="128" />
            <line x2="64" y1="-48" y2="-48" x1="128" />
            <arc ex="128" ey="-144" sx="208" sy="-96" r="88" cx="132" cy="-56" />
            <arc ex="208" ey="-96" sx="128" sy="-48" r="88" cx="132" cy="-136" />
        </blockdef>
        <blockdef name="and2">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="64" y1="-64" y2="-64" x1="0" />
            <line x2="64" y1="-128" y2="-128" x1="0" />
            <line x2="192" y1="-96" y2="-96" x1="256" />
            <arc ex="144" ey="-144" sx="144" sy="-48" r="48" cx="144" cy="-96" />
            <line x2="64" y1="-48" y2="-48" x1="144" />
            <line x2="144" y1="-144" y2="-144" x1="64" />
            <line x2="64" y1="-48" y2="-144" x1="64" />
        </blockdef>
        <blockdef name="or3">
            <timestamp>2000-1-1T10:10:10</timestamp>
            <line x2="48" y1="-64" y2="-64" x1="0" />
            <line x2="72" y1="-128" y2="-128" x1="0" />
            <line x2="48" y1="-192" y2="-192" x1="0" />
            <line x2="192" y1="-128" y2="-128" x1="256" />
            <arc ex="192" ey="-128" sx="112" sy="-80" r="88" cx="116" cy="-168" />
            <arc ex="48" ey="-176" sx="48" sy="-80" r="56" cx="16" cy="-128" />
            <line x2="48" y1="-64" y2="-80" x1="48" />
            <line x2="48" y1="-192" y2="-176" x1="48" />
            <line x2="48" y1="-80" y2="-80" x1="112" />
            <arc ex="112" ey="-176" sx="192" sy="-128" r="88" cx="116" cy="-88" />
            <line x2="48" y1="-176" y2="-176" x1="112" />
        </blockdef>
        <block symbolname="xor2" name="XLXI_1">
            <blockpin signalname="B" name="I0" />
            <blockpin signalname="A" name="I1" />
            <blockpin signalname="XLXN_12" name="O" />
        </block>
        <block symbolname="xor2" name="XLXI_2">
            <blockpin signalname="C" name="I0" />
            <blockpin signalname="XLXN_12" name="I1" />
            <blockpin signalname="S" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_3">
            <blockpin signalname="B" name="I0" />
            <blockpin signalname="A" name="I1" />
            <blockpin signalname="XLXN_7" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_4">
            <blockpin signalname="C" name="I0" />
            <blockpin signalname="B" name="I1" />
            <blockpin signalname="XLXN_8" name="O" />
        </block>
        <block symbolname="and2" name="XLXI_5">
            <blockpin signalname="C" name="I0" />
            <blockpin signalname="A" name="I1" />
            <blockpin signalname="XLXN_9" name="O" />
        </block>
        <block symbolname="or3" name="XLXI_6">
            <blockpin signalname="XLXN_9" name="I0" />
            <blockpin signalname="XLXN_8" name="I1" />
            <blockpin signalname="XLXN_7" name="I2" />
            <blockpin signalname="Co" name="O" />
        </block>
    </netlist>
    <sheet sheetnum="1" width="3520" height="2720">
        <instance x="640" y="448" name="XLXI_1" orien="R0" />
        <instance x="1200" y="768" name="XLXI_2" orien="R0" />
        <instance x="752" y="1184" name="XLXI_3" orien="R0" />
        <instance x="752" y="1392" name="XLXI_4" orien="R0" />
        <instance x="752" y="1600" name="XLXI_5" orien="R0" />
        <instance x="1504" y="1424" name="XLXI_6" orien="R0" />
        <branch name="A">
            <wire x2="448" y1="320" y2="320" x1="304" />
            <wire x2="640" y1="320" y2="320" x1="448" />
            <wire x2="448" y1="320" y2="1056" x1="448" />
            <wire x2="448" y1="1056" y2="1472" x1="448" />
            <wire x2="752" y1="1472" y2="1472" x1="448" />
            <wire x2="752" y1="1056" y2="1056" x1="448" />
        </branch>
        <branch name="C">
            <wire x2="640" y1="704" y2="704" x1="320" />
            <wire x2="1200" y1="704" y2="704" x1="640" />
            <wire x2="640" y1="704" y2="1328" x1="640" />
            <wire x2="640" y1="1328" y2="1536" x1="640" />
            <wire x2="752" y1="1536" y2="1536" x1="640" />
            <wire x2="752" y1="1328" y2="1328" x1="640" />
        </branch>
        <iomarker fontsize="28" x="320" y="704" name="C" orien="R180" />
        <iomarker fontsize="28" x="320" y="384" name="B" orien="R180" />
        <iomarker fontsize="28" x="304" y="320" name="A" orien="R180" />
        <branch name="XLXN_7">
            <wire x2="1504" y1="1088" y2="1088" x1="1008" />
            <wire x2="1504" y1="1088" y2="1232" x1="1504" />
        </branch>
        <branch name="XLXN_8">
            <wire x2="1504" y1="1296" y2="1296" x1="1008" />
        </branch>
        <branch name="XLXN_9">
            <wire x2="1504" y1="1504" y2="1504" x1="1008" />
            <wire x2="1504" y1="1360" y2="1504" x1="1504" />
        </branch>
        <branch name="Co">
            <wire x2="2096" y1="1296" y2="1296" x1="1760" />
        </branch>
        <branch name="S">
            <wire x2="2096" y1="672" y2="672" x1="1456" />
        </branch>
        <branch name="XLXN_12">
            <wire x2="1040" y1="352" y2="352" x1="896" />
            <wire x2="1040" y1="352" y2="640" x1="1040" />
            <wire x2="1200" y1="640" y2="640" x1="1040" />
        </branch>
        <branch name="B">
            <wire x2="576" y1="384" y2="384" x1="320" />
            <wire x2="640" y1="384" y2="384" x1="576" />
            <wire x2="576" y1="384" y2="1120" x1="576" />
            <wire x2="576" y1="1120" y2="1264" x1="576" />
            <wire x2="752" y1="1264" y2="1264" x1="576" />
            <wire x2="752" y1="1120" y2="1120" x1="576" />
        </branch>
        <iomarker fontsize="28" x="2096" y="1296" name="Co" orien="R0" />
        <iomarker fontsize="28" x="2096" y="672" name="S" orien="R0" />
    </sheet>
</drawing>