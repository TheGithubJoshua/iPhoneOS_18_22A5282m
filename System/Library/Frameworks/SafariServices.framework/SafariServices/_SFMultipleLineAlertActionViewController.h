@class NSString;

@interface _SFMultipleLineAlertActionViewController : UIViewController {
    NSString *_title;
    NSString *_detail;
    long long _style;
}

- (void)loadView;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detail:(id)a1 style:(long long)a2;

@end
