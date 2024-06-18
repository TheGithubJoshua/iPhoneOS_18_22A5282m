@interface NewsFeed.DebugFormatEditorViewController : UIViewController <UIScrollViewDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ editor;
    void /* unknown type, empty encoding */ formatManager;
    void /* unknown type, empty encoding */ packages;
    void /* unknown type, empty encoding */ errorViewController;
    void /* unknown type, empty encoding */ groupViewController;
    void /* unknown type, empty encoding */ canvasViewController;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ rulerView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_overlayView;
    void /* unknown type, empty encoding */ contentView;
    void /* unknown type, empty encoding */ snapshotCanvasView;
    void /* unknown type, empty encoding */ backgroundView;
    void /* unknown type, empty encoding */ statusView;
    void /* unknown type, empty encoding */ zoomLabel;
    void /* unknown type, empty encoding */ styler;
    void /* unknown type, empty encoding */ lastLayoutBounds;
    void /* unknown type, empty encoding */ editorPathView;
    void /* unknown type, empty encoding */ editorToolbarItems;
}

- (void)scrollViewDidEndZooming:(id)a0 withView:(id)a1 atScale:(double)a2;
- (void)scrollViewDidZoom:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)doToggleSidebar;
- (void)doLightDarkMode;
- (void)doDevicesWithSender:(id)a0;
- (void)doOptions;
- (void)doReload;
- (void)doResetZoom;
- (void)doSnapshotWithSender:(id)a0;
- (void)doToggleConsoleDisplayWithSender:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)overrideTraitCollectionForChildViewController:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)viewLayoutMarginsDidChange;
- (void)viewWillAppear:(BOOL)a0;

@end
