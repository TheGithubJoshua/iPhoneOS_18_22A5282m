@class NSString;

@interface VSMemoryMap : NSObject

@property (readonly, nonatomic) NSString *filePath;
@property (readonly, nonatomic) unsigned long long fileSize;
@property (readonly, nonatomic) void *mappedData;
@property (readonly, nonatomic) int fd;

- (id)initWithFilePath:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)madvise;
- (BOOL)mmap;

@end
