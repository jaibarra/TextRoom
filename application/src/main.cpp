/****************************************************************************
** Copyright (C) 2008 Petar Toushkov <peter dot toushkov at gmail.com>
** Copyright (C) 2008 Omer Bahri Gordebak <gordebak at gmail.com>
**
** Additional help, code and insights by:
** adamvert - from http://ubuntuforums.org/
** zebulon M - from http://ubuntuforums.org/
**
** Artwork by Edward Solodukhin <arch1000@gmail.com>
**
** Parts of the following code are from the Phrasis project:
**
** http://code.google.com/p/phrasis/
**
** and are
**
** Copyright (C) 2006 Jacob R Rideout <jacob@jacobrideout.net>
** All rights reserved.
**
** This file may be used under the terms of the GNU General Public
** License version 2.0 as published by the Free Software Foundation
** and appearing in the file LICENSE.GPL included in the packaging of
** this file.
**
** This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
** WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
**
****************************************************************************/

#include <QApplication>
#include <QSplashScreen>
#include <QTimer>
#include <QtGui>
 
#include "textroom.h"

int main(int argc, char ** argv)
{
	QApplication app(argc, argv);
	app.setQuitOnLastWindowClosed(true);
	app.setOrganizationName("textroom");
#ifdef Q_OS_MACX
	app.setOrganizationDomain("textroom");
#else
	app.setOrganizationDomain("petartoushkov.hit.bg");
#endif
	app.setApplicationName("TextRoom");

	QTextCodec::setCodecForCStrings(QTextCodec::codecForName("utf8"));

	Q_INIT_RESOURCE(emblems);
	Q_INIT_RESOURCE(images);
	Q_INIT_RESOURCE(icons);
	Q_INIT_RESOURCE(icons_app);
	
	// show splashscreen
#ifdef Q_OS_WIN32
	QSettings settings(QSettings::IniFormat, QSettings::UserScope, QApplication::organizationName());
#else
	QSettings settings;
#endif

	QSplashScreen *splash = NULL;
	if ( settings.value( "WindowState/ShowSplashScreen", true ).toBool() )
	{
		QPixmap splashpix(":/images/splash.jpg");
		if (!splashpix.isNull())
		{
			splash = new QSplashScreen(splashpix);
			splash->show();
			splash->showMessage("Loading... ", Qt::AlignBottom+Qt::AlignRight, QColor(128,128,128));
		}
	}


	
	TextRoom *win = new TextRoom(NULL);
	win->show();

	
	if (splash)
	{
		QTimer *timer = new QTimer(win);
		QObject::connect(timer, SIGNAL(timeout()), splash, SLOT(close()));
		timer->start(2000);
		timer->setSingleShot(true);
		//splash->finish(win);
	}
	return app.exec();
}
