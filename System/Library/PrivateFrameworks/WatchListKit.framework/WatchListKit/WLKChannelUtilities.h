@class WLKChannelsResponse, NSArray, NSDictionary, NSError, NSObject;
@protocol OS_dispatch_queue;

@interface WLKChannelUtilities : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _filtered;
    WLKChannelsResponse *_cachedResponse;
    int _shouldRefreshNotificationToken;
    BOOL _shouldRefresh;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _shouldRefreshLock;
}

@property (readonly, nonatomic) BOOL loaded;
@property (readonly, nonatomic) NSError *error;
@property (readonly, copy, nonatomic) NSDictionary *channelsByID;
@property (readonly, copy, nonatomic) NSDictionary *channelsByBundleID;
@property (readonly, copy, nonatomic) NSArray *orderedChannels;

+ (BOOL)isItunesBundleID:(id)a0;
+ (id)sharedInstanceFiltered;
+ (id)sharedInstance;
+ (id)_validiTunesBundles;

- (id)init;
- (void)invalidateCache;
- (void).cxx_destruct;
- (void)dealloc;
- (id)_configuration;
- (void)_loadConfigIfNeededWithCompletion:(id /* block */)a0;
- (id)channelForBundleID:(id)a0;
- (id)channelForID:(id)a0;
- (id)channelIDForBundleID:(id)a0;
- (id)initFiltered:(BOOL)a0;
- (BOOL)isItunesOrFirstPartyBundleID:(id)a0;
- (void)loadIfNeededWithCompletion:(id /* block */)a0;

@end
