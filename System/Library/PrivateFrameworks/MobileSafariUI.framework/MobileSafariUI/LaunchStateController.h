@class NSMutableArray;

@interface LaunchStateController : NSObject {
    NSMutableArray *_actionBlocks;
}

@property (readonly, nonatomic) BOOL hasCompletedLaunch;

+ (id)sharedController;

- (id)init;
- (void)doAfterUIBecomesActive:(id /* block */)a0;
- (void)applicationUIDidBecomeActive;
- (void)forceMarkUIBecomeActiveForTesting;
- (void).cxx_destruct;

@end
