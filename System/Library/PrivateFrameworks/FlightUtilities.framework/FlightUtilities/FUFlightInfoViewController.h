@class FUFlightInfoView;

@interface FUFlightInfoViewController : UIViewController {
    FUFlightInfoView *_flight;
    unsigned long long _style;
}

- (id)initWithStyle:(unsigned long long)a0;
- (void)setStyle:(unsigned long long)a0;
- (void)loadView;
- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (id)flightInfoView;

@end
