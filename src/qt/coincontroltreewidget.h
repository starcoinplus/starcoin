/* 
 * File:   coincontrolwidget.h
 * Author: 888-lex
 *
 * Created on May 21, 2014, 11:46 PM
 */

#ifndef COINCONTROLTREEWIDGET_H
#define COINCONTROLTREEWIDGET_H

#include <QKeyEvent>
#include <QTreeWidget>

class CoinControlTreeWidget : public QTreeWidget {
Q_OBJECT

public:
    explicit CoinControlTreeWidget(QWidget *parent = 0);
    
protected:
  virtual void  keyPressEvent(QKeyEvent *event);
};

#endif // COINCONTROLTREEWIDGET_H

