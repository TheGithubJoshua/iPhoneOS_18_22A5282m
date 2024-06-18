@class NSDictionary;

@interface ATXProactiveSuggestionFeedbackResultRouter : NSObject {
    NSDictionary *_feedbackListeners;
}

- (id)clientModelIdsWithFeedbackListeners;
- (id)init;
- (void).cxx_destruct;
- (void)handleNewFeedbackResult:(id)a0;
- (id)initWithFeedbackListeners:(id)a0;
- (void)_initializeFeedbackListenersDictWith:(id)a0;

@end
