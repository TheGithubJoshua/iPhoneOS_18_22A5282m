@class NSDate;

@interface ATXWalletDataSourceSharedData : NSObject {
    BOOL _hasEmptyWalletPasses;
    NSDate *_lastWalletPassCheckDate;
}

+ (id)sharedInstance;

- (id)init;
- (void)setHasEmptyWalletPasses:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)hasEmptyWalletPasses;
- (void)_passesDidChange;

@end
