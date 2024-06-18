@interface ASCPlaceholderOfferMetadata : ASCOfferMetadata

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)isPlaceholder;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
