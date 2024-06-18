@class NSString, SBFDateTimeController;
@protocol SBCalendarIconImageProviderDelegate;

@interface SBCalendarIconImageProvider : NSObject <SBFDateTimeOverrideObserver>

@property (class, copy, nonatomic) NSString *significantTimeChangeNotificationName;

@property (weak, nonatomic) id<SBCalendarIconImageProviderDelegate> delegate;
@property (readonly, nonatomic) SBFDateTimeController *dateTimeController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)localeChanged;
- (id)init;
- (void)reloadIconImage;
- (void)controller:(id)a0 didChangeOverrideDateFromDate:(id)a1;
- (void).cxx_destruct;
- (id)initWithDateTimeController:(id)a0;
- (void)_stopListeningForSignificantTimeChanges;
- (id)preparedISIcon;
- (void)dealloc;
- (id)iconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (id)unmaskedIconImageWithInfo:(struct SBIconImageInfo { struct CGSize { double x0; double x1; } x0; double x1; double x2; })a0;
- (void)_startListeningForSignificantTimeChanges;

@end
