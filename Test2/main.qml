import QtQuick 2.0
import QtQuick.Controls
import QtQuick.Layouts

Item {
    id: root
    width: 1080
    height: 720
    visible: true

    MenuBar {
        id: menubar1
        Menu {
            title: qsTr("&File")
            Action { text: qsTr("&New...") }
            Action { text: qsTr("&Open...") }
            Action { text: qsTr("&Save") }
            Action { text: qsTr("Save &As...") }
            MenuSeparator { }
            Action { text: qsTr("&Quit") }
        }
        Menu {
            title: qsTr("&Edit")
            Action { text: qsTr("Cu&t") }
            Action { text: qsTr("&Copy") }
            Action { text: qsTr("&Paste") }
        }
        Menu {
            title: qsTr("&Help")
            Action { text: qsTr("&About") }
        }
    }
    Text{
        text: _sobj.name + " " + _sobj.category
        anchors.centerIn: parent
        z: 1
    }


    Rectangle {
        x: parent.x + 10; y: parent.y + menubar1.height
        height: parent.height - menubar1.height -10
        width: parent.width - 20
        color: foo()

        CheckBox{
            anchors.centerIn: parent
            onCheckedChanged: if(checked) parent.color = "green"
                                        else parent.color = "red"


        }


        function foo() {
            console.log("Running a Random Color");
            var intvalue = Math.floor(Math.random()*16777216);
            var hexvalue = intvalue.toString(16);
            var hex = "#";
            return hex.concat(hexvalue);
        }
    }

    ListView{


    }





}
