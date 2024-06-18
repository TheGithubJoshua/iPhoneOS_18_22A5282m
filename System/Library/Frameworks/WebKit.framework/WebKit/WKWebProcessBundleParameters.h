@interface WKWebProcessBundleParameters : NSObject {
    struct RetainPtr<NSMutableDictionary> { void *m_ptr; } _parameters;
}

- (id)initWithDictionary:(id)a0;
- (id)valueForKey:(id)a0;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)description;
- (void)setParametersForKeyWithDictionary:(id)a0;
- (void)setParameter:(id)a0 forKey:(id)a1;

@end
