@class NEIKEv2Identifier;

@interface NEIKEv2IdentifierPayload : NEIKEv2Payload {
    NEIKEv2Identifier *_identifier;
}

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
