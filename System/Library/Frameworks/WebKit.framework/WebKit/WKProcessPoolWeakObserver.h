@interface WKProcessPoolWeakObserver : NSObject {
    struct WeakPtr<WebKit::WebProcessPool, WTF::DefaultWeakPtrImpl> { struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { struct DefaultWeakPtrImpl *m_ptr; } m_impl; } m_weakPtr;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithWeakPtr:(void *)a0;

@end
