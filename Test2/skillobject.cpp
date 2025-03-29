#include "skillobject.h"
#include <QDebug>

SkillObject::SkillObject(QObject *parent) : QObject(parent)
{
}

SkillObject::SkillObject(const QString &name, const QString &category, QObject *parent)
    : QObject(parent), m_name(name), m_category(category)
{
}

QString SkillObject::getName() const
{
    qDebug() << "I am being called";
    return m_name;
}

void SkillObject::setName(const QString &name)
{
    if (name != m_name)
    {
        m_name = name;
        emit nameChanged();
    }
}

QString SkillObject::category() const
{
    return m_category;
}

void SkillObject::setCategory(const QString &category)
{
    if (category != m_category) {
        m_category = category;
        emit categoryChanged();
    }
}
