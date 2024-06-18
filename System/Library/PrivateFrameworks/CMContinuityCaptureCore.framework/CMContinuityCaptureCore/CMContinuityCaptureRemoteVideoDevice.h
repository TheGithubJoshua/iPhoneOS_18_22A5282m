@class NSMutableDictionary, AVCaptureDevice, NSObject, AVCaptureMetadataOutput, AVCMediaStreamNegotiator, AVCStreamInput, NSMutableArray, CMContinuityCaptureStreamFormat, AVCaptureDeviceInput, CMContinuityCaptureDeviceCapabilities, CMContinuityCaptureRemoteClient, NSString, AVCVideoStream, NSDate, NSDictionary, NSArray, NSData, AVCapturePhotoOutput, CMContinuityCaptureConfiguration, CMContinuityCaptureRemoteCompositeDevice;
@protocol OS_dispatch_queue, OS_dispatch_group;

@interface CMContinuityCaptureRemoteVideoDevice : NSObject <CMContinuityCaptureRemoteDevice> {
    NSMutableArray *_connections;
    CMContinuityCaptureConfiguration *_activeConfiguration;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _streaming;
    unsigned int _frameRateThrottledByThermalLevelOrPowerMode;
    CMContinuityCaptureStreamFormat *_activeFormat;
    AVCapturePhotoOutput *_photoOutput;
    NSMutableDictionary *_photoRequests;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _photoRequestsLock;
    long long _videoBufferOutputCounter;
    long long _videoBufferDropCounter;
    AVCaptureDeviceInput *_videoDataInput;
    AVCaptureMetadataOutput *_metadataOutput;
    AVCVideoStream *_avcVideoStream;
    AVCStreamInput *_avcStreamInput;
    NSObject<OS_dispatch_group> *_pendingAVCActivationGroup;
    NSObject<OS_dispatch_group> *_pendingAVCTeardownGroup;
    NSObject<OS_dispatch_group> *_pendingAVCNegotiationGroup;
    CMContinuityCaptureRemoteClient *_client;
    CMContinuityCaptureDeviceCapabilities *_capabilities;
    long long _entity;
    CMContinuityCaptureRemoteCompositeDevice *_compositeDevice;
    AVCMediaStreamNegotiator *_avcStreamNegotiator;
    NSData *_currentAnswer;
    NSMutableDictionary *_cmControlByName;
    NSString *_lastStreamStartTime;
    NSDate *_lastStreamStopTimeInDate;
    NSObject<OS_dispatch_group> *_streamStreamGroup;
    BOOL _avCaptureSessionStarted;
    id /* block */ _startAVCaptureTimeoutBlock;
    BOOL _pendingFirstSendStreamLogPrintAfterSetup;
    id /* block */ _bufferFailureCheckBlock;
    unsigned long long _numberOfAVCFramesDropped;
    unsigned long long _lastStreamGenerationID;
    NSDate *_lastStreamFirstFrameDispatchTimeInDate;
    NSMutableArray *_streamSessionLogs;
    NSMutableArray *_controlSetLogs;
    BOOL _avcActive;
    unsigned int _throttledEffectFrameRate;
    unsigned int _streamingSessionID;
    NSDictionary *_pendingCenterStageRectOfInterestControl;
}

