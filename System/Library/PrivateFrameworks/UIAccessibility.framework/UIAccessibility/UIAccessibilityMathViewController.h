@class NSString, NSDictionary, SCRCMathExpression, UIAccessibilityMathWebView;

@interface UIAccessibilityMathViewController : UIViewController <WKNavigationDelegate> {
    SCRCMathExpression *_mathExpression;
    UIAccessibilityMathWebView *_webView;
}

@property (readonly, nonatomic) NSDictionary *mathDictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (void)_doneButtonTapped;
- (id)_htmlString;
- (void)_styleBarButtonItem:(id)a0;
- (id)initWithMathDictionary:(id)a0;

@end
