@class NSDictionary, AMSPushConfiguration;
@protocol AMSBagProtocol, AMSPushHandlerDelegate, AMSPushHandlerContract;

@interface AMSPushHandler : NSObject

@property (readonly, nonatomic) NSDictionary *enabledParsables;
@property (readonly, nonatomic) id<AMSPushHandlerContract> bagContract;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (weak, nonatomic) id<AMSPushHandlerDelegate> delegate;
@property (readonly, nonatomic) AMSPushConfiguration *configuration;

- (void)registerForEngagementPushes;
- (id)initWithConfiguration:(id)a0 bag:(id)a1;
- (void).cxx_destruct;
- (void)_handlePushNotification:(id)a0;
- (id)initWithConfiguration:(id)a0 bagContract:(id)a1;
- (void)dealloc;
- (void)handleNotification:(id)a0;
- (BOOL)shouldHandleNotification:(id)a0;

@end
