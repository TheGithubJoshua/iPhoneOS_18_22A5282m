@class NSArray, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface WLKOfferManager : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSArray *offers;

+ (id)_offerPath;
+ (id)_offerFullPath;
+ (id)defaultOfferManager;

- (id)_connection;
- (id)init;
- (void)fetchOffers:(BOOL)a0 completion:(id /* block */)a1;
- (void)saveOffer:(id)a0 completionHandler:(id /* block */)a1;
- (void)removeOfferByBadgeId:(id)a0 completionHandler:(id /* block */)a1;
- (void)_activeAccountChangedNotification:(id)a0;
- (id)_offers;
- (id)_updateOfferFile;
- (void)clearOffers:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_setOffers:(id)a0;

@end
