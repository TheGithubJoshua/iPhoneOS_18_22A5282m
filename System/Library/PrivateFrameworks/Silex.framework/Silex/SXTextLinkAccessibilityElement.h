@class NSURL, NSString, SXTextTangierFlowRep;

@interface SXTextLinkAccessibilityElement : UIAccessibilityElement

@property (weak, nonatomic) SXTextTangierFlowRep *parentRep;
@property (readonly, nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } rangeInParentRep;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSString *displayText;

- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)accessibilityTraits;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (id)accessibilityValue;
- (id)initWithHyperlinkField:(id)a0 parentRep:(id)a1;

@end
