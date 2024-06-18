@interface WKBrowsingContextHandle : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic, getter=_pageProxyID) struct ObjectIdentifier<WebKit::WebPageProxyIdentifierType> { unsigned long long m_identifier; } pageProxyID;
@property (readonly, nonatomic, getter=_webPageID) unsigned long long webPageID;

- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id).cxx_construct;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithPage:(struct NakedRef<WebKit::WebPage> { struct WebPage *x0; })a0;
- (id)_initWithPageProxy:(struct NakedRef<WebKit::WebPageProxy> { struct WebPageProxy *x0; })a0;
- (id)_initWithPageProxyID:(struct ObjectIdentifier<WebKit::WebPageProxyIdentifierType> { unsigned long long x0; })a0 andWebPageID:(struct ObjectIdentifier<WebCore::PageIdentifierType> { unsigned long long x0; })a1;

@end
