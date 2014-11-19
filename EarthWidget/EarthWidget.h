

/* file EarthWidget.h
 * \suthor      wu bian
 * \version     ver1.0
 * \date        2014-11-19
 * \brief       �������
 * ��Ȩ����
 * \warning     ��������
 * \note        ע����������
 * \bug         ���ĵ������ڵ�bug����
 * \history   \n
 * �޸����ڣ� \n
 * �� �� �ţ� \n
 * �� �� �ˣ� \n
 * �޸����ݣ� \n
*/

#ifndef EARTHWIDGET_H
#define EARTHWIDGET_H

#include "earthwidget_global.h"

#include "Functions.h"

#include <Qt/qtimer.h>
#include <QtGui/QWidget>
#include <QtGui/QLabel>
#include <QtGui/QHBoxLayout>

#include <QtGui/QGraphicsView>
#include <QtCore/QString>

#include <string>
#include <iostream>


namespace EarthWidget{
using namespace std;

class EARTHWIDGET_EXPORT EarthWidget : public QWidget
{
	Q_OBJECT
public:
	EarthWidget();
	~EarthWidget();

	bool LoadEarthFile(const string& path, const string& name);

	void Unload();

private:

	bool bLoad;

	Functions*  functions;
	//UI

	QWidget*  centralWidget;
	QHBoxLayout* layout_main;

	QLabel*    lbl_left;




};
}
#endif // EARTHWIDGET_H
