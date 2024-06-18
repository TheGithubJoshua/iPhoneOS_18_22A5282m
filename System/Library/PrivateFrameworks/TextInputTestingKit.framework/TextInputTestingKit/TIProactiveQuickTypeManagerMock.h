@class NSMutableDictionary;

@interface TIProactiveQuickTypeManagerMock : NSObject <TIProactiveQuickTypeManaging>

@property (retain) NSMutableDictionary *metrics;

- (id)searchForMeCardEmailAddresses;
- (id)init;
- (BOOL)isAutoPopupEnabled;
- (void)suggestionNotAccepted:(id)a0;
- (void)userActionWithNoNewTriggers:(id)a0 fieldType:(id)a1;
- (BOOL)isEnabled;
- (void)suggestionAccepted:(id)a0 fieldType:(id)a1;
- (void)provideFeedbackForString:(id)a0 type:(unsigned char)a1 style:(unsigned char)a2;
- (BOOL)usePQT2Flow;
- (void).cxx_destruct;
- (BOOL)isAutoCompleteEnabled;
- (id)searchForMeCardRegions;
- (void)propogateMetrics:(id)a0 data:(id)a1;
- (void)generateAndRenderProactiveSuggestionsForInput:(id)a0 withKeyboardState:(id)a1 withAdditionalPredictions:(id)a2 withSecureCandidateRenderer:(id)a3 withRenderTraits:(id)a4 withInput:(id)a5 withRecipient:(id)a6 withApplication:(id)a7 withLocale:(id)a8 nextInputWillInsertAutospace:(BOOL)a9 withIsResponseDenyListed:(BOOL)a10 withShouldDisableAutoCaps:(BOOL)a11 withAvailableApps:(id)a12 logBlock:(id /* block */)a13 async:(BOOL)a14 completion:(id /* block */)a15;
- (void)generateAndRenderProactiveSuggestionsWithInput:(id)a0 withSecureCandidateRenderer:(id)a1 withRenderTraits:(id)a2 textContentType:(id)a3 async:(BOOL)a4 completion:(id /* block */)a5;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)a0 withKeyboardState:(id)a1 withAdditionalPredictions:(id)a2 withSecureCandidateRenderer:(id)a3 withRenderTraits:(id)a4 withInput:(id)a5 withRecipient:(id)a6 withApplication:(id)a7 withLocale:(id)a8 nextInputWillInsertAutospace:(BOOL)a9 withAvailableApps:(id)a10 logBlock:(id /* block */)a11;
- (void)reset;
- (id)generateAndRenderProactiveSuggestionsWithInput:(id)a0 withSecureCandidateRenderer:(id)a1 withRenderTraits:(id)a2 textContentType:(id)a3;
- (id)generateAndRenderProactiveSuggestionsWithTriggers:(id)a0 withKeyboardState:(id)a1 withAdditionalPredictions:(id)a2 withSecureCandidateRenderer:(id)a3 withRenderTraits:(id)a4 withInput:(id)a5 withRecipient:(id)a6 withApplication:(id)a7 withLocale:(id)a8 isContinuousPath:(BOOL)a9 withAvailableApps:(id)a10 logBlock:(id /* block */)a11;
- (void)generateAndRenderProactiveSuggestionsWithTriggers:(id)a0 withKeyboardState:(id)a1 withAdditionalPredictions:(id)a2 withSecureCandidateRenderer:(id)a3 withRenderTraits:(id)a4 withInput:(id)a5 withRecipient:(id)a6 withApplication:(id)a7 withLocale:(id)a8 isContinuousPath:(BOOL)a9 withAvailableApps:(id)a10 logBlock:(id /* block */)a11 async:(BOOL)a12 completion:(id /* block */)a13;
- (id)getMeCardEmailAddresses;

@end
