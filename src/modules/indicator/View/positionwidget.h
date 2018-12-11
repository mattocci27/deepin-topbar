/*
 * Copyright (C) 2017 ~ 2017 Deepin Technology Co., Ltd.
 *
 * Author:     kirigaya <kirigaya@mkacg.com>
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef POSITIONWIDGET_H
#define POSITIONWIDGET_H

#include "frame/item/contentmodule.h"

class QMenu;

namespace dtb {
namespace indicator {
class PositionWidget : public ContentModule {
    Q_OBJECT
public:
    explicit PositionWidget(QWidget *parent = nullptr);

    enum Action {
        Home,
        Desktop,
        Document,
        Photo,
        Video,
    };

    QMenu *menu()
    {
        return m_menu;
    }

signals:
    void requestHidePopupWindow();

private:
    void handleAction(const int &action);

private:
    QMenu *m_menu;
};
}  // namespace indicator
}  // namespace dtb

#endif  // POSITIONWIDGET_H
