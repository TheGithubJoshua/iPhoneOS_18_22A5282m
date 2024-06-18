@class NSString;

@interface HMSettingStringValue : HMImmutableSettingValue

@property (readonly, copy) NSString *stringValue;

- (unsigned long long)hash;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithPayload:(id)a0;
- (id)attributeDescriptions;
- (id)initWithStringValue:(id)a0;
- (id)initWithProtoPayload:(id)a0;
- (id)payloadCopy;
- (id)protoPayload;

@end
