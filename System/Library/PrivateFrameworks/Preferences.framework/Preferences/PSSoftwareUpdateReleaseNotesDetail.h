@class NSString;

@interface PSSoftwareUpdateReleaseNotesDetail : PSListController <UIWebViewDelegate>

@property (retain, nonatomic) NSString *releaseNotes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)specifiers;
- (id)init;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)webView:(id)a0 shouldStartLoadWithRequest:(id)a1 navigationType:(long long)a2;

@end
