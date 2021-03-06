/***************************************************************************
*   Copyright (C) 2006-2008 by Ian Reinhart Geiser                        *
*   geiseri@yahoo.com                                                     *
*                                                                         *
*   This program is free software; you can redistribute it and/or modify  *
*   it under the terms of the GNU General Public License as published by  *
*   the Free Software Foundation; either version 2 of the License, or     *
*   (at your option) any later version.                                   *
*                                                                         *
*   This program is distributed in the hope that it will be useful,       *
*   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
*   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
*   GNU General Public License for more details.                          *
*                                                                         *
*   You should have received a copy of the GNU General Public License     *
*   along with this program; if not, write to the                         *
*   Free Software Foundation, Inc.,                                       *
*   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
***************************************************************************/
#include "qscaledpixmapitem.h"

QScaledPixmapItem::QScaledPixmapItem(QGraphicsItem * parent)
		: QGraphicsPixmapItem(parent)
{}


QScaledPixmapItem::~QScaledPixmapItem()
{}

QScaledPixmapItem::QScaledPixmapItem( const QPixmap & pixmap, QGraphicsItem * parent )
:  QGraphicsPixmapItem(pixmap,parent)
{
}

QSizeF QScaledPixmapItem::size() const
{
	return m_size;
}


void QScaledPixmapItem::setSize(const QSizeF& theValue)
{
	m_size = theValue;
	// update the matrix
	QSize source = pixmap().size();
	QSizeF dest = m_size;

	if( source.width() == 0 || source.height() == 0 )
		return;

	qreal xscale = dest.width() / source.width();
	qreal yscale = dest.height() / source.height();

	QMatrix matrix;
	matrix.scale(xscale, yscale);

	setMatrix(matrix);
}

