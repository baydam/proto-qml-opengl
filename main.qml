import QtQuick 2.15
import QtQuick.Window 2.15
import screensaver 1.0

Window {
    visible: true
    width: 1920
    height: 1080
    title: qsTr("Test OpenGL")

    Rectangle {
        width: parent.width
        height: parent.height
        color: "black"

        Screensaver {
            id: screensaver
            anchors.fill: parent
        }
    }

}
