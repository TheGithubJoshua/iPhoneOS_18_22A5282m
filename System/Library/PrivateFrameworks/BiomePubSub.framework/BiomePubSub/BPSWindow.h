@class NSString;
@protocol BPSSubscriber;

@interface BPSWindow : BPSSubscription <BPSSubscriber>

@property (readonly, nonatomic) NSString *identifier;
@property (retain, nonatomic) id<BPSSubscriber> downstream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)receiveCompletion:(id)a0;
- (void)cancel;
- (void)requestDemand:(long long)a0;
- (void).cxx_destruct;
- (void)receiveSubscription:(id)a0;
- (id)metadata;
- (long long)receiveInput:(id)a0;

@end
