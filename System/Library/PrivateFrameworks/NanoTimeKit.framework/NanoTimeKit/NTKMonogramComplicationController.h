@class NSString;
@protocol NTKMonogramComplicationDisplay;

@interface NTKMonogramComplicationController : NTKComplicationController <CLKUITimeTravel> {
    NSString *_monogramText;
}

@property (readonly, weak, nonatomic) id<NTKMonogramComplicationDisplay> legacyDisplay;

+ (BOOL)_acceptsComplicationType:(unsigned long long)a0 forDevice:(id)a1;

- (void)_deactivate;
- (void).cxx_destruct;
- (void)_activate;
- (void)_updateDisplay;
- (void)_configureForLegacyDisplay:(id)a0;
- (void)_handleMonogramTextReload;
- (void)_reloadMonogramText;
- (BOOL)hasTapAction;
- (void)setTimeTravelDate:(id)a0 animated:(BOOL)a1;

@end
