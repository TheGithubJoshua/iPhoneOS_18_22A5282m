@class SFSearchResult;

@interface SFResultFeedback : SFFeedback <NSCopying>

@property (retain, nonatomic) SFSearchResult *result;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)initWithResult:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
