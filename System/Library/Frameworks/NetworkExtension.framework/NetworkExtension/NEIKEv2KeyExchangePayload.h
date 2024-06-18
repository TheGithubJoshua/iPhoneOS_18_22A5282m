@class NSData, NEIKEv2DHProtocol;

@interface NEIKEv2KeyExchangePayload : NEIKEv2Payload {
    NEIKEv2DHProtocol *_dh;
    NSData *_dhPublicKey;
}

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)type;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
