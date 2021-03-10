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

if GetDepend('RAPIDJSON_USING_SIMPLE_READER'):
	src += Glob('example/simplereader/simplereader.cpp')

if GetDepend('RAPIDJSON_USING_SIMPLE_WRITER'):
	src += Glob('example/simplewriter/simplewriter.cpp')

if GetDepend('RAPIDJSON_USING_TUTORIAL'):
	src += Glob('example/tutorial/tutorial.cpp')

if GetDepend('RAPIDJSON_USING_SIMPLE_PULL_READER'):
	src += Glob('example/simplepullreader/simplepullreader.cpp')

if GetDepend('RAPIDJSON_USING_SIMPLE_DOM'):
	src += Glob('example/simpledom/simpledom.cpp')

if GetDepend('RAPIDJSON_USING_SERIALIZE'):
	src += Glob('example/serialize/serialize.cpp')

if GetDepend('RAPIDJSON_USING_MESSAGE_READER'):
	src += Glob('example/messagereader/messagereader.cpp')

if GetDepend('RAPIDJSON_USING_LOOK_AHEAD_PARSER'):
	src += Glob('example/lookaheadparser/lookaheadparser.cpp')

if GetDepend('RAPIDJSON_USING_ARCHIVER_TEST'):
	src += Glob('example/archiver/archiver.cpp')
	src += Glob('example/archiver/archivertest.cpp')

LOCAL_CCFLAGS = ''
path   =  [cwd]
path   +=  [cwd + '/include']

group = DefineGroup('rapidjson', src, CPPPATH = path, depend = [''], LOCAL_CCFLAGS = LOCAL_CCFLAGS)

Return('group')
