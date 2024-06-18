@interface WKRemoteObjectDecoder : NSCoder {
    struct RetainPtr<_WKRemoteObjectInterface> { void *m_ptr; } _interface;
    const void *_rootDictionary;
    const void *_currentDictionary;
    SEL _replyToSelector;
    const void *_objectStream;
    unsigned long long _objectStreamPosition;
    const void *_allowedClasses;
}

- (BOOL)decodeBoolForKey:(id)a0;
- (int)decodeIntForKey:(id)a0;
- (int)decodeInt32ForKey:(id)a0;
- (id)decodeObjectForKey:(id)a0;
- (BOOL)containsValueForKey:(id)a0;
- (BOOL)allowsKeyedCoding;
- (double)decodeDoubleForKey:(id)a0;
- (long long)decodeInt64ForKey:(id)a0;
- (float)decodeFloatForKey:(id)a0;
- (long long)decodeIntegerForKey:(id)a0;
- (id)initWithInterface:(id)a0 rootObjectDictionary:(const void *)a1 replyToSelector:(SEL)a2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)requiresSecureCoding;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (id)allowedClasses;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;

@end
