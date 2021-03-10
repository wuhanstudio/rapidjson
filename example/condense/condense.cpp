// JSON condenser example

// This example parses JSON text from stdin with validation, 
// and re-output the JSON content to stdout without whitespace.

#include <rtthread.h>
#include "rapidjson/reader.h"
#include "rapidjson/writer.h"
#include "rapidjson/filereadstream.h"
#include "rapidjson/filewritestream.h"
#include "rapidjson/error/en.h"

using namespace rapidjson;

int condense(int, char*[]) {
    // Prepare JSON reader and input stream.
    Reader reader;
    char readBuffer[1024];
    FileReadStream is(stdin, readBuffer, sizeof(readBuffer));

    // Prepare JSON writer and output stream.
    char writeBuffer[1024];
    FileWriteStream os(stdout, writeBuffer, sizeof(writeBuffer));
    Writer<FileWriteStream> writer(os);

    // JSON reader parse from the input stream and let writer generate the output.
    if (!reader.Parse(is, writer)) {
        fprintf(stderr, "\nError(%u): %s\n", static_cast<unsigned>(reader.GetErrorOffset()), GetParseError_En(reader.GetParseErrorCode()));
        return 1;
    }

    return 0;
}
MSH_CMD_EXPORT(condense, fast json condense example);
