@class NSMutableArray;

@interface ATXInterruptionManagerAppSuggestions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *recommendedApps;
@property (readonly, nonatomic) NSMutableArray *candidateApps;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCandidateApp:(id)a0;
- (void)addRecommendedApp:(id)a0;
- (id)initWithRecommendedApps:(id)a0 candidateApps:(id)a1;

@end
