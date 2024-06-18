@class _SFWebProcessPlugInPageController, _WKRemoteObjectInterface;

@interface _SFWebProcessSharingLinkExtractor : NSObject <_SFWebProcessSharingLinkExtractor> {
    _SFWebProcessPlugInPageController *_pageController;
    _WKRemoteObjectInterface *_sharingLinkExtractorInterface;
}

- (id)_extractDominantIFrameWithInjectedObject:(id)a0;
- (id)_injectedLinkExtractorSourceString;
- (id)initWithPageController:(id)a0;
- (void).cxx_destruct;
- (void)fetchSharingLinkWithCompletionHandler:(id /* block */)a0;
- (void)_withInjectedLinkExtractorObjectInFrame:(id)a0 callback:(id /* block */)a1;
- (id)_extractSharingLink;
- (void)_setUpRemoteInterface;
- (id)_extractCanonicalLinkWithInjectedObject:(id)a0;

@end
