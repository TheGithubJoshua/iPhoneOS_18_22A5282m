@class HAPTLVUnsignedNumberValue, NSString, HAPFirmwareUpdateStateWrapper;

@interface HAPFirmwareUpdateStatus : NSObject <NSCopying, HAPTLVProtocol>

@property (retain, nonatomic) HAPFirmwareUpdateStateWrapper *state;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *updateDuration;
@property (retain, nonatomic) NSString *stagedFirmwareVersion;
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
- (id)initWithState:(id)a0 updateDuration:(id)a1 stagedFirmwareVersion:(id)a2;
- (id)serializeWithError:(id *)a0;

@end