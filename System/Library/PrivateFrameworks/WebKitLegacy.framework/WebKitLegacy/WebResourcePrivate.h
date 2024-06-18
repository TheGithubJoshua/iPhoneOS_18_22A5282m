@interface WebResourcePrivate : NSObject {
    struct RefPtr<WebCore::ArchiveResource, WTF::RawPtrTraits<WebCore::ArchiveResource>, WTF::DefaultRefDerefTraits<WebCore::ArchiveResource>> { struct ArchiveResource *m_ptr; } coreResource;
}

+ (void)initialize;

- (id)init;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoreResource:(void *)a0;

@end
