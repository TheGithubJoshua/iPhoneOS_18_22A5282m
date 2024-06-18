@class NSArray;

@interface NEIKEv2TrafficSelectorPayload : NEIKEv2Payload {
    NSArray *_trafficSelectors;
}

+ (id)copyTypeDescription;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)description;
- (BOOL)generatePayloadData;
- (BOOL)hasRequiredFields;
- (BOOL)parsePayloadData;

@end
