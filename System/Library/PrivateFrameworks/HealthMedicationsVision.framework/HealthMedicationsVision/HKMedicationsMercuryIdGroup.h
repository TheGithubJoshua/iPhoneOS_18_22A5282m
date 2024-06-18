@class NSArray;

@interface HKMedicationsMercuryIdGroup : NSObject

@property (nonatomic) long long primaryHgId;
@property (nonatomic) float maxJaccardSimilarity;
@property (copy, nonatomic) NSArray *subHgIds;
@property (nonatomic) BOOL ingredientMatched;

- (void).cxx_destruct;
- (id)description;

@end
