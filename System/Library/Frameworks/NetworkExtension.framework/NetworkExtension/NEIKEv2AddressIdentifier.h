@class NWAddressEndpoint;

@interface NEIKEv2AddressIdentifier : NEIKEv2Identifier {
    NWAddressEndpoint *_address;
}

@property (readonly) NWAddressEndpoint *address;

+ (id)copyTypeDescription;

- (unsigned long long)identifierType;
- (id)initWithAddress:(id)a0;
- (id)stringValue;
- (void).cxx_destruct;
- (id)identifierData;

@end
