/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -v -c DemoIfAdaptor -a /home/suman/sample_mob_apps/dbustutorial/src/demoifadaptor.h:/home/suman/sample_mob_apps/dbustutorial/src/demoifadaptor.cpp com.nokia.Demo.xml
 *
 * qdbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "/home/suman/sample_mob_apps/dbustutorial/src/demoifadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class DemoIfAdaptor
 */

DemoIfAdaptor::DemoIfAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

DemoIfAdaptor::~DemoIfAdaptor()
{
    // destructor
}

QString DemoIfAdaptor::SayBye()
{
    // handle method call com.nokia.Demo.SayBye
    QString strret;
    QMetaObject::invokeMethod(parent(), "SayBye", Q_RETURN_ARG(QString, strret));
    return strret;
}

void DemoIfAdaptor::SayHello(const QString &name, const QVariantMap &customdata)
{
    // handle method call com.nokia.Demo.SayHello
    QMetaObject::invokeMethod(parent(), "SayHello", Q_ARG(QString, name), Q_ARG(QVariantMap, customdata));
}

