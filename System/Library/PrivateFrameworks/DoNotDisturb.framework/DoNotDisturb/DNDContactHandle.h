@class NSString;

@interface DNDContactHandle : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSString *_normalizedValue;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSString *contactIdentifier;
@property (readonly, nonatomic) unsigned long long type;
@property (readonly, copy, nonatomic) NSString *value;

- (id)initWithCoder:(id)a0;
- (id)redactedDescription;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)normalizedValue;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_descriptionForRedacted:(BOOL)a0;
- (id)_initWithContactIdentifier:(id)a0 type:(unsigned long long)a1 value:(id)a2;
- (BOOL)matchesContactHandle:(id)a0;

@end
