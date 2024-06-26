@class NSArray, NSString, NSDictionary, BWNodeOutput, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BWAudioSourceNode : BWSourceNode <BWAudioSourceRecordingReadinessDelegate, BWZoomCompletionDelegate> {
    BWNodeOutput *_outputsByMicSourcePosition[3];
    NSDictionary *_sourceRequirements;
    struct opaqueCMSession { } *_CMSession;
    struct __CFString { } *_CMSessionAudioMode;
    BOOL _useDecoupledIO;
    BOOL _prefersNoInterruptionsByRingtonesAndAlerts;
    NSObject<OS_dispatch_queue> *_cmSessionSetRecordingRelatedPropertyQueue;
    BOOL _isConfiguredForContinuityCapture;
    BOOL _doEndInterruption;
    BOOL _isAppAudioSession;
    BOOL _configuresSession;
    double _sessionRequiredSampleRate;
    struct { unsigned int val[8]; } _clientAuditToken;
    int _clientPID;
    NSString *_clientAudioClockDeviceUID;
    struct OpaqueCMClock { } *_clock;
    unsigned int _audioDeviceID;
    struct opaqueCMFormatDescription { } *_auOutputFormatDescription;
    unsigned int _pullDuration;
    struct OpaqueAudioComponentInstance { } *_audioUnit;
    unsigned int _auSubType;
    struct opaqueCMSimpleQueue { } *_renderProcErrorQueue;
    struct opaqueCMSimpleQueue { } *_inactiveBuffersQueue;
    struct opaqueCMSimpleQueue { } *_activeBuffersQueue;
    unsigned long long _nextExpectedHostTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _nextExpectedSampleTime;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _ioprocTimeStampDeltaLimit;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _prevPTS;
    unsigned int _prevNumFrames;
    NSObject<OS_dispatch_queue> *_generateSamplesDispatchQueue;
    BOOL _streamStarted;
    BOOL _endOfDataMarkerSent;
    BOOL _levelMeteringEnabled;
    int _audioLevelUnits;
    struct { long long value; int timescale; unsigned int flags; long long epoch; } _latencyOffset;
    NSObject<OS_dispatch_source> *_silenceTimer;
    long long _auRenderCount;
    long long _silenceFramesGeneratedSinceLastAURenderProc;
    struct TimestampedAudioBufferList { struct __CFAllocator *allocator; long long auRenderCount; unsigned int dataBytesCapacity; unsigned int numFrames; struct { long long value; int timescale; unsigned int flags; long long epoch; } pts; struct AudioBufferList *abl; unsigned int numPrependedSilenceFrames; double sampleTime; } _currentSilenceBuffer;
    NSObject<OS_dispatch_queue> *_preparedToRecordHandlerCallbackQueue;
    BOOL _livePhotoCaptureEnabled;
    BOOL _stereoAudioCaptureEnabled;
    BOOL _videoRecordingEnabled;
    BOOL _isMultiCamSession;
    BOOL _flipStereoAudioCaptureChannels;
    float _stereoAudioCapturePairedCameraBaseFieldOfView;
    float _stereoAudioCapturePairedCameraZoomFactor;
    NSObject<OS_dispatch_queue> *_zoomHandlerQueue;
    long long _maxZoomFrequencyNanos;
    long long _nextZoomTime;
    NSObject<OS_dispatch_source> *_zoomTimer;
    float _nextZoomFactor;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _zoomLock;
    BOOL _silenceFramesFillingDisabled;
}

@property (readonly, nonatomic) NSArray *audioLevels;
@property (readonly, nonatomic) BOOL didBeginInterruption;
@property (nonatomic) BOOL interrupted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (id)audioSourceNodeWithAttributes:(id)a0 sessionPreset:(id)a1 clock:(struct OpaqueCMClock { } *)a2 doConfigureAudio:(BOOL)a3 CMSession:(struct opaqueCMSession { } *)a4 doEndInterruption:(BOOL)a5 clientAuditToken:(struct { unsigned int x0[8]; })a6 clientOSVersionSupportsDecoupledIO:(BOOL)a7 clientAudioClockDeviceUID:(id)a8 audioCaptureConnectionConfigurations:(id)a9 isConfiguredForContinuityCapture:(BOOL)a10 isMultiCamSession:(BOOL)a11;

- (BOOL)livePhotoCaptureEnabled;
- (void)setLivePhotoCaptureEnabled:(BOOL)a0;
- (BOOL)stereoAudioCaptureEnabled;
- (BOOL)stop:(id *)a0;
- (void)unprepareForRecording;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (float)stereoAudioCapturePairedCameraBaseFieldOfView;
- (float)stereoAudioCapturePairedCameraZoomFactor;
- (BOOL)hasNonLiveConfigurationChanges;
- (BOOL)start:(id *)a0;
- (id)outputForMicSourcePosition:(int)a0;
- (BOOL)flipStereoAudioCaptureChannels;
- (id)nodeSubType;
- (void)makeCurrentConfigurationLive;
- (void)setStereoAudioCaptureEnabled:(BOOL)a0;
- (struct OpaqueCMClock { } *)clock;
- (void)setStereoAudioCapturePairedCameraBaseFieldOfView:(float)a0;
- (BOOL)levelMeteringEnabled;
- (void)zoomCommandHandler:(id)a0 didApplyZoomFactor:(float)a1 zoomFactorWithoutFudge:(float)a2 rampComplete:(BOOL)a3 rampCommandID:(int)a4;
- (void)prepareToStartRecordingWithOrientation:(int)a0 recordingSettingsID:(long long)a1 prefersNoInterruptionsByRingtonesAndAlerts:(BOOL)a2 completionHandler:(id /* block */)a3;
- (void)makeOutputsLiveIfNeeded;
- (void)dealloc;
- (void)setFlipStereoAudioCaptureChannels:(BOOL)a0;
- (void)setVideoRecordingEnabled:(BOOL)a0;
- (void)setStereoAudioCapturePairedCameraZoomFactor:(float)a0;
- (void)setLevelMeteringEnabled:(BOOL)a0;
- (BOOL)videoRecordingEnabled;

@end
