@class NSURL, CoreDAVHrefItem;

@interface CoreDAVItemWithHrefChildItemTolerateBarePayload : CoreDAVItemWithHrefChildItem {
    CoreDAVHrefItem *_virtualHref;
    NSURL *_baseURL;
}

- (id)href;
- (void)setPayload:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)parserSuggestsBaseURL:(id)a0;

@end
