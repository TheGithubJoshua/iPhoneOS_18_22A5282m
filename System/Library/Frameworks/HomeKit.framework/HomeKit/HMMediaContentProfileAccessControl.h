@class NSArray, NSMutableSet;

@interface HMMediaContentProfileAccessControl : HMAccessControl <NSCopying, NSMutableCopying> {
    NSMutableSet *_internalAccessories;
}

@property (readonly, copy) NSArray *accessories;

+ (id)shortDescription;
+ (BOOL)isAccessorySupported:(id)a0;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)shortDescription;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUser:(id)a0;
- (id)descriptionWithPointer:(BOOL)a0;
- (id)initWithUser:(id)a0 accessories:(id)a1;

@end
