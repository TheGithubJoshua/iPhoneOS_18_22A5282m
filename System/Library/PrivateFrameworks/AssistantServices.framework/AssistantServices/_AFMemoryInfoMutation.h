@class NSString, AFMemoryInfo;

@interface _AFMemoryInfoMutation : NSObject <AFMemoryInfoMutating> {
    AFMemoryInfo *_base;
    unsigned long long _virtualMemorySizeInBytes;
    int _numberOfRegions;
    int _pageSizeInBytes;
    unsigned long long _residentMemorySizeInBytes;
    unsigned long long _peakResidentMemorySizeInBytes;
    unsigned long long _physicalMemoryFootprintInBytes;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasVirtualMemorySizeInBytes : 1; unsigned char hasNumberOfRegions : 1; unsigned char hasPageSizeInBytes : 1; unsigned char hasResidentMemorySizeInBytes : 1; unsigned char hasPeakResidentMemorySizeInBytes : 1; unsigned char hasPhysicalMemoryFootprintInBytes : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)getVirtualMemorySizeInBytes;
- (void)setPageSizeInBytes:(int)a0;
- (id)initWithBase:(id)a0;
- (BOOL)isDirty;
- (void)setResidentMemorySizeInBytes:(unsigned long long)a0;
- (unsigned long long)getResidentMemorySizeInBytes;
- (void)setPhysicalMemoryFootprintInBytes:(unsigned long long)a0;
- (void)setNumberOfRegions:(int)a0;
- (void).cxx_destruct;
- (int)getNumberOfRegions;
- (int)getPageSizeInBytes;
- (void)setPeakResidentMemorySizeInBytes:(unsigned long long)a0;
- (void)setVirtualMemorySizeInBytes:(unsigned long long)a0;
- (unsigned long long)getPhysicalMemoryFootprintInBytes;
- (unsigned long long)getPeakResidentMemorySizeInBytes;

@end
