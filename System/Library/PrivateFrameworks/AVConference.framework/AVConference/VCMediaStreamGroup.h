@class AVCStatisticsCollector, NSArray, NSString, VCNetworkFeedbackController, NSDictionary, VCSecurityKeyManager, NSObject, VCMoments, TimingCollection, VCMediaKeyIndex;
@protocol VCMediaCaptureController, OS_dispatch_queue;

@interface VCMediaStreamGroup : VCObject <VCMediaStreamDelegate, VCMediaCaptureController, VCSecurityEventHandler, VCMediaStreamNotification> {
    NSArray *_mediaStreams;
    NSDictionary *_groupEntries;
    NSString *_participantUUID;
    NSString *_sessionUUID;
    NSObject<OS_dispatch_queue> *_stateQueue;
    VCNetworkFeedbackController *_networkFeedbackController;
    TimingCollection *_perfTimers;
    double _creationTime;
    double _firstMediaPacketTime;
    double _firstMediaKeyIndexTime;
    BOOL _firstMediaFrameGapDetected;
    VCMediaKeyIndex *_firstMediaKeyIndex;
    BOOL _areStreamsSuspended;
    id _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    unsigned long long _idsParticipantID;
    unsigned int _rtpTimestampRate;
    id _captureController;
    VCSecurityKeyManager *_securityKeyManager;
    struct tagVCJBTargetEstimatorSynchronizer { } *_jbTargetEstimatorSynchronizer;
}

@property (readonly, nonatomic) unsigned int streamGroupID;
@property (nonatomic) unsigned int syncGroupID;
@property (readonly, nonatomic) long long streamToken;
@property (nonatomic) unsigned int mediaType;
@property (nonatomic) unsigned int mediaSubtype;
@property (readonly, nonatomic) unsigned int state;
@property (nonatomic) id<VCMediaCaptureController> captureController;
@property (nonatomic) BOOL encryptionInfoReceived;
@property (readonly, nonatomic) NSArray *mediaStreamInfoArray;
@property (readonly, nonatomic) NSDictionary *streamIDToMediaStreamMap;
@property (readonly, nonatomic) BOOL hasRepairedStreams;
@property (retain, nonatomic) AVCStatisticsCollector *statisticsCollector;
@property (retain, nonatomic) VCMoments *moments;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pause;
- (id)stop;
- (id)start;
- (id)initWithConfig:(id)a0;
- (id)stopCapture;
- (id)resume;
- (void)dealloc;
- (id)startCapture;
- (void)didStart;
- (void)didStop;
- (BOOL)addSyncDestination:(id)a0;
- (void)callDelegateWithBlock:(id /* block */)a0;
- (void)collectAndLogChannelMetrics:(struct { unsigned int x0; unsigned int x1[5]; unsigned int x2; double x3; struct CGSize { double x0; double x1; } x4; double x5; unsigned int x6; double x7; unsigned int x8; unsigned int x9; } *)a0;
- (BOOL)configureStreams;
- (BOOL)containsStreamWithIDSStreamID:(unsigned short)a0;
- (BOOL)containsStreamWithSSRC:(unsigned int)a0;
- (void)didEncryptionKeyRollTimeout;
- (void)didPause:(BOOL)a0;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList { union tagNTP { unsigned long long x0; struct { unsigned int x0; unsigned int x1; } x1; } x0; unsigned char x1; struct tagRTCPPACKET *x2[10]; struct OpaqueCMBlockBuffer *x3; char *x4; unsigned long long x5; unsigned int x6; unsigned char x7[1472]; unsigned short x8[12]; unsigned char x9; BOOL x10; unsigned long long x11; struct { struct _RTCPPacketList *x0; } x12; } *)a0;
- (void)finalizePerfTimersForFirstMediaFrameWithTime:(double)a0;
- (void)handleActiveConnectionChange:(id)a0;
- (BOOL)handleEncryptionInfoChange:(id)a0;
- (void)mediaStream:(id)a0 didReceiveNewMediaKeyIndex:(id)a1;
- (void)mediaStream:(id)a0 didReceiveRTPGapForMediaKeyIndex:(id)a1;
- (id)pauseMediaStreams;
- (void)registerMediaStreamNotificationDelegate;
- (BOOL)removeSyncDestination:(id)a0;
- (void)resetDecryptionTimeout;
- (id)resumeMediaStreams;
- (void)setFirstMKIToFirstMediaReceivedTimerForMKIReceivedTime;
- (void)setParticipantJoinedToFirstMKITimer;
- (id)setPauseOnMediaStreams:(BOOL)a0;
- (void)setTotalMediaStallSaveIntervalWithTime:(double)a0;
- (void)setupPerfTimersWithMediaKeyIndex:(id)a0 perfTimerIndexToStart:(int)a1;
- (BOOL)setupStreamsWithConfig:(id)a0;
- (BOOL)shouldSetPause:(BOOL)a0 onStream:(id)a1;
- (id)startMediaStreams;
- (id)stopMediaStreams;
- (void)unregisterMediaStreamNotificationDelegate;
- (void)vcMediaStreamServerDidDie:(id)a0;
- (id)willStart;
- (void)willStop;

@end