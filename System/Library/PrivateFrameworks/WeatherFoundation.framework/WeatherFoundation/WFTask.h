@class WFTaskIdentifier, WFServiceConnection, NSProgress;

@interface WFTask : NSObject

@property (class, readonly, nonatomic) WFServiceConnection *sharedServiceConnection;

@property (readonly, nonatomic) WFTaskIdentifier *identifier;
@property (readonly, nonatomic) BOOL requiresResponse;
@property (retain, nonatomic) NSProgress *progress;
@property (readonly, nonatomic) BOOL isCancelled;

- (id)init;
- (void)cleanup;
- (void)handleResponse:(id)a0;
- (void)cancel;
- (void)startWithService:(id)a0;
- (void)start;
- (void).cxx_destruct;
- (void)handleCancellation;
- (void)handleError:(id)a0 forResponseIdentifier:(id)a1;
- (void)executeSynchronously;
- (id)initWithResponseRequired:(BOOL)a0;

@end
