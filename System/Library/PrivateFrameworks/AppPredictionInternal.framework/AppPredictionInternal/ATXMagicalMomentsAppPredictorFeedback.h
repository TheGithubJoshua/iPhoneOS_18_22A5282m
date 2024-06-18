@class NSString;
@protocol ATXPETEventTracker2Protocol;

@interface ATXMagicalMomentsAppPredictorFeedback : NSObject <ATXProactiveSuggestionFeedbackListenerProtocol> {
    id<ATXPETEventTracker2Protocol> _tracker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithTracker:(id)a0;
- (void)logEngagedMMMetricsEntryForBundle:(id)a0 consumerSubType:(unsigned char)a1 anchorType:(long long)a2 abGroup:(id)a3 score:(double)a4;
- (id)getCurrentABGroup;
- (id)clientModelIds;
- (void).cxx_destruct;
- (void)_handleShownProactiveSuggestion:(id)a0 consumerSubType:(unsigned char)a1 bundleIdToAnchorType:(id)a2;
- (void)_handleEngagedProactiveSuggestion:(id)a0 consumerSubType:(unsigned char)a1 bundleIdToAnchorType:(id)a2;
- (void)logShownMMMetricsEntryForBundle:(id)a0 consumerSubType:(unsigned char)a1 anchorType:(long long)a2 abGroup:(id)a3 score:(double)a4;
- (void)receiveUIFeedbackResult:(id)a0;
- (long long)_anchorTypeFromBundleIdToAnchorTypeMap:(id)a0 bundleId:(id)a1;

@end
