@class NSString;

@interface SiriSpotlightContext : SiriContext

@property (copy, nonatomic) NSString *utteranceText;
@property (nonatomic) long long source;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
