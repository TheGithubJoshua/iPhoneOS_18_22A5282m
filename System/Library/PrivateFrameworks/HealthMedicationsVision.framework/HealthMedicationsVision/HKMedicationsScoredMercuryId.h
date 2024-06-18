@class NSNumber;

@interface HKMedicationsScoredMercuryId : NSObject

@property (retain, nonatomic) NSNumber *mercuryId;
@property (retain, nonatomic) NSNumber *score;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)initWithMercuryId:(id)a0 score:(id)a1;

@end
