@class NSURL, NSObject;
@protocol OS_dispatch_queue;

@interface FMDFMIPSharedStateManager : NSObject

@property (retain) NSURL *fmipSharedFileStaticURL;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *stateManagerQueue;

+ (id)sharedInstance;

- (id)init;
- (id)_readSharedInfo;
- (id)_fmipSharedFileURL;
- (BOOL)_removeSharedInfo;
- (unsigned long long)lostModeType;
- (void)recalculateLostMode;
- (BOOL)_writeSharedInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)fmipActive;
- (void)setFMiPActive:(BOOL)a0;

@end
