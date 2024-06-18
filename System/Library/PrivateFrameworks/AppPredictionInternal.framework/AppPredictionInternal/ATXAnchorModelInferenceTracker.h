@class NSUserDefaults;

@interface ATXAnchorModelInferenceTracker : NSObject {
    NSUserDefaults *_defaults;
}

- (id)init;
- (void)trackInferenceStartedForInferenceEvent:(id)a0;
- (void)trackInferenceFinishedForInferenceEvent:(id)a0;
- (void)persistInferenceEvent:(id)a0;
- (void)clearAllIncompleteInferenceEvents;
- (void).cxx_destruct;
- (id)inferenceEventsToTryAgain;
- (id)fetchPersistedInferenceEvents;
- (void)trackInferenceFailedForInferenceEvent:(id)a0;

@end
