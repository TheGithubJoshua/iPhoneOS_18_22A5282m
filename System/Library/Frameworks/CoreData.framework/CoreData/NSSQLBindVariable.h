@class NSPropertyDescription;

@interface NSSQLBindVariable : NSObject {
    int _cd_rc;
    unsigned char _sqlType;
    unsigned int _index;
    unsigned int _flags;
    id _value;
    NSPropertyDescription *_propertyDescription;
    NSPropertyDescription *_tombstonedPropertyDescription;
    long long _int64;
}

- (unsigned char)sqlType;
- (long long)int64;
- (BOOL)_tryRetain;
- (void)setIndex:(unsigned int)a0;
- (void)setTombstonedPropertyDescription:(id)a0;
- (id)initWithUnsignedInt:(unsigned int)a0 sqlType:(unsigned char)a1;
- (unsigned int)index;
- (oneway void)release;
- (void)setValue:(id)a0;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2 allowCoercion:(BOOL)a3;
- (id)tombstonedPropertyDescription;
- (unsigned int)unsignedInt;
- (void)setUnsignedInt:(unsigned int)a0;
- (void)setInt64:(long long)a0;
- (void)setSQLType:(unsigned char)a0;
- (BOOL)allowsCoercion;
- (unsigned long long)retainCount;
- (id)retain;
- (void)dealloc;
- (BOOL)hasObjectValue;
- (id)propertyDescription;
- (BOOL)_isDeallocating;
- (id)value;
- (id)initWithInt64:(long long)a0 sqlType:(unsigned char)a1;
- (id)initWithValue:(id)a0 sqlType:(unsigned char)a1 propertyDescription:(id)a2;

@end
