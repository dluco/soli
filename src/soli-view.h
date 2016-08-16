/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*-  */
/*
 * soli-view.h
 * Copyright (C) 2016 David Luco <dluco11@gmail.com>
 *
 * soli is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * soli is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _SOLI_VIEW_H_
#define _SOLI_VIEW_H_

#include <gtk/gtk.h>
#include <gtksourceview/gtksource.h>

G_BEGIN_DECLS

#define SOLI_TYPE_VIEW             (soli_view_get_type ())
#define SOLI_VIEW(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), SOLI_TYPE_VIEW, SoliView))
#define SOLI_VIEW_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), SOLI_TYPE_VIEW, SoliViewClass))
#define SOLI_IS_VIEW(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), SOLI_TYPE_VIEW))
#define SOLI_IS_VIEW_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), SOLI_TYPE_VIEW))
#define SOLI_VIEW_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), SOLI_TYPE_VIEW, SoliViewClass))

typedef struct _SoliViewClass SoliViewClass;
typedef struct _SoliView SoliView;
typedef struct _SoliViewPrivate SoliViewPrivate;


struct _SoliView
{
	GtkSourceView view;

	SoliViewPrivate *priv;
};

struct _SoliViewClass
{
	GtkSourceViewClass parent_class;
};

GType soli_view_get_type (void) G_GNUC_CONST;

G_END_DECLS

#endif /* _SOLI_VIEW_H_ */
