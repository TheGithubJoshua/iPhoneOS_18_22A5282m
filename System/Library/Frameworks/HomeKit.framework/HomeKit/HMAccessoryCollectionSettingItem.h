@class HMAccessoryCollectionSetting, NSData, NSUUID;
@protocol NSObject, NSSecureCoding, NSCopying;

@interface HMAccessoryCollectionSettingItem : NSObject <NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak) HMAccessoryCollectionSetting *setting;
@property (readonly) NSData *serializedValue;
@property (readonly, copy) NSUUID *identifier;
@property (readonly, copy) id<NSObject, NSCopying, NSSecureCoding> value;

+ (id)shortDescription;
+ (BOOL)requiresCustomItemValueClassesToDecodeForKeyPath:(id)a0;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initWithValue:(id)a0;
- (id)shortDescription;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithIdentifier:(id)a0 value:(id)a1;
- (id)descriptionWithPointer:(BOOL)a0;
- (BOOL)shouldBlockValueDecode;

@end
