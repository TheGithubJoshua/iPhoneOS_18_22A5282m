@interface WebCoreSharedBufferData : NSData {
    struct RefPtr<const WebCore::DataSegment, WTF::RawPtrTraits<const WebCore::DataSegment>, WTF::DefaultRefDerefTraits<const WebCore::DataSegment>> { struct DataSegment *m_ptr; } _dataSegment;
    unsigned long long _position;
    unsigned long long _size;
}

+ (void)initialize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (unsigned long long)length;
- (const void *)bytes;
- (id)initWithDataSegment:(const void *)a0 position:(unsigned long long)a1 size:(unsigned long long)a2;

@end
