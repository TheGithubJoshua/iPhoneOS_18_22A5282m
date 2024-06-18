@interface asn1IntegerToken : asn1Token

@property (readonly) unsigned long long value;

- (id)description;
- (id)_initWithID:(unsigned long long)a0 class:(unsigned char)a1 length:(unsigned long long)a2 content:(const char *)a3 opaque:(BOOL)a4;

@end