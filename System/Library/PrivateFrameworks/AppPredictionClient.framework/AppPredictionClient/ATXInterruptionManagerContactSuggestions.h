@class NSMutableArray;

@interface ATXInterruptionManagerContactSuggestions : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMutableArray *recommendedContacts;
@property (readonly, nonatomic) NSMutableArray *candidateContacts;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCandidateContact:(id)a0;
- (void)addRecommendedContact:(id)a0;
- (id)initWithRecommendedContacts:(id)a0 candidateContacts:(id)a1;

@end
