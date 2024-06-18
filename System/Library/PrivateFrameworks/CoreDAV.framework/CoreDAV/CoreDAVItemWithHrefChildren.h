@class CoreDAVItemWithNoChildren, NSMutableSet;

@interface CoreDAVItemWithHrefChildren : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *hrefs;
@property (retain, nonatomic) CoreDAVItemWithNoChildren *unauthenticated;

+ (id)copyParseRules;

- (id)hrefsAsOriginalURLs;
- (id)hrefsAsStrings;
- (void)addHref:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (id)hrefsAsFullURLs;

@end
