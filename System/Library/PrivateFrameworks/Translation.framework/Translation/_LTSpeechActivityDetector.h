@class NSString, SNAudioStreamAnalyzer, NSObject;
@protocol OS_dispatch_queue, _LTSpeechTranslationDelegate;

@interface _LTSpeechActivityDetector : NSObject <SNResultsObserving> {
    NSObject<OS_dispatch_queue> *_queue;
    SNAudioStreamAnalyzer *_streamAnalyzer;
    long long _position;
    id<_LTSpeechTranslationDelegate> _delegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)addSpeechAudioData:(id)a0;
- (void)request:(id)a0 didFailWithError:(id)a1;
- (id)nativeAudioFormat;
- (void)request:(id)a0 didProduceResult:(id)a1;

@end
