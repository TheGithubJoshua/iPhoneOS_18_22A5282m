@class GEODaemon;

@interface GEOServer : NSObject

@property (readonly, weak, nonatomic) GEODaemon *daemon;

+ (unsigned long long)launchMode;
+ (id)identifier;
+ (Class)peerClass;

- (id)initWithDaemon:(id)a0;
- (id)init;
- (BOOL)handleIncomingMessage:(id)a0 withObject:(id)a1 fromPeer:(id)a2;
- (void).cxx_destruct;
- (id)description;
- (void)peerDidDisconnect:(id)a0;
- (void)peerDidConnect:(id)a0;

@end
