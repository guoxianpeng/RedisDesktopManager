#pragma once
#include <functional>
#include <QMenu>
#include <QWidget>

namespace ConnectionsTree {

QAction *createMenuAction(const QString& iconRef, const QString& title,
                                 QMenu* parent, QObject* owner, std::function<void()> callback);

void confirmAction(QWidget* parent, const QString& msg, std::function<void()> action);

}
