@class NSString, UILabel;

@interface SFDomainLabel : UIView {
    UILabel *_label;
    BOOL _attributedStringNeedsUpdate;
}

@property (readonly, nonatomic) NSString *text;
@property (readonly, nonatomic, getter=isSecure) BOOL secure;

- (id)initWithCoder:(id)a0;
- (void)_commonInit;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (id)_makeAttributedString;
- (id)initWithText:(id)a0 isSecure:(BOOL)a1;
- (void)setText:(id)a0 isSecure:(BOOL)a1;

@end
