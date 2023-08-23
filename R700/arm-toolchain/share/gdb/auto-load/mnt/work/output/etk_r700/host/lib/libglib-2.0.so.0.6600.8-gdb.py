import sys
import gdb

# Update module path.
dir_ = '/mnt/work/output/etk_r700/host/share/glib-2.0/gdb'
if not dir_ in sys.path:
    sys.path.insert(0, dir_)

from glib_gdb import register
register (gdb.current_objfile ())
