@class NSString;

@interface ASCViewInAppStoreOfferMetadata : ASCOfferMetadata

@property (readonly, copy, nonatomic) NSString *title;

+ (BOOL)supportsSecureCoding;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (BOOL)isViewInAppStore;

@end
