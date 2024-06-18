@class NSMutableDictionary;

@interface ATXAnchorModelFeedbackMetadata : NSObject <NSSecureCoding> {
    NSMutableDictionary *_suggestionUUIDToAnchorPredictionMapping;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)archivedDataForAnchorFeedbackMetadata:(id)a0;
+ (id)anchorFeedbackMetadataFromArchivedData:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)anchorModelPredictionForProactiveSuggestion:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)numberOfAnchorModelPredictions;
- (BOOL)isEqualToATXAnchorModelFeedbackMetadata:(id)a0;
- (id)initWithAnchorSuggestionTuples:(id)a0;
- (id)initWithSuggestionUUIDToAnchorPredictionMapping:(id)a0;

@end
