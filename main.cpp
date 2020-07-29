#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "screensaver.h"

int main(int argc, char *argv[])
{
  QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

  QGuiApplication app(argc, argv);

  qmlRegisterType<Screensaver>("screensaver", 1, 0, "Screensaver");

  QQmlApplicationEngine engine;

  const QUrl url(QStringLiteral("qrc:/main.qml"));
  engine.load(url);

  return app.exec();
}
