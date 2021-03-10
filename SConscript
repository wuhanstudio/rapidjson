from building import *
import rtconfig

# get current directory
cwd     = GetCurrentDir()

# The set of source files associated with this SConscript file.

src = []

# src += Glob('example/sortkeys/sortkeys.cpp')
# src += Glob('example/schemavalidator/schemavalidator.cpp')

# src += Glob('example/prettyauto/prettyauto.cpp')
# src += Glob('example/pretty/pretty.cpp')
# src += Glob('example/filterkeydom/filterkeydom.cpp')
# src += Glob('example/filterkey/filterkey.cpp')
# src += Glob('example/capitalize/capitalize.cpp')
# src += Glob('example/condense/condense.cpp')
# src += Glob('example/jsonx/jsonx.cpp')

# src += Glob('example/parsebyparts/parsebyparts.cpp')

src += Glob('example/simplereader/simplereader.cpp')
src += Glob('example/simplewriter/simplewriter.cpp')
src += Glob('example/tutorial/tutorial.cpp')
src += Glob('example/simplepullreader/simplepullreader.cpp')
src += Glob('example/simpledom/simpledom.cpp')
src += Glob('example/serialize/serialize.cpp')
src += Glob('example/messagereader/messagereader.cpp')
src += Glob('example/lookaheadparser/lookaheadparser.cpp')
src += Glob('example/archiver/archiver.cpp')
src += Glob('example/archiver/archivertest.cpp')

LOCAL_CCFLAGS = ''
path   =  [cwd]
path   +=  [cwd + '/include']

group = DefineGroup('rapidjson', src, CPPPATH = path, depend = [''], LOCAL_CCFLAGS = LOCAL_CCFLAGS)

Return('group')
