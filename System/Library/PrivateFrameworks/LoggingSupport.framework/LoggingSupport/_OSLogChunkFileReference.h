@class _OSLogCollectionReference;

@interface _OSLogChunkFileReference : NSObject {
    _OSLogCollectionReference *_oslcr;
}

@property (readonly, nonatomic) char *path;
@property (readonly, nonatomic) unsigned long long xattrOldestTime;
@property (readonly, nonatomic) unsigned long long xattrEndTime;

- (id)copyMappedChunkFile:(id *)a0;
- (id)initWithCollection:(id)a0 subpath:(const char *)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (BOOL)readXattrForTimespan:(id *)a0;

@end
