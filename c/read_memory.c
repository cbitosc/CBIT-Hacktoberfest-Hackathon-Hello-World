#include <stdio.h>
#include <sys/sysinfo.h>

unsigned long getAvailMemory(){
	struct sysinfo availMemory;
	if(sysinfo(&availMemory) < 0) {
		return 0;
	}	
	return availMemory.totalram;
}

unsigned long getFreeMemory(){
	struct sysinfo freeMemory;
	if(sysinfo(&freeMemory) < 0) {
		return 0;
	}
	return freeMemory.freeram;
}

unsigned long getSharedMemory(){	
	struct sysinfo sharedMemory;
	if(sysinfo(&sharedMemory) < 0) {
		return 0;
	}	
	return sharedMemory.sharedram;
}

unsigned long getBufferMemory(){
	struct sysinfo bufferMemory;
	if(sysinfo(&bufferMemory) < 0) {
		return 0;
	}	
	return bufferMemory.bufferram;
}

int main(){

	unsigned long availMemory = (getAvailMemory() / 1024) / 1024;
	unsigned long freeMemory = (getFreeMemory() / 1024) / 1024;
	unsigned long usedMemory = availMemory - freeMemory;
	unsigned long sharedMemory = (getSharedMemory() / 1024) / 1024;
	unsigned long bufferMemory = (getBufferMemory() / 1024) / 1024;
	unsigned long totalMemory = availMemory + sharedMemory + bufferMemory;

	printf("Hardware                    Value\n");
    	printf("--------                    -----\n");
    	printf("Avail. Memory               %li  MiB\n", availMemory);
    	printf("Free Memory                 %li  MiB\n", freeMemory);
    	printf("Used Memory                 %li  MiB\n", usedMemory);
    	printf("Shared Memory               %li  MiB\n", sharedMemory);
    	printf("Buffer Memory               %li  MiB\n", bufferMemory);
	printf("------------------------------------\n");
	printf("Total Memory                %li  MiB\n", totalMemory);

    	return 0;
}

