@class NSString, SKUIViewElementLayoutContext, SKUINavigationBarContext, UIView;

@interface SKUINavigationBarSectionController : NSObject <SKUIArtworkRequestDelegate> {
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

@property (readonly, nonatomic) UIView *view;
@property (retain, nonatomic) SKUINavigationBarContext *context;
@property (readonly, nonatomic) SKUIViewElementLayoutContext *viewLayoutContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (void)artworkRequest:(id)a0 didLoadImage:(id)a1;
- (id)barButtonItemForElementIdentifier:(id)a0;
- (void)reloadAfterDocumentUpdateWithNavigationItem:(id)a0;
- (void)reloadSectionViews;
- (id)viewForElementIdentifier:(id)a0;
- (void)willAppearInNavigationBar;

@end
