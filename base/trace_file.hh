#ifndef __TRACE_FILE_HH__
#define __TRACE_FILE_HH__

#include <fstream>
#include <iostream>

/* trace file, by shen */
class TraceFile {
public:
	//std::ofstream cacheTraceFile;
	std::ofstream requtTraceFile;
	TraceFile() {
		/* open trace file, by shen */
    	//cacheTraceFile.open("m5out-se-x86/cacheTraceFile.txt", std::ios::out);
    	requtTraceFile.open("m5out-se-x86/requtTraceFile.txt", std::ios::out);
    	if (requtTraceFile.fail()) 
    		std::cout << "can not open the Trace file!!" << std::endl;
	}

	~TraceFile() {
		//cacheTraceFile.close();
		requtTraceFile.close();
	}
};

static TraceFile traceFile;
/* enable trace file output */
//#define TRACE
#define R_TRACE

#endif