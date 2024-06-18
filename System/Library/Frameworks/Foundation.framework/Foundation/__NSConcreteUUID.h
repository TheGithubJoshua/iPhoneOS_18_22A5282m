@interface __NSConcreteUUID : NSUUID {
    unsigned char _uuidBytes[16];
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;

- (id)UUIDString;
- (id)init;
- (id)initWithUUIDBytes:(unsigned char[16])a0;
- (long long)compare:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithUUIDString:(id)a0;
- (void)getUUIDBytes:(unsigned char[16])a0;

@end
