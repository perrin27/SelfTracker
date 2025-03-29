//#include <QGuiApplication>
#include <skillobject.h>
#include <QtQuick>

int main(int argc, char *argv[])
{
#if QT_VERSION < QT_VERSION_CHECK(6, 0, 0)
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
#endif

    QGuiApplication app(argc, argv);

    SkillObject *sobj = new SkillObject("Pizza", "HUT");

    
    
    QQuickView view;
    QQmlContext* context = view.engine()->rootContext();
    context->setContextProperty("_aString",QString("little bitch"));
    context->setContextProperty("_sobj", sobj);
    view.setSource(QUrl("qrc:/main.qml"));
    view.show();

    //QQmlApplicationEngine engine;


    return app.exec();
}
