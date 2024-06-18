@class NSString;

@interface BKSHIDEventDisplay : NSObject <NSSecureCoding, BSProtobufSerializable, NSCopying> {
    BOOL _builtin;
    NSString *_hardwareIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)protobufSchema;
+ (id)nullDisplay;
+ (id)displayWithHardwareIdentifier:(id)a0;
+ (id)builtinDisplay;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)initForProtobufDecoding;
- (void)encodeWithCoder:(id)a0;
- (BOOL)_isBuiltinDisplay;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)_isNullDisplay;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_hardwareIdentifier;
- (id)_initWithHardwareIdentifier:(id)a0;

@end
