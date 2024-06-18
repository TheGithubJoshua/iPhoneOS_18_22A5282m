@class NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface TPSCloudController : NSObject {
    BOOL _registered;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableSet *_displayedContentIDs;
}

+ (id)sharedInstance;

- (id)init;
- (void)_clearDisplayedContentIDs;
- (BOOL)isHintDisplayedForContentID:(id)a0;
- (void)hintDisplayedForContentID:(id)a0;
- (void)checkForUpdates;
- (void)registerForNotifications:(id)a0;
- (void).cxx_destruct;
- (void)updateKVStoreItems:(id)a0;
- (void)dealloc;
- (id)_listDisplayContentIDs;

@end
