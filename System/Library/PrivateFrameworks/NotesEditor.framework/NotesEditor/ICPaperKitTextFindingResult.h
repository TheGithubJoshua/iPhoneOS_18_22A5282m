@interface ICPaperKitTextFindingResult : ICTextFindingResult

@property (nonatomic) unsigned long long order;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } searchResultRect;

- (long long)compare:(id)a0;
- (double)cornerRadius;
- (id)framesForHighlightInTextView:(id)a0;

@end
