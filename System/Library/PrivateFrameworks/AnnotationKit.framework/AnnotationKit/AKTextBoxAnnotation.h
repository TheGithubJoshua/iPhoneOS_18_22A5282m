@class UIColor;

@interface AKTextBoxAnnotation : AKRectangularShapeAnnotation {
    UIColor *_highlightColor;
}

+ (id)defaultPlaceholderText;
+ (BOOL)deleteAfterEditingIfEmpty;

- (void)setHighlightColor:(id)a0;
- (id)init;
- (id)highlightColor;
- (id)displayName;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })hitTestBounds;
- (id)keysForValuesToObserveForRedrawing;

@end
