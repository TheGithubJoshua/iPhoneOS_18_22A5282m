@class BSAbsoluteMachTimer;
@protocol SBWalletPrearmRecognizerDelegate;

@interface SBWalletPrearmRecognizer : NSObject {
    id<SBWalletPrearmRecognizerDelegate> _delegate;
    double _timeout;
    BSAbsoluteMachTimer *_timer;
    BOOL _invalidated;
}

- (id)initWithDelegate:(id)a0;
- (void)invalidate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_invalidate;
- (double)_computeDoubleTapTimeout;
- (void)_invalidateForFailureReason:(unsigned long long)a0;
- (void)_invalidateForSuccess;
- (void)menuButtonDoublePress;
- (void)menuButtonSinglePress;
- (void)startRecognizing;

@end
