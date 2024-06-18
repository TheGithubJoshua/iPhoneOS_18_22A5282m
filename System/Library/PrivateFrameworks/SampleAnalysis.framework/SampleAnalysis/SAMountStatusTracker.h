@class NSString, NSMutableSet, NSMutableDictionary;

@interface SAMountStatusTracker : NSObject <SASerializable> {
    NSMutableSet *_threadsSeen;
    NSMutableDictionary *_mountStatusDict;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newInstanceWithoutReferencesFromSerializedBuffer:(const void *)a0 bufferLength:(unsigned long long)a1;
+ (id)classDictionaryKey;

- (BOOL)addSelfToBuffer:(struct { unsigned char x0; unsigned char x1; unsigned short x2; } *)a0 bufferLength:(unsigned long long)a1 withCompletedSerializationDictionary:(id)a2;
- (id)init;
- (void)populateReferencesUsingBuffer:(const void *)a0 bufferLength:(unsigned long long)a1 andDeserializationDictionary:(id)a2 andDataBufferDictionary:(id)a3;
- (void)addSelfToSerializationDictionary:(id)a0;
- (unsigned long long)sizeInBytesForSerializedVersion;
- (void)enumerateMountsBlockingThread:(unsigned long long)a0 betweenStartTime:(id)a1 endTime:(id)a2 block:(id /* block */)a3;
- (void).cxx_destruct;
- (void)fillInThreadsSeen;
- (void)enumerateUnresponsiveMountsBetweenStartTime:(id)a0 endTime:(id)a1 block:(id /* block */)a2;
- (BOOL)hasUnresponsiveMountsForThreadID:(unsigned long long)a0;

@end
