@class NSString, NSURL, ICLiveLinkIdentity;
@protocol ICSharedListeningConnectionControllerDelegate;

@interface ICSharedListeningConnectionController : NSObject

@property (retain, nonatomic) NSString *sessionIdentifier;
@property (retain, nonatomic) NSString *sessionToken;
@property (retain, nonatomic) NSURL *inviteURL;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) ICLiveLinkIdentity *identity;
@property (weak, nonatomic) id<ICSharedListeningConnectionControllerDelegate> delegate;

+ (id)externalSharedListeningConnectionWithSessionIdentifier:(id)a0 identity:(id)a1 bundleID:(id)a2;
+ (id)sharedListeningConnectionWithSessionIdentifier:(id)a0 identity:(id)a1 bundleID:(id)a2;

- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)sendMessage:(id)a0;
- (id)initWithSessionIdentifier:(id)a0 identity:(id)a1 bundleID:(id)a2;

@end
