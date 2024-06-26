@class NSURL, OKPresentationViewController, OKDocument;

@interface OKWidgetOpusView : OKWidgetView {
    NSURL *_url;
    OKDocument *_document;
    OKPresentationViewController *_presentationViewController;
}

+ (void)setupJavascriptContext:(id)a0;
+ (id)supportedSettings;

- (id)initWithWidget:(id)a0;
- (BOOL)prepareForDisplay:(BOOL)a0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_loadDocumentIfNeeded;
- (BOOL)prepareForUnload:(BOOL)a0;
- (BOOL)prepareForWarmup:(BOOL)a0;
- (void)setSettingUrl:(id)a0;

@end
