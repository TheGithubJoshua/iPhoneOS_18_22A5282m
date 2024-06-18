@class NSDictionary;

@interface PLFileSystemPersistenceAttributes : NSObject {
    NSDictionary *_attributes;
    NSDictionary *_unknownAttributes;
}

- (id)stringForKey:(id)a0;
- (BOOL)getUInt64:(unsigned long long *)a0 forKey:(id)a1;
- (id)dataForKey:(id)a0;
- (void).cxx_destruct;
- (BOOL)getInt32:(int *)a0 forKey:(id)a1;
- (id)initWithAttributes:(id)a0 unknownAttributes:(id)a1;
- (id)description;
- (BOOL)getUInt16:(unsigned short *)a0 forKey:(id)a1;
- (id)UUIDStringForKey:(id)a0;
- (void)dealloc;

@end
