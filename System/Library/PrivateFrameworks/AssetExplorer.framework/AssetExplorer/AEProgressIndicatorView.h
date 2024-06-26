@class NSProgress;

@interface AEProgressIndicatorView : PLRoundProgressView

@property (readonly, nonatomic) NSProgress *_progress;

- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 progress:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
