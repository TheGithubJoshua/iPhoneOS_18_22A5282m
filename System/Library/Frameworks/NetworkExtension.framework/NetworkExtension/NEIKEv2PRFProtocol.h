@interface NEIKEv2PRFProtocol : NSObject <NSCopying> {
    unsigned long long _type;
}

@property (readonly) unsigned long long type;

- (id)initWithType:(unsigned long long)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
