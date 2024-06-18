@class MABrainScanner, MABrainBundle, NSDictionary, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface MABrainUpdater : NSObject {
    NSObject<OS_dispatch_queue> *_updateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    MABrainScanner *_scanner;
    NSDictionary *_info;
    NSString *_stagedRestoreVersion;
    int _relaunchToken;
    int _waitForAppleConnectToken;
    id /* block */ _waitForAppleConnectAction;
}

@property (readonly, nonatomic) NSDictionary *info;
@property (readonly, nonatomic) MABrainBundle *bundle;

+ (id)sharedInstance;

- (BOOL)hasAppleConnect;
- (id)init;
- (BOOL)writePlist:(id)a0 path:(id)a1 error:(id *)a2;
- (void)commit;
- (void)update:(id)a0 completion:(id /* block */)a1;
- (void)start:(id)a0;
- (void)schedule:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)stage:(id)a0 error:(id *)a1;
- (void)callback:(id /* block */)a0 error:(id)a1;
- (void)install:(id)a0 asset:(id)a1 options:(id)a2 completion:(id /* block */)a3;

@end
