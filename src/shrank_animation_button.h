/* -*- Mode: C++; indent-tabs-mode: nil; tab-width: 4 -*-
 * -*- coding: utf-8 -*-
 *
 * Copyright (C) 2011 ~ 2017 Deepin, Inc.
 *               2011 ~ 2017 Wang Yong
 *
 * Author:     Wang Yong <wangyong@deepin.com>
 * Maintainer: Wang Yong <wangyong@deepin.com>
 *
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

#ifndef SHRANKANIMATIONBUTTON_H
#define SHRANKANIMATIONBUTTON_H

#include <QTimer>
#include <QWidget>

class ShrankAnimationButton : public QWidget
{
    Q_OBJECT
    
    static const int ANIMATION_WIDTH;
    
public:
    ShrankAnimationButton(QWidget *parent=0);
    void paintEvent(QPaintEvent *);
    void startAnimation();
                                  
signals:
    void finish();
                                  
public slots:
    void renderAnimation();
    
private:
    QPixmap finishButtonImg;
    QPixmap pauseButtonImg;
    QPixmap recordButtonImg;
    QTimer *renderTimer;
    int animationDuration;
    int animationFrames;
    int opacityFrames;
    int renderTicker;
};

#endif
