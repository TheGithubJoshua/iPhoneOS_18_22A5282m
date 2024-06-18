@class NSString;

@interface MNNavigationServicePeer : GEONavdPeer

@property (readonly, nonatomic) NSString *peerIdentifier;
@property (readonly, nonatomic) int processIdentifier;

- (BOOL)isEntitled;
- (id)auditToken;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)clearConnection;

@end
