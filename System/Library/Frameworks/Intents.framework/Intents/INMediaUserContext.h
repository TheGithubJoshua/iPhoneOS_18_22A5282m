@class NSNumber;

@interface INMediaUserContext : INUserContext

@property (nonatomic) long long subscriptionStatus;
@property (copy, nonatomic) NSNumber *numberOfLibraryItems;

+ (BOOL)supportsSecureCoding;
+ (long long)_type;
+ (id)_sharedFormatter;

- (id)initWithCoder:(id)a0;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)safeLibraryItems;

@end
