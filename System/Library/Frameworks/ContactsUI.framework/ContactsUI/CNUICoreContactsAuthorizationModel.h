@class NSArray;

@interface CNUICoreContactsAuthorizationModel : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSArray *changedItems;
@property (readonly, nonatomic) NSArray *remoteItems;
@property (readonly, nonatomic) NSArray *bundleIdentifiers;
@property (readonly, nonatomic) BOOL isEmpty;

- (id)initWithCoder:(id)a0;
- (id)init;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithItems:(id)a0;
- (id)itemWithMatchingBundleIdentifier:(id)a0;
- (id)modelByCopyingIconsOfRemoteItemsFromModel:(id)a0;
- (id)modelByCopyingItemsWithBundleIdentifier:(id)a0;

@end
