@class NSString;

@interface SPAccessoryLayoutTemplate : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned char partIdentifier;
@property (copy, nonatomic) NSString *partType;
@property (copy, nonatomic) NSString *partName;
@property (copy, nonatomic) NSString *partSymbol;
@property (nonatomic) BOOL isPrimary;

- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
