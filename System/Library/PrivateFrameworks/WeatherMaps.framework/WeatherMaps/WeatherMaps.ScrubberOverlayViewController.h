@interface WeatherMaps.ScrubberOverlayViewController : UIViewController {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ store;
    void /* unknown type, empty encoding */ scrubberView;
    void /* unknown type, empty encoding */ scrubberForecastHintView;
    void /* unknown type, empty encoding */ storeObserver;
    void /* unknown type, empty encoding */ hideTimer;
    void /* unknown type, empty encoding */ hideDelay;
    void /* unknown type, empty encoding */ horizontalPadding;
    void /* unknown type, empty encoding */ verticalSpacingBeneathForecastHint;
}

- (id)initWithCoder:(id)a0;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
