@interface NewsFeed.SocialLayerSharedItemCenter : NSObject <SLHighlightCenterDelegate> {
    void /* unknown type, empty encoding */ lazyHighlightCenter;
    void /* unknown type, empty encoding */ delegate;
}

- (id)init;
- (void)highlightCenter:(id)a0 didRemoveHighlights:(id)a1;
- (void).cxx_destruct;
- (void)highlightCenterDidAddHighlights:(id)a0;

@end
