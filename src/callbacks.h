/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * callbacks.h
 * Copyright (C) Joshua Hill 2010 <posixninja@gmail.com>
 * 
 * spirit-linux-gtk is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * spirit-linux-gtk is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtk/gtk.h>

void destroy (GtkWidget *widget, gpointer data);
void on_help_clicked(GtkWidget *widget, gpointer data);
void on_info_clicked(GtkWidget *widget, gpointer data);
void on_button1_clicked(GtkWidget *widget, gpointer data);