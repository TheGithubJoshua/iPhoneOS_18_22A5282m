@class OIXMLElement, NSString;

@interface OIXMLDocument : OIXMLNode

@property (retain) OIXMLElement *rootElement;
@property (copy) NSString *version;
@property (copy) NSString *characterEncoding;

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)contentString;
- (id)XMLString;
- (id)closingTagString;
- (id)createMutableXMLString;
- (id)initWithRootElement:(id)a0;
- (id)openingTagString;

@end
