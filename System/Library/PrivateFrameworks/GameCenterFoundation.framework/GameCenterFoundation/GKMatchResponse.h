@class NSString, NSArray, NSData, GKMatchRequestInternal, NSDictionary, GKDispatchGroup;

@interface GKMatchResponse : GKInternalRepresentation

@property (nonatomic) long long state;
@property (retain) NSString *rid;
@property (retain) NSArray *matches;
@property (retain) NSData *sessionToken;
@property (retain) NSArray *relayPushes;
@property (retain) NSData *cdxTicket;
@property GKDispatchGroup *matchingGroup;
@property (retain) GKMatchRequestInternal *matchRequest;
@property (retain) NSDictionary *serverRequest;
@property (readonly) int sequence;

+ (id)secureCodedPropertyKeys;

- (BOOL)transitionToState:(long long)a0;
- (void).cxx_destruct;
- (BOOL)isFinished;
- (BOOL)isCancelled;
- (BOOL)isTimeout;
- (int)_incrementSequence;
- (BOOL)isNetworkError;

@end
