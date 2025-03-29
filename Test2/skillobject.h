#ifndef SKILLOBJECT_H
#define SKILLOBJECT_H

#include <QObject>
#include <QDebug>

class SkillObject : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString name READ getName WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QString category READ category WRITE setCategory NOTIFY categoryChanged)
    //Q_PROPERTY(Date date READ date WRITE setDate NOTIFY dateChanged)
    //Q_PROPERTY(QString color READ color WRITE setColor NOTIFY colorChanged)

public:
    SkillObject(QObject *parent=0);
    SkillObject(const QString &name, const QString &category, QObject *parent=0);

    Q_INVOKABLE QString getName() const;
    void setName(const QString &name);

    QString category() const;
    void setCategory(const QString &category);



signals:
    void nameChanged();
    void categoryChanged();

private:
    QString m_name;
    QString m_category;


};

#endif // SKILL_MODEL_H
