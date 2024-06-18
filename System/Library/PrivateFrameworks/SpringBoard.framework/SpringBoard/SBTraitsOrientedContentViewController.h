@class SBTraitsOrientedContentViewControllerView, SBFTraitsParticipant;

@interface SBTraitsOrientedContentViewController : SBFTouchPassThroughViewController

@property (retain, nonatomic) SBTraitsOrientedContentViewControllerView *view;
@property (weak, nonatomic) SBFTraitsParticipant *contentParticipant;
@property (weak, nonatomic) SBFTraitsParticipant *containerParticipant;
@property (copy, nonatomic) id /* block */ actuateAlongsideBlock;

- (id)view;
- (void)loadView;
- (void)updateOrientationIfNeeded;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;

@end
