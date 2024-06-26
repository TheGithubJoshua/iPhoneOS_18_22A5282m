@class NSUUID, NSString, TUConversationActivity, TUConversationActivitySession;

@interface CPActivitySession : NSObject <RBSAssertionObserving, CPLaunchableActivitySession, NSXPCListenerDelegate> {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ activityInterval;
    void /* unknown type, empty encoding */ terminatingHandle;
    void /* unknown type, empty encoding */ isFirstJoin;
    void /* unknown type, empty encoding */ persistentSceneIdentifier;
    void /* unknown type, empty encoding */ audioSessionID;
    void /* unknown type, empty encoding */ domainAssertion;
    void /* unknown type, empty encoding */ distributionCount;
    void /* unknown type, empty encoding */ applicationState;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ queue;
    void /* unknown type, empty encoding */ isLocallyInitiated;
    void /* unknown type, empty encoding */ isLightweightPrimaryInitiated;
    void /* unknown type, empty encoding */ isUsingAirplay;
    void /* unknown type, empty encoding */ timestamp;
    void /* unknown type, empty encoding */ activeParticipantsUpdateItem;
    void /* unknown type, empty encoding */ activeParticipants;
    void /* unknown type, empty encoding */ sessionManager;
    void /* unknown type, empty encoding */ listener;
    void /* unknown type, empty encoding */ notificationCenter;
    void /* unknown type, empty encoding */ connection;
}

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) TUConversationActivity *activity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, retain) void /* unknown type, empty encoding */ activity;
@property (nonatomic, readonly) TUConversationActivitySession *tuConversationActivitySession;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ endpoint;

- (void)assertion:(id)a0 didInvalidateWithError:(id)a1;
- (void)assertionWillInvalidate:(id)a0;
- (void)resetSession;
- (void)updateActivityImage:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)dealloc;
- (void)associateSceneWithSceneID:(id)a0;
- (void)associateSceneWithPersistentIdentifier:(id)a0;
- (void)permitJoin;

@end
