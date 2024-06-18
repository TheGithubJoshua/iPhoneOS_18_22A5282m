@class NSString;

@interface BKSHIDUISensorCharacteristics : NSObject <NSSecureCoding, BSDescriptionStreamable, BSProtobufSerializable, NSCopying> {
    BOOL _hasDiscreteProximitySensor;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasDiscreteProximitySensor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)protobufSchema;

- (id)initWithCoder:(id)a0;
- (id)init;
- (id)_init;
- (id)initForProtobufDecoding;
- (id)mutableCopy;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
