@class NSArray, NSAttributedString;

@interface PXLabelTypesetter : PXObservable <PXMutableLabelTypesetter>

@property (copy, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } bounds;
@property (nonatomic) long long typesettingMode;
@property (nonatomic) unsigned long long maximumNumberOfLines;
@property (nonatomic) BOOL adjustsFontSizeToFitWidth;
@property (nonatomic) double minimumScaleFactor;
@property (nonatomic) BOOL allowTruncation;
@property (nonatomic) double minimumTruncatedScaleFactor;
@property (readonly, nonatomic) struct CGContext { } *context;
@property (readonly, nonatomic) NSArray *lines;

- (void)shiftLinesVerticallyToAvoidOverlap:(id)a0 referenceFont:(id)a1;
- (id)init;
- (id)initWithContext:(struct CGContext { } *)a0;
- (void)performChanges:(id /* block */)a0;
- (void)didPerformChanges;
- (id)mutableChangeObject;
- (void)_updateLines;
- (void).cxx_destruct;
- (void)_setLines:(id)a0;
- (unsigned long long)_adjustCutoffLocation:(unsigned long long)a0 forLineStartingAtIndex:(unsigned long long)a1;
- (BOOL)_allowTextOverlapForFont:(id)a0;

@end
