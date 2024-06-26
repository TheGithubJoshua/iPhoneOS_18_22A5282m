@class ATXInformationFeatureSet, ATXInfoSuggestion;

@interface ATXScoredInfoSuggestion : NSObject <NSCopying>

@property (readonly, nonatomic) ATXInfoSuggestion *suggestion;
@property (readonly, nonatomic) ATXInformationFeatureSet *featureSet;
@property (readonly, nonatomic) double score;

- (id)init;
- (id)dictionaryRepresentation;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSuggestion:(id)a0 featureSet:(id)a1 score:(double)a2;

@end
