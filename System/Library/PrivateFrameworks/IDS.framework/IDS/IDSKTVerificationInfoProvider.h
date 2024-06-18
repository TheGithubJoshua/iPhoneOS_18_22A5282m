@class NSString;

@interface IDSKTVerificationInfoProvider : NSObject <KTVerificationInfoProvider>

@property (retain, nonatomic) NSString *applicationIdentifier;

- (void).cxx_destruct;
- (id)initWithApplicationIdentifier:(id)a0;
- (void)fetchPeerVerificationInfos:(id)a0 completionBlock:(id /* block */)a1;
- (void)fetchSelfVerificationInfo:(id /* block */)a0;
- (void)healSelf:(id)a0 completionBlock:(id /* block */)a1;

@end
