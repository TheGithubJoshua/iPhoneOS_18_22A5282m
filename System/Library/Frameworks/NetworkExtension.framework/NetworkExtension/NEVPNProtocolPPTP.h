@interface NEVPNProtocolPPTP : NEVPNProtocolPPP

@property long long encryptionLevel;

+ (BOOL)supportsSecureCoding;

- (id)descriptionWithIndent:(int)a0 options:(unsigned long long)a1;
- (id)initWithCoder:(id)a0;
- (id)copyLegacyDictionary;
- (id)init;
- (id)initFromLegacyDictionary:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (struct __SCNetworkInterface { } *)createInterface;

@end
