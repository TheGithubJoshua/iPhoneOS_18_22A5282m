@interface ASCEmptyOfferMetadata : ASCOfferMetadata

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEmpty;
- (BOOL)isEqual:(id)a0;

@end
