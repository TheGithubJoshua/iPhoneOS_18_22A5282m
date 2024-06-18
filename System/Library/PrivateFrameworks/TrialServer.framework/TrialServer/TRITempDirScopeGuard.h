@class NSString;

@interface TRITempDirScopeGuard : NSObject {
    BOOL _isDisposed;
}

@property (readonly, nonatomic) NSString *canonicalPath;
@property (readonly, nonatomic) NSString *path;

+ (BOOL)ifUnreferencedCleanupPath:(id)a0;
+ (id)refCountsLock;

- (id)init;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)dispose;
- (void)dealloc;

@end
