@class NSObject, RPCompanionLinkClient;
@protocol OS_dispatch_queue, ANCompanionConnectionDelegate;

@interface ANCompanionConnection : NSObject {
    NSObject<OS_dispatch_queue> *_rapportQueue;
}

@property (readonly, nonatomic) RPCompanionLinkClient *companionLinkClient;
@property (weak, nonatomic) id<ANCompanionConnectionDelegate> delegate;

- (id)init;
- (void)_tearDownLink;
- (void).cxx_destruct;
- (void)_setupLink;
- (void)_registerForEvents;
- (void)broadcastAnnouncementPlayed:(id)a0;

@end
