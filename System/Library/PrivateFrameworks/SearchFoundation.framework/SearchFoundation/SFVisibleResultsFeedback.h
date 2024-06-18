@class NSArray, SFSearchResult;

@interface SFVisibleResultsFeedback : SFFeedback <NSCopying>

@property (copy, nonatomic) NSArray *results;
@property (nonatomic) unsigned long long triggerEvent;
@property (retain, nonatomic) SFSearchResult *goTakeoverResult;
@property (retain, nonatomic) NSArray *uniqueIdsOfVisibleButtons;
@property (retain, nonatomic) NSArray *uniqueIdentifiersOfVisibleCardSections;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithResults:(id)a0 triggerEvent:(unsigned long long)a1 visibleButtons:(id)a2 visibleCardSections:(id)a3;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithResults:(id)a0 triggerEvent:(unsigned long long)a1;

@end
