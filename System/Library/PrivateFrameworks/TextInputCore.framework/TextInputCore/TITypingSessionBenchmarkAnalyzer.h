@class NSString, TITypingSession, TITypingSessionAligned;

@interface TITypingSessionBenchmarkAnalyzer : NSObject <TITypingSessionAnalyzing> {
    TITypingSession *_session;
    TITypingSessionAligned *_alignedSession;
    unsigned long long _typingSessionConfidence;
    double _sessionAlignmentConfidence;
    int _sessionWords;
    int _alignedWords;
    int _sessionWordsWithText;
    int _alignedWordsWithText;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)analyzeSession:(id)a0 alignedSession:(id)a1 withConfidence:(unsigned long long)a2;
- (void)registerEventSpec;
- (void).cxx_destruct;
- (unsigned long long)evaluateConfidenceInSession:(id)a0 alignedSession:(id)a1;
- (void)dispatchEvent;

@end
