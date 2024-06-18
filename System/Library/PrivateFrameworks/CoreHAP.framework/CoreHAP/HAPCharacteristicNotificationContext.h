@class HAPNotificationContextSourceWrapper, NSString, HAPTLVUnsignedNumberValue;

@interface HAPCharacteristicNotificationContext : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPTLVUnsignedNumberValue *contextIdentifier;
@property (retain, nonatomic) HAPNotificationContextSourceWrapper *source;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *clockTickCounter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)parsedFromData:(id)a0 error:(id *)a1;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)parseFromData:(id)a0 error:(id *)a1;
- (id)initWithContextIdentifier:(id)a0 source:(id)a1 clockTickCounter:(id)a2;
- (id)serializeWithError:(id *)a0;

@end