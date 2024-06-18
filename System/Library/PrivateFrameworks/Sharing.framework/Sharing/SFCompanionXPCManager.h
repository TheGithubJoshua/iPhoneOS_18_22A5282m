@class NSXPCConnection, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SFCompanionXPCManager : NSObject

@property (retain) NSObject<OS_dispatch_queue> *xpcSetupQueue;
@property int listenerResumedToken;
@property BOOL interrupted;
@property (retain) NSXPCConnection *connection;
@property (retain) NSMutableArray *observers;
@property (getter=isInvalid) BOOL invalid;

+ (void)initialize;
+ (id)sharedManager;
+ (id)unlockInterface;
+ (id)hotspotClientInterface;
+ (id)hotspotInterface;
+ (id)serviceManagerClientInterface;
+ (id)serviceManagerInterface;
+ (id)xpcManagerInterface;

- (void)notifyOfInvalidation;
- (id)init;
- (void)setupConnection;
- (void)unregisterObserver:(id)a0;
- (void)streamsForMessage:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)notifyOfResume;
- (void)registerObserver:(id)a0;
- (void)appleAccountSignedOut;
- (void).cxx_destruct;
- (void)serviceManagerProxyForIdentifier:(id)a0 client:(id)a1 withCompletionHandler:(id /* block */)a2;
- (void)unlockManagerWithCompletionHandler:(id /* block */)a0;
- (void)dealloc;
- (void)appleAccountSignedIn;
- (void)notifyOfInterruption;
- (void)remoteHotspotSessionForClient:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)updateLowLatencyFilter:(id)a0 isAddFilter:(BOOL)a1 completion:(id /* block */)a2;

@end
