@class NSObject, NSXPCInterface, NSXPCConnection;
@protocol OS_xpc_object;

@interface NSXPCDecoder : NSXPCCoder {
    unsigned long long _genericIndex;
    struct { char *data; unsigned long long dataLen; struct __CFDictionary *objectReferences; } _decoder;
    struct *_collections[272];
    struct { unsigned long long offset; int type; } _rootObject;
    Class expectedUnnestedCollectionType;
    BOOL _strictSecureDecodingEnabled;
    BOOL _enforceSubclassesMustBeExplicitlyMentionedWhenDecoded;
    unsigned int _collectionPointer;
    id _allowedClassesList[272];
    long long _allowedClassesIndex;
    NSObject<OS_xpc_object> *_oolObjects;
    NSXPCInterface *_interface;
}

@property NSXPCConnection *_connection;

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
- (void)_validateAllowedXPCType:(struct _xpc_type_s { } *)a0 forKey:(id)a1;
- (void)_enforceSubclassesMustBeExplicitlyMentionedWhenDecoded;
- (id)_decodeReplyFromXPCObject:(id)a0 forSelector:(SEL)a1;
- (id)connection;
- (id)decodeObject;
- (void)_startReadingFromXPCObject:(id)a0;
- (void)_validateAllowedClass:(Class)a0 forKey:(id)a1 allowingInvocations:(BOOL)a2;
- (id)decodeArrayOfObjectsOfClasses:(id)a0 forKey:(id)a1;
- (id)_decodeCollectionOfClass:(Class)a0 allowedClasses:(id)a1 forKey:(id)a2;
- (id)_xpcObjectForIndex:(long long)a0;
- (const char *)_decodeCStringForKey:(id)a0;
- (id)initWithInterface:(id)a0;
- (int)__decodeXPCObject:(id)a0 allowingSimpleMessageSend:(BOOL)a1 outInvocation:(id *)a2 outArguments:(id *)a3 outArgumentsMaxCount:(unsigned long long)a4 outMethodSignature:(id *)a5 outSelector:(SEL *)a6 isReply:(BOOL)a7 replySelector:(SEL)a8;
- (int)_decodeMessageFromXPCObject:(id)a0 allowingSimpleMessageSend:(BOOL)a1 outInvocation:(id *)a2 outArguments:(id *)a3 outArgumentsMaxCount:(unsigned long long)a4 outMethodSignature:(id *)a5 outSelector:(SEL *)a6;
- (BOOL)_testClass:(Class)a0 isAllowedByAllowList:(id)a1;
- (id)_decodeObjectOfClasses:(id)a0 atObject:(struct { unsigned long long x0; int x1; } *)a1;
- (id)decodeDictionaryWithKeysOfClasses:(id)a0 objectsOfClasses:(id)a1 forKey:(id)a2;
- (id)__decoderInfoForAllowedClassesWarning;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1 size:(unsigned long long)a2;
- (id)debugDescription;
- (id)_decodeArrayOfObjectsForKey:(id)a0;
- (id)decodeObjectOfClass:(Class)a0 forKey:(id)a1;
- (void)decodeValueOfObjCType:(const char *)a0 at:(void *)a1;
- (id)allowedClasses;
- (void)dealloc;
- (id)decodeObjectOfClasses:(id)a0 forKey:(id)a1;
- (id)decodeXPCObjectForKey:(id)a0;
- (id)decodeXPCObjectOfType:(struct _xpc_type_s { } *)a0 forKey:(id)a1;
- (const char *)decodeBytesForKey:(id)a0 returnedLength:(unsigned long long *)a1;

@end
