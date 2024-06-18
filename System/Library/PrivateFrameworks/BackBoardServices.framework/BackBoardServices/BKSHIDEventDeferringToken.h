@class NSString;

@interface BKSHIDEventDeferringToken : NSObject <NSSecureCoding, BSProtobufSerializable, BSDescriptionStreamable, NSCopying> {
    unsigned int _CAContextID;
    NSString *_stringIdentifier;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tokenForIdentifierOfCAContext:(unsigned int)a0;
+ (id)protobufSchema;
+ (id)tokenForString:(id)a0;

- (id)_initWithIdentifier:(unsigned int)a0;
- (id)initWithCoder:(id)a0;
- (id)init;
- (BOOL)_isString;
- (id)initForProtobufDecoding;
- (id)_initWithString:(id)a0;
- (void)appendDescriptionToFormatter:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)didFinishProtobufDecodingWithError:(out id *)a0;
- (BOOL)_isIdentifierOfCAContext;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned int)_identifierOfCAContext;
- (id)_string;

@end
