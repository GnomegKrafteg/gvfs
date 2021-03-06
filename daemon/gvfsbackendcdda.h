/* GIO - GLib Input, Output and Streaming Library
 * 
 * Copyright (C) 2006-2007 Red Hat, Inc.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 *
 * Author: David Zeuthen <davidz@redhat.com>
 */

#ifndef __G_VFS_BACKEND_CDDA_H__
#define __G_VFS_BACKEND_CDDA_H__

#include <gvfsbackend.h>

G_BEGIN_DECLS

#define G_VFS_TYPE_BACKEND_CDDA         (g_vfs_backend_cdda_get_type ())
#define G_VFS_BACKEND_CDDA(o)           (G_TYPE_CHECK_INSTANCE_CAST ((o), G_VFS_TYPE_BACKEND_CDDA, GVfsBackendCdda))
#define G_VFS_BACKEND_CDDA_CLASS(k)     (G_TYPE_CHECK_CLASS_CAST((k), G_VFS_TYPE_BACKEND_CDDA, GVfsBackendCddaClass))
#define G_VFS_IS_BACKEND_CDDA(o)        (G_TYPE_CHECK_INSTANCE_TYPE ((o), G_VFS_TYPE_BACKEND_CDDA))
#define G_VFS_IS_BACKEND_CDDA_CLASS(k)  (G_TYPE_CHECK_CLASS_TYPE ((k), G_VFS_TYPE_BACKEND_CDDA))
#define G_VFS_BACKEND_CDDA_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), G_VFS_TYPE_BACKEND_CDDA, GVfsBackendCddaClass))

typedef struct _GVfsBackendCdda        GVfsBackendCdda;
typedef struct _GVfsBackendCddaClass   GVfsBackendCddaClass;

struct _GVfsBackendCddaClass
{
  GVfsBackendClass parent_class;
};

GType g_vfs_backend_cdda_get_type (void) G_GNUC_CONST;
  
GVfsBackendCdda *g_vfs_backend_cdda_new (void);

#define BACKEND_SETUP_FUNC g_vfs_cdda_daemon_init
void g_vfs_cdda_daemon_init (void);

G_END_DECLS

#endif /* __G_VFS_BACKEND_CDDA_H__ */
