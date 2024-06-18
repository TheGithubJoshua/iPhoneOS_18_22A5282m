@class PPNamedEntityStore, NSDate, PPMediaPlayerResponse, NSObject;
@protocol OS_dispatch_queue;

@interface PPMediaPlayerDelegate : NSObject {
    PPNamedEntityStore *_namedEntityStore;
    double _donationDelaySeconds;
    BOOL _useNamedEntityDissector;
    PPMediaPlayerResponse *_pendingDonation;
    NSDate *_pendingDonationTimestamp;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)bundleIdOfCurrentForegroundApp;

- (id)init;
- (id)getResponse;
- (void).cxx_destruct;
- (void)waitForQueueEmpty;
- (id)initWithNamedEntityStore:(id)a0 donationDelaySeconds:(double)a1 registersResponseLoading:(BOOL)a2 useNamedEntityDissector:(BOOL)a3;
- (void)_registerForNowPlayingNotifications;
- (void)processResponse:(id)a0;
- (void)_donateDelayedResponse:(id)a0 timePlayed:(double)a1 bundleId:(id)a2;

@end
