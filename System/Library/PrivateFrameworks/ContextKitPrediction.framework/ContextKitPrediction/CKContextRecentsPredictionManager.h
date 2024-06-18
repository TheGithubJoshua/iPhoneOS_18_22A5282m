@class NSString, ATXProactiveSuggestionClientModel, DNDModeConfigurationService, NSObject, CKContextRecentsCache;
@protocol CKContextRecentsPredictionManagerDelegate, OS_dispatch_queue, OS_os_transaction;

@interface CKContextRecentsPredictionManager : NSObject <CKContextRecentsCacheDelegate> {
    ATXProactiveSuggestionClientModel *_clientModel;
    id /* block */ _suggestionsContributionBlock;
    id /* block */ _suggestionsClearingBlock;
    NSObject<OS_dispatch_queue> *_suggestionReportingQueue;
    DNDModeConfigurationService *_dndService;
    NSObject<OS_os_transaction> *_suggestionDonationTransaction;
}

@property (readonly, nonatomic) CKContextRecentsCache *recentsCache;
@property (weak, nonatomic) id<CKContextRecentsPredictionManagerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (long long)_suggestionConfidenceForRecent:(id)a0 withCount:(unsigned long long)a1;
- (void)stopContributingPredictions;
- (id)_modeForModeIdentifier:(id)a0 withConfigurations:(id)a1;
- (id)_userFacingReasonStringForRecentWithNumberOfInstances:(unsigned long long)a0 mode:(id)a1;
- (void)retrievePredictionsForMode:(id)a0 withReply:(id /* block */)a1;
- (void)_createDoNotDisturbServiceIfNecessary;
- (id)_recentsEligibleForDonationMatchingMode:(id)a0 fromRecents:(id)a1 uuidsToCounts:(id)a2;
- (void)modeDidChangeToModeWithUUIDString:(id)a0 forCache:(id)a1;
- (void)didInitiatePruningMaintenanceTaskForCache:(id)a0 existingRecentsUUIDs:(id)a1;
- (void).cxx_destruct;
- (void)startContributingPredictions;
- (void)_updateBlendingLayerWithSuggestions:(id)a0;
- (id)eligiblePredictionsMatchingMode:(id)a0 forRecents:(id)a1 uuidsToCounts:(id)a2;
- (void)_clearSuggestions;
- (void)dealloc;
- (id)_localizedStringForKey:(id)a0;
- (id)_recentlyUsedStringForMode:(id)a0;
- (id)_oftenUsedStringForMode:(id)a0;
- (id)_retrieveModeConfigurations;
- (void)_handleModeChangeToModeWithUUIDString:(id)a0 forCache:(id)a1;
- (void)_createClientModelIfNecessary;

@end
