@class NSString, CNContact;

@interface CNContactProperty : NSObject <NSCopying, NSSecureCoding> {
    NSString *_key;
    NSString *_identifier;
    CNContact *_internalContact;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSString *key;
@property (readonly, nonatomic) id value;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *label;

+ (id)contactPropertyWithContact:(id)a0 propertyKey:(id)a1 identifier:(id)a2;
+ (id)contactPropertyWithContactNoCopy:(id)a0 propertyKey:(id)a1 identifier:(id)a2;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)labeledValue;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (int)multiValueIdentifier;
- (id)sourceContact;

@end
