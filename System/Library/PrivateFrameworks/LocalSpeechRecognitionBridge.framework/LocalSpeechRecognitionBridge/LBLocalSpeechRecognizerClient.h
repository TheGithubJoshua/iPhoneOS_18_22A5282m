@class NSString, NSXPCConnection, NSObject;
@protocol OS_dispatch_queue, LBLocalSpeechRecognizerClientDelegate;

@interface LBLocalSpeechRecognizerClient : NSObject <LBLocalSpeechServiceDelegate> {
    BOOL _recognitionActive;
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_xpcConnection;
}

@property (weak, nonatomic) id<LBLocalSpeechRecognizerClientDelegate> delegate;
@property (retain, nonatomic) NSString *uuidString;
@property (retain, nonatomic) NSString *xpcConnectionUUIDString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isInstalledFromStatusString:(id)a0;

- (id)_connection;
- (id)initWithDelegate:(id)a0;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(id)a0 language:(id)a1 tokens:(id)a2;
- (void)preheatLocalSpeechRecognitionWithLanguage:(id)a0 source:(unsigned long long)a1;
- (void)stopLocalSpeechRecognitionTaskWithReason:(unsigned long long)a0;
- (void)stopLocalSpeechRecognitionTaskWithReason:(unsigned long long)a0 requestId:(id)a1;
- (oneway void)localSpeechServiceDidReceivedFinalResultCandidateWithRequestId:(id)a0 speechPackage:(id)a1;
- (void)pauseLocalSpeechRecognitionForRequestId:(id)a0;
- (oneway void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(id)a0 rcId:(unsigned long long)a1 speechPackage:(id)a2 duration:(double)a3 metadata:(id)a4;
- (void)startDeliverLocalSpeechRecognitionResultsWithSettings:(id)a0;
- (oneway void)localSpeechServiceDidReceivedEagerResultWithRequestId:(id)a0 rcId:(unsigned long long)a1 shouldAccept:(BOOL)a2 mitigationSignal:(BOOL)a3 featuresToLog:(id)a4;
- (id)_newConnection;
- (oneway void)localSpeechServiceDidReceivedFinalResultWithRequestId:(id)a0 speechPackage:(id)a1 metadata:(id)a2;
- (void)disableLocalSpeechRecognitionForRequestId:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (oneway void)localSpeechServiceDidReceivedEagerRecognitionCandidateWithRequestId:(id)a0 rcId:(unsigned long long)a1 speechPackage:(id)a2 duration:(double)a3;
- (void)resumeLocalRecognitionWithRequestId:(id)a0 prefixText:(id)a1 postfixText:(id)a2 selectedText:(id)a3;
- (oneway void)localSpeechServiceDidReceivedVoiceIdScoreCard:(id)a0;
- (void)dealloc;
- (id)_service;
- (void)resetCacheAndCompileAllAssets;
- (void)sendSpeechCorrectionInfo:(id)a0 interactionIdentifier:(id)a1;
- (oneway void)localSpeechServiceDidReceivedPartialResultWithRequestId:(id)a0 language:(id)a1 tokens:(id)a2 metadata:(id)a3;
- (oneway void)localSpeechServiceDidCompletionRecognitionWithStatistics:(id)a0 requestId:(id)a1 endpointMode:(long long)a2 error:(id)a3;
- (void)setLocalSpeechRecognizerClientDelegate:(id)a0;
- (oneway void)localSpeechServiceDidReceivedFinalResultWithRequestId:(id)a0 speechPackage:(id)a1;

@end
