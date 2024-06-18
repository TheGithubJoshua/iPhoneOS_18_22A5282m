@class TUCallCenter;

@interface SBConferenceManager : NSObject {
    BOOL _hasFaceTimeCapability;
    struct MGNotificationTokenStruct { } *_faceTimeCapabilityUpdateToken;
    TUCallCenter *_sharedCallCenter;
}

+ (id)sharedInstance;
+ (void)initialize;

- (id)init;
- (BOOL)canStartFaceTime;
- (id)activeFaceTimeCall;
- (void)endFaceTime;
- (BOOL)faceTimeIsAvailable;
- (BOOL)hasFaceTimeCapability;
- (id)incomingFaceTimeCall;
- (void).cxx_destruct;
- (BOOL)activeFaceTimeCallExists;
- (id)currentFaceTimeCall;
- (BOOL)inFaceTime;
- (void)_faceTimeStateChanged:(id)a0;
- (BOOL)inFaceTimeVideo;
- (void)dealloc;
- (BOOL)faceTimeInvitationExists;

@end
