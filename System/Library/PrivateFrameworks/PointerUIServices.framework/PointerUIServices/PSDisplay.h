@class NSString;

@interface PSDisplay : NSObject <NSCopying, NSSecureCoding> {
    BOOL _builtin;
    NSString *_hardwareIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

+ (id)displayWithHardwareIdentifier:(id)a0;
+ (id)builtinDisplay;

- (id)initWithCoder:(id)a0;
- (id)hardwareIdentifier;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithHardwareIdentifier:(id)a0;

@end
