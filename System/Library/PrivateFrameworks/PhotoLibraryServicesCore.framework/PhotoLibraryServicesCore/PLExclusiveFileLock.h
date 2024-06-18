@class NSString, NSURL;

@interface PLExclusiveFileLock : NSObject <PLUnlocker> {
    NSURL *_url;
    int _fd;
}

@property (readonly, nonatomic) BOOL isLocked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithURL:(id)a0;
- (void)unlock;
- (void).cxx_destruct;
- (void)dealloc;
- (id)lockData;
- (id)lockFailure;
- (BOOL)lockWithError:(id *)a0;

@end
