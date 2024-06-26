@class CNContactStore, NSXPCConnection, BMSource, NSDictionary, NSObject, _PSSuggesterConfiguration;
@protocol OS_dispatch_queue;

@interface _PSSuggester : NSObject {
    NSXPCConnection *_connection;
    NSXPCConnection *_userConnection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    NSObject<OS_dispatch_queue> *_feedbackQueue;
    BMSource *_feedbackSource;
    CNContactStore *_contactStore;
    NSDictionary *_appBundleIdToShareExtensionMapping;
}

@property (readonly, nonatomic) _PSSuggesterConfiguration *configuration;

+ (id)suggesterWithDaemon;

- (id)init;
- (id)rankedGlobalSuggestionsFromContext:(id)a0 contactsOnly:(BOOL)a1;
- (id)shareExtensionSuggestionsFromContext:(id)a0;
- (id)contactStore;
- (void)asyncSuggestInteractionsFromContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)relativeAppUsageProbabilitiesForCandidateBundleIds:(id)a0 daysAgo:(long long)a1;
- (id)initWithConfiguration:(id)a0 feedbackRecording:(BOOL)a1;
- (id)shareSheetInteractionsFromContext:(id)a0 maximumNumberOfSuggestions:(long long)a1;
- (id)shareSheetInteractionsFromContext:(id)a0;
- (id)initWithConfiguration:(id)a0;
- (id)rankedFamilySuggestions;
- (id)familyRecommendationSuggestionsWithPredictionContext:(id)a0;
- (id)rankedAutocompleteSuggestionsFromContext:(id)a0 candidates:(id)a1;
- (void)provideFeedbackForContactsAutocompleteSuggestions:(id)a0;
- (void)_recordFeedbackToInteractionStoreWithFeedback:(id)a0 mechanism:(long long)a1;
- (id)hourOfDayProbabilitiesToInteractWithContacts:(id)a0;
- (id)rankedSiriNLContactSuggestionsFromContext:(id)a0 maxSuggestions:(id)a1 interactionId:(id)a2;
- (id)rankedZKWSuggestionsFromContext:(id)a0;
- (id)hourOfDayProbabilitiesToInteractWithContact:(id)a0;
- (void)deleteInteractionsMatchingSuggestLessFeedback:(id)a0;
- (id)suggestInteractionsFromContext:(id)a0;
- (void).cxx_destruct;
- (id)computeShareSheetEphemeralFeaturesWithPredictionContext:(id)a0;
- (id)_getUserDaemonXPCConnection;
- (void)asyncShareExtensionSuggestionsFromContext:(id)a0 completionHandler:(id /* block */)a1;
- (id)rankedNameSuggestionsFromContext:(id)a0 name:(id)a1;
- (id)photosContactInferencesSuggestionsWithPredictionContext:(id)a0;
- (id)photosRelationshipSuggestionsWithPredictionContext:(id)a0;
- (void)provideSuggestLessFeedbackForShareSheetSuggestion:(id)a0;
- (void)writeFeedbackForContactsAutocompleteSuggestions:(id)a0;
- (void)dealloc;
- (id)initWithDaemonUsingConfiguration:(id)a0;
- (void)provideFeedbackForSuggestions:(id)a0;
- (void)provideFeedbackForMessagesZkwSuggestions:(id)a0;
- (id)autocompleteSearchResultsWithPredictionContext:(id)a0;
- (id)candidatesForShareSheetRanking;

@end
