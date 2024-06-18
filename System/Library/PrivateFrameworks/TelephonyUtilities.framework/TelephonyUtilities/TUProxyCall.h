@class NSData, NSString, TUCallProvider, NSUUID, NSSet, NSMutableDictionary, NSDictionary, NSURL, TUHandle, TUCallScreenShareAttributes, TUCallDisplayContext, TUParticipant;
@protocol TURemoteVideoClient, TUCallServicesProxyCallActions;

@interface TUProxyCall : TUCall <AVCRemoteVideoClientDelegate, NSSecureCoding> {
    BOOL _ptt;
    BOOL _isSendingVideo;
    BOOL _uplinkMuted;
    BOOL _downlinkMuted;
    BOOL _requiresRemoteVideo;
    BOOL _mixesVoiceWithMedia;
    NSURL *_imageURL;
    TUCallScreenShareAttributes *_screenShareAttributes;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<TURemoteVideoClient> localVideo;
@property (retain, nonatomic) id<TURemoteVideoClient> remoteVideo;
@property (retain, nonatomic) NSMutableDictionary *remoteVideoModeToLayer;
@property (retain, nonatomic) NSMutableDictionary *localVideoModeToLayer;
@property (nonatomic) struct CGSize { double width; double height; } remoteScreenPortraitAspectRatio;
@property (nonatomic) struct CGSize { double width; double height; } remoteScreenLandscapeAspectRatio;
@property (nonatomic) long long remoteScreenOrientation;
@property (nonatomic) struct CGSize { double width; double height; } remoteAspectRatio;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } remoteVideoContentRect;
@property (nonatomic) long long cameraType;
@property (nonatomic) long long remoteCameraOrientation;
@property (weak, nonatomic) id<TUCallServicesProxyCallActions> proxyCallActionsDelegate;
@property (copy, nonatomic) TUParticipant *activeRemoteParticipant;
@property (copy, nonatomic) NSString *announceProviderIdentifier;
@property (retain, nonatomic) TUHandle *handle;
@property (copy, nonatomic) NSString *isoCountryCode;
@property (copy, nonatomic) NSString *callUUID;
@property (nonatomic) int callStatus;
@property (nonatomic) long long serviceStatus;
@property (nonatomic) long long transmissionMode;
@property (nonatomic, getter=isReceivingTransmission) BOOL receivingTransmission;
@property (nonatomic, getter=isSendingTransmission) BOOL sendingTransmission;
@property (nonatomic, getter=isHostedOnCurrentDevice) BOOL hostedOnCurrentDevice;
@property (retain, nonatomic) TUCallProvider *provider;
@property (retain, nonatomic) TUCallProvider *backingProvider;
@property (retain, nonatomic) TUCallProvider *displayProvider;
@property (nonatomic, getter=isOutgoing) BOOL outgoing;
@property (nonatomic, getter=isVoicemail) BOOL voicemail;
@property (copy, nonatomic) NSString *callerNameFromNetwork;
@property (nonatomic) BOOL isVideo;
@property (nonatomic, getter=isBlocked) BOOL blocked;
@property (nonatomic, getter=isEmergency) BOOL emergency;
@property (nonatomic, getter=isFailureExpected) BOOL failureExpected;
@property (nonatomic, getter=isInternational) BOOL international;
@property (nonatomic, getter=isSOS, setter=setSOS:) BOOL sos;
@property (nonatomic, getter=isUsingBaseband) BOOL usingBaseband;
@property (nonatomic) BOOL supportsEmergencyFallback;
@property (nonatomic) int ttyType;
@property (nonatomic) BOOL supportsTTYWithVoice;
@property (nonatomic) long long bluetoothAudioFormat;
@property (copy, nonatomic) NSString *audioCategory;
@property (copy, nonatomic) NSString *audioMode;
@property (nonatomic) BOOL needsManualInCallSounds;
@property (copy, nonatomic) NSDictionary *endedReasonUserInfo;
@property (copy, nonatomic) NSString *endedErrorString;
@property (copy, nonatomic) NSString *endedReasonString;
@property (retain, nonatomic) NSData *localFrequency;
@property (retain, nonatomic) NSData *remoteFrequency;
@property (nonatomic) float remoteMeterLevel;
@property (nonatomic) float localMeterLevel;
@property (copy, nonatomic) NSUUID *callGroupUUID;
@property (nonatomic) int callRelaySupport;
@property (nonatomic, getter=isMediaStalled) BOOL mediaStalled;
@property (nonatomic, getter=isVideoDegraded) BOOL videoDegraded;
@property (nonatomic, getter=isVideoPaused) BOOL videoPaused;
@property (nonatomic, getter=isVideoMirrored) BOOL videoMirrored;
@property (nonatomic) BOOL isSendingAudio;
@property (nonatomic, getter=isThirdPartyVideo) BOOL thirdPartyVideo;
@property (nonatomic, getter=isSharingScreen) BOOL sharingScreen;
@property (nonatomic) long long videoStreamToken;
@property (nonatomic) long long inputAudioPowerSpectrumToken;
@property (nonatomic) long long outputAudioPowerSpectrumToken;
@property (retain, nonatomic) NSDictionary *providerContext;
@property (copy, nonatomic) TUCallDisplayContext *displayContext;
@property (copy, nonatomic) NSSet *remoteParticipantHandles;
@property (nonatomic) BOOL prefersExclusiveAccessToCellularNetwork;
@property (nonatomic, getter=isRemoteUplinkMuted) BOOL remoteUplinkMuted;
@property (copy, nonatomic) NSUUID *localSenderIdentityUUID;
@property (copy, nonatomic) NSUUID *localSenderIdentityAccountUUID;
@property (nonatomic) BOOL shouldSuppressInCallUI;
@property (nonatomic, getter=isMutuallyExclusiveCall) BOOL mutuallyExclusiveCall;
@property (nonatomic) BOOL wantsStagingArea;
@property (nonatomic) int originatingUIType;
@property (nonatomic, getter=isConversation) BOOL conversation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)proxyCallWithCall:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)imageURL;
- (void)setDownlinkMuted:(BOOL)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isUplinkMuted;
- (void)setUplinkMuted:(BOOL)a0;
- (void)setMixesVoiceWithMedia:(BOOL)a0;
- (void)answerWithRequest:(id)a0;
- (BOOL)isDownlinkMuted;
- (struct CGSize { double x0; double x1; })localAspectRatioForOrientation:(long long)a0;
- (void)updateWithCall:(id)a0;
- (void)setRemoteVideoPresentationSize:(struct CGSize { double x0; double x1; })a0;
- (long long)_cameraTypeForVideoAttributeCamera:(int)a0;
- (void)_createLocalVideoIfNecessary;
- (void)_createRemoteVideoIfNecessary;
- (long long)_orientationForVideoAttributesOrientation:(int)a0;
- (void)_synchronizeLocalVideo;
- (void)_synchronizeRemoteVideo;
- (void)_updateVideoCallAttributes:(id)a0;
- (void)_updateVideoStreamToken:(long long)a0;
- (int)avcRemoteVideoModeForMode:(long long)a0;
- (void)disconnectWithReason:(int)a0;
- (id)initWithUniqueProxyIdentifier:(id)a0 endpointOnCurrentDevice:(BOOL)a1;
- (BOOL)isPTT;
- (BOOL)isSendingVideo;
- (BOOL)mixesVoiceWithMedia;
- (void)playDTMFToneForKey:(unsigned char)a0;
- (struct CGSize { double x0; double x1; })remoteScreenAspectRatio;
- (void)remoteVideoClient:(id)a0 remoteMediaDidStall:(BOOL)a1;
- (void)remoteVideoClient:(id)a0 remoteScreenAttributesDidChange:(id)a1;
- (void)remoteVideoClient:(id)a0 remoteVideoAttributesDidChange:(id)a1;
- (void)remoteVideoClient:(id)a0 remoteVideoDidPause:(BOOL)a1;
- (void)remoteVideoClient:(id)a0 videoDidDegrade:(BOOL)a1;
- (BOOL)requiresRemoteVideo;
- (id)screenShareAttributes;
- (void)sendHardPauseDigits;
- (void)setCallDisconnectedDueToComponentCrash;
- (void)setDisconnectedReason:(int)a0;
- (void)setEndpointOnCurrentDevice:(BOOL)a0;
- (void)setIsSendingVideo:(BOOL)a0;
- (void)setLocalVideoLayer:(id)a0 forMode:(long long)a1;
- (void)setRemoteVideoLayer:(id)a0 forMode:(long long)a1;
- (void)setRemoteVideoPresentationState:(int)a0;
- (void)setRequiresRemoteVideo:(BOOL)a0;
- (void)setScreenShareAttributes:(id)a0;
- (void)setSharingScreen:(BOOL)a0 attributes:(id)a1;
- (void)setShouldSuppressRingtone:(BOOL)a0;
- (void)setTransitionStatus:(int)a0;
- (void)setWantsHoldMusic:(BOOL)a0;
- (void)updateProxyCallWithDaemon;

@end