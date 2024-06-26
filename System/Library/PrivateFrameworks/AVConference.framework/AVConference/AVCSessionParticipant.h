@class VCPositionalInfo, NSString, NSDictionary, VCXPCClientShared, NSData, NSObject, NSMutableDictionary;
@protocol OS_dispatch_queue, AVCSessionParticipantDelegate;

@interface AVCSessionParticipant : NSObject <AVCSessionParticipantControlProtocol> {
    id _delegate;
    NSObject<OS_dispatch_queue> *_stateQueue;
    VCXPCClientShared *_connection;
    NSDictionary *_streamGroupIDToStreamTokenMap;
    NSMutableDictionary *_participantConfig;
    VCPositionalInfo *_videoPositionalInfo;
    NSMutableDictionary *_mediaStates;
    NSDictionary *_mediaTypeToSpatialSourceIDMap;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mediaStateMutex;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateNotificationQueue;
@property (nonatomic) BOOL remoteScreenEnabled;
@property (nonatomic) long long videoToken;
@property (nonatomic) long long screenToken;
@property (retain, nonatomic) VCXPCClientShared *sharedXPCConnection;
@property (readonly, nonatomic) NSDictionary *config;
@property (nonatomic) BOOL configurationInProgress;
@property (nonatomic) BOOL hasPendingChanges;
@property (nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (nonatomic) id<AVCSessionParticipantDelegate> delegate;
@property (nonatomic) struct tagAVCPositionalInfo { unsigned int x0; struct CGSize { double x0; double x1; } x1; double x2; double x3; double x4; } videoPositionalInfo;
@property (readonly, nonatomic) unsigned long long spatialAudioSourceID;
@property (nonatomic) unsigned char videoQuality;
@property (nonatomic) unsigned int visibilityIndex;
@property (nonatomic) unsigned int prominenceIndex;
@property (readonly, nonatomic) unsigned long long participantID;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSData *negotiationData;
@property (nonatomic, getter=isAudioMuted) BOOL audioMuted;
@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled;
@property (nonatomic, getter=isScreenEnabled) BOOL screenEnabled;
@property (nonatomic, getter=isAudioPaused) BOOL audioPaused;
@property (nonatomic, getter=isVideoPaused) BOOL videoPaused;
@property (nonatomic, getter=isOneToOneEnabled) BOOL oneToOneEnabled;
@property (nonatomic) float volume;
@property (readonly, nonatomic) NSData *frequencyLevels;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)archiveMediaStates:(id)a0;
+ (unsigned int)defaultStateForMediaType:(unsigned int)a0 isLocal:(BOOL)a1;
+ (BOOL)isMediaStateAPISupportedForMediaType:(unsigned int)a0;
+ (id)loopbackNegotiationDataWithData:(id)a0;
+ (id)unarchiveMediaStatesWithData:(id)a0;

- (void)dealloc;
- (void)appendConfigurationToXPCConfiguration:(id)a0;
- (void)completeAudioEnabled:(BOOL)a0 didSucceed:(BOOL)a1 error:(id)a2;
- (void)completeAudioPaused:(BOOL)a0 didSucceed:(BOOL)a1 error:(id)a2;
- (void)completeScreenEnabled:(BOOL)a0 didSucceed:(BOOL)a1 error:(id)a2;
- (void)completeSetMediaState:(unsigned int)a0 forMediaType:(unsigned int)a1 didSucceed:(BOOL)a2 error:(id)a3;
- (void)completeVideoEnabled:(BOOL)a0 didSucceed:(BOOL)a1 error:(id)a2;
- (void)completeVideoPaused:(BOOL)a0 didSucceed:(BOOL)a1 error:(id)a2;
- (void)deregisterFromNotifications;
- (void)dispatchedCompleteAudioEnabled:(BOOL)a0 didSucceed:(BOOL)a1 error:(id)a2;
- (void)dispatchedCompleteAudioPaused:(BOOL)a0 didSucceed:(BOOL)a1 error:(id)a2;
- (void)dispatchedCompleteScreenEnabled:(BOOL)a0 didSucceed:(BOOL)a1 error:(id)a2;
- (void)dispatchedCompleteVideoEnabled:(BOOL)a0 didSucceed:(BOOL)a1 error:(id)a2;
- (void)dispatchedCompleteVideoPaused:(BOOL)a0 didSucceed:(BOOL)a1 error:(id)a2;
- (void)dispatchedLegacySetMediaState:(unsigned int)a0 forMediaType:(unsigned int)a1;
- (unsigned int)dispatchedMediaStateForMediaType:(unsigned int)a0;
- (void)dispatchedSetMediaState:(unsigned int)a0 forMediaType:(unsigned int)a1;
- (BOOL)generateMediaStateEntryForMediaType:(unsigned int)a0;
- (void)handleLegacyTransitionsForMediaType:(unsigned int)a0 mediaState:(unsigned int)a1 previousState:(unsigned int)a2 didSucceed:(BOOL)a3 error:(id)a4;
- (id)initWithParticipantID:(unsigned long long)a0 data:(id)a1 delegate:(id)a2 queue:(id)a3;
- (BOOL)isConnectedToSession;
- (BOOL)isEnabledMediaType:(unsigned int)a0;
- (BOOL)isPausedMediaType:(unsigned int)a0;
- (unsigned int)mediaStateForMediaType:(unsigned int)a0;
- (id)newNSErrorWithErrorDictionary:(id)a0;
- (void)printMediaStates;
- (void)registerBlocksForNotifications;
- (void)setMediaState:(unsigned int)a0 forMediaType:(unsigned int)a1;
- (void)setMediaType:(unsigned int)a0 enabled:(BOOL)a1 mediaString:(const char *)a2 xpcMessageKey:(char *)a3 xpcOperationKey:(id)a4 completionBlock:(id /* block */)a5;
- (void)setMediaType:(unsigned int)a0 paused:(BOOL)a1 mediaString:(const char *)a2 xpcMessageKey:(char *)a3 xpcOperationKey:(id)a4 completionBlock:(id /* block */)a5;
- (void)setMediaTypeToSpatialSourceIDMap:(id)a0;
- (void)setStreamTokens:(id)a0;
- (void)setupConfig;
- (BOOL)setupMediaStates;
- (void)setupNotificationQueue:(id)a0;
- (unsigned long long)spatialAudioSourceIDForMediaType:(unsigned int)a0;
- (void)stateTransitionForMediaType:(unsigned int)a0 mediaState:(unsigned int)a1 previousState:(unsigned int)a2 didSucceed:(BOOL)a3 error:(id)a4;
- (void)storeMediaState:(unsigned int)a0 forMediaType:(unsigned int)a1;
- (long long)streamTokenForStreamGroupID:(unsigned int)a0;
- (void)updateLegacyStates;

@end
