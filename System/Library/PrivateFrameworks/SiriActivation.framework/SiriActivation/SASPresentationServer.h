@class NSMutableArray, BSServiceConnectionEndpointInjector, BSServiceConnection;
@protocol BSServiceConnectionHost, SASPresentationServerDelegate;

@interface SASPresentationServer : NSObject

@property (retain, nonatomic) BSServiceConnectionEndpointInjector *workspaceServiceInjector;
@property (retain, nonatomic) BSServiceConnection<BSServiceConnectionHost> *connection;
@property (nonatomic) BOOL invalidated;
@property (retain, nonatomic) NSMutableArray *waitForConnectBlocks;
@property (weak, nonatomic) id<SASPresentationServerDelegate> weak_delegate;
@property (nonatomic) long long presentationIdentifier;

+ (id)serviceQuality;
+ (id)interface;
+ (void)_unregisterConnection:(id)a0;
+ (id)serverForConnection:(id)a0;

- (oneway void)willDismiss;
- (void)_setConnection:(id)a0;
- (id)init;
- (oneway void)failedToPresentSiriWithError:(id)a0;
- (oneway void)didUpdatePresentationState:(id)a0;
- (oneway void)speechRequestStartedFromSiriOrb;
- (oneway void)didDismiss;
- (oneway void)didPresentSiri;
- (void).cxx_destruct;
- (id)description;
- (id)allBulletins;
- (oneway void)pong;
- (oneway void)resetSiriToActive;
- (oneway void)unregisterPresentationIdentifier:(id)a0;
- (id)bulletinsOnLockScreen;
- (oneway void)speechRequestCancelledFromSiriOrb;
- (void)dealloc;
- (oneway void)registerPresentationIdentifier:(id)a0;
- (id)bulletinForIdentifier:(id)a0;

@end
