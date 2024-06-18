@class TITypingSession, NSString;

@interface TIAutocorrectionAccuracyAnalyzer : NSObject <TITypingSessionAnalyzing>

@property (retain, nonatomic) TITypingSession *currentSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (BOOL)analyzeWordEntryAligned:(id)a0;
- (void)registerEventSpec;
- (void).cxx_destruct;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;

@end
