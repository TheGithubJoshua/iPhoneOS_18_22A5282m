@class MUPlaceRibbonItemViewModel, MKUGCCallToActionViewAppearance;

@interface MUPlaceCallToActionRibbonViewModel : MUPlaceRibbonItemViewModel {
    MUPlaceRibbonItemViewModel *_callToActionViewModel;
}

@property (retain, nonatomic) MKUGCCallToActionViewAppearance *submissionStatus;

- (void).cxx_destruct;
- (BOOL)isTappable;
- (void)_updateInternalState;
- (id)initWithSubmissionStatus:(id)a0;
- (id /* block */)titleStringProvider;
- (id /* block */)valueStringProvider;

@end