@property (readonly, retain) AVCaptureDevice *videoDevice;
@property (readonly, retain) NSArray *controls;
@property (readonly, retain) CMContinuityCaptureConfiguration *activeConfiguration;
@property (readonly, getter=isCenterStageRunning) BOOL centerStageRunning;
@property (readonly, retain) CMContinuityCaptureRemoteClient *client;
@property (readonly, retain) NSObject<OS_dispatch_queue> *queue;
@property (readonly) long long entity;
@property (readonly, retain) CMContinuityCaptureDeviceCapabilities *capabilities;
@property (readonly, weak) CMContinuityCaptureRemoteCompositeDevice *compositeDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)streaming;
- (void)captureOutput:(id)a0 didFinishProcessingPhoto:(id)a1 error:(id)a2;
- (void)captureOutput:(id)a0 didDropSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void).cxx_destruct;
- (void)captureOutput:(id)a0 didFinishCaptureForResolvedSettings:(id)a1 error:(id)a2;
- (void)streamDidStop:(id)a0;
- (void)_observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)captureOutput:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 fromConnection:(id)a2;
- (void)_abort:(id /* block */)a0;
- (void)abort:(id /* block */)a0;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)streamDidRTPTimeOut:(id)a0;
- (void)streamDidServerDie:(id)a0;
- (void)didStartStreamInput:(id)a0;
- (void)didStopStreamInput:(id)a0;
- (void)serverDidDie;
- (BOOL)configureWithConfiguration:(id)a0 error:(id *)a1;
- (void)_startStream:(id)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_setValueForControl:(id)a0 completion:(id /* block */)a1;
- (BOOL)_configureWithConfiguration:(id)a0 error:(id *)a1;
- (BOOL)_deviceFormat:(id)a0 isCompatibleWithConfiguration:(id)a1 requiringMultiCamSupport:(BOOL)a2;
- (void)_postEvent:(id)a0 entity:(long long)a1;
- (void)_setFaceDrivenAFEnabled:(BOOL)a0 forCaptureDevice:(id)a1;
- (BOOL)_shouldPrintDroppedSampleBufferLog:(long long)a0;
- (BOOL)_shouldPrintSampleBufferLog:(long long)a0;
- (void)_stopStream:(long long)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)_terminateAVCSession:(id /* block */)a0;
- (void)_throttleFrameRateByThermalLevelPowerMode;
- (void)_unthrottleFrameRateByThermalLevelPowerMode;
- (void)_updateActiveMaxFrameRate:(unsigned int)a0;
- (void)_updateActiveMinFrameRate:(unsigned int)a0;
- (BOOL)_updateCenterStageRectOfInterest:(id)a0;
- (void)_updateControlStatus;
- (void)_updatePhotoOutputConfigs;
- (void)_updatePortraitEffect:(BOOL)a0;
- (void)_updateStudioLighting:(BOOL)a0;
- (void)_updateVideoZoomFactor:(double)a0;
- (void)captureStillImage:(id)a0 entity:(long long)a1 completion:(id /* block */)a2;
- (void)checkThermalLevelPowerModeAndToggleFrameRateThrottling;
- (void)clearAVCArtifacts;
- (id)createAVCVideoStreamForSidecarStream:(id)a0;
- (void)debugInfo:(id /* block */)a0;
- (void)dispatchFrame:(struct opaqueCMSampleBuffer { } *)a0 entity:(long long)a1 completion:(id /* block */)a2;
- (BOOL)forceCenterStage:(BOOL)a0;
- (void)handleAVCNegotiation:(long long)a0 data:(id)a1;
- (id)initWithCompositeDevice:(id)a0 entity:(long long)a1 capabilities:(id)a2 client:(id)a3;
- (void)logControlSetSummary:(id)a0;
- (void)logStreamSessionSummary;
- (id)newVideoStreamConfigWithIsWired:(BOOL)a0 key:(id)a1 streamInputID:(long long)a2 format:(id)a3 frameRate:(unsigned int)a4;
- (void)postAVCStreamInterruption;
- (void)postDataEvent:(id)a0 entity:(long long)a1 data:(id)a2;
- (void)postEvent:(id)a0 entity:(long long)a1;
- (void)preStartAVCaptureSessionForConfiguration:(id)a0;
- (void)resetClient:(id)a0;
- (void)resetClientComplete:(id)a0;
- (void)restoreConfigurationFrameRate;
- (void)setFaceDrivenAFEnabled:(BOOL)a0;
- (void)setValueForControl:(id)a0 completion:(id /* block */)a1;
- (void)setupControls;
- (void)startAVCInputForConfiguration:(id)a0 completion:(id /* block */)a1;
- (void)startStream:(id)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)stopAVCInput:(id /* block */)a0 option:(unsigned long long)a1;
- (void)stopStream:(long long)a0 option:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)terminateAVCSession:(id /* block */)a0;
- (void)updateControlStatus;

@end