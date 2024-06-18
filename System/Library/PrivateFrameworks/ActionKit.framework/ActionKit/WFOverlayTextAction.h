@interface WFOverlayTextAction : WFAction

@property (nonatomic) double imageWidth;
@property (nonatomic) double imageHeight;

- (id)textPosition;
- (double)fontSize;
- (id)font;
- (double)strokeWidth;
- (double)rotation;
- (id)paragraphStyle;
- (id)textColor;
- (id)strokeColor;
- (id)text;
- (double)offset;
- (id)textAttributes;
- (id)fontDescriptor;
- (long long)textAlignment;
- (double)xPosition;
- (id)parameterKeysIgnoredForParameterSummary;
- (void)runAsynchronouslyWithInput:(id)a0;
- (double)boxWidth;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })drawingRectForImage:(id)a0;
- (id)outlinedTextAttributes;
- (void)overlayImage:(id)a0 inContext:(id)a1;
- (BOOL)strokeEnabled;
- (id)strokeWidthPercentage;
- (BOOL)useProportionalSizing;
- (double)yPosition;

@end
