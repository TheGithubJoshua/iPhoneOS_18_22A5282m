@class PKPaletteTapToRadarCommandExecution;
@protocol PKPaletteTapToRadarCommandDelegate;

@interface PKPaletteTapToRadarCommand : NSObject <UIEditingOverlayInteractionWithView> {
    PKPaletteTapToRadarCommandExecution *_execution;
}

@property (readonly, weak, nonatomic) id<PKPaletteTapToRadarCommandDelegate> delegate;

- (id)initWithDelegate:(id)a0;
- (void)execute;
- (void).cxx_destruct;
- (void)editingOverlayContainerDidChangeToSceneBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
