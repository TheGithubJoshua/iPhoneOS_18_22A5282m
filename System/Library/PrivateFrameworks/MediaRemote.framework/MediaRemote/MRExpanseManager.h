@class TUConversationManager, TUNeighborhoodActivityConduit, NSString, NSHashTable, AVAudioSession, NSObject;
@protocol OS_dispatch_queue;

@interface MRExpanseManager : NSObject <TUConversationManagerDelegate, TUNeighborhoodActivityConduitDelegate>

@property (class, readonly, nonatomic) MRExpanseManager *sharedManager;

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *notifyQueue;
@property (readonly, nonatomic) NSHashTable *observers;
@property (readonly, nonatomic) TUConversationManager *conversationManager;
@property (readonly, nonatomic) TUNeighborhoodActivityConduit *conduit;
@property (retain, nonatomic) AVAudioSession *auxiliaryPlaybackAudioSession;
@property (readonly, nonatomic) BOOL expanseSessionActive;
@property (readonly, nonatomic) BOOL expanseSessionHasActiveActivity;
@property (readonly, nonatomic) BOOL expanseSessionHasRemoteActivity;
@property (readonly, nonatomic) BOOL expanseSessionHasScreenSharingActivity;
@property (readonly, nonatomic) BOOL expanseHandoffSupported;
@property (readonly, nonatomic) NSString *activeTelevisionRouteID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)deviceIsActiveTelevision:(id)a0;
- (void)removeObserver:(id)a0;
- (void)neighborhoodActivityConduit:(id)a0 splitSessionEnded:(id)a1;
- (void)_handleExpanseSessionLeft;
- (void)_notifyObserversThatTelevisionJoinedSession;
- (void)neighborhoodActivityConduit:(id)a0 tvDeviceAppeared:(id)a1;
- (void)_notifyObserversThatTelevisionLeftSession;
- (void)neighborhoodActivityConduit:(id)a0 splitSessionStarted:(id)a1;
- (void)_notifyObserversThatExpanseSessionJoined;
- (void)_handleExpanseSessionJoined;
- (void)addTelevisionWithRouteIdentifierToSession:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)conversationManager:(id)a0 stateChangedForConversation:(id)a1;
- (void)serverDisconnectedForConversationManager:(id)a0;
- (id)initWithQueue:(id)a0;
- (void)_notifyObserversThatExpanseSessionLeft;
- (void)dealloc;
- (void)removeTelevisionWithRouteIdentifierFromSession:(id)a0 completion:(id /* block */)a1;
- (BOOL)errorIsTelevisionCapabilitiesError:(id)a0;
- (void)addObserver:(id)a0;
- (BOOL)activeActivityExistsForBundle:(id)a0;
- (void)_handleConversationStateChanged;
- (void)neighborhoodActivityConduit:(id)a0 tvDeviceDisappeared:(id)a1;
- (id)activeConversation;

@end
