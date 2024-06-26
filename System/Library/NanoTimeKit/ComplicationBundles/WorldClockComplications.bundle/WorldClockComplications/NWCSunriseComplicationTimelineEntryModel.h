@class NSString, CLLocation, NSDate, CLKDevice;

@interface NWCSunriseComplicationTimelineEntryModel : NWCComplicationTimelineEntryModel {
    CLKDevice *_device;
}

@property (readonly, nonatomic) BOOL isNormalUpcomingEvent;
@property (readonly, nonatomic) BOOL isConstantSunEvent;
@property (readonly, nonatomic) BOOL isSunriseEvent;
@property (readonly, nonatomic) CLLocation *location;
@property (readonly, nonatomic) NSString *locationName;
@property (readonly, nonatomic) CLLocation *chinaShiftedLocation;
@property (readonly, nonatomic) long long constantSun;
@property (readonly, nonatomic, getter=isCurrentEvent) BOOL currentEvent;
@property (readonly, nonatomic) NSDate *eventDate;
@property (readonly, nonatomic) NSString *animationGroup;

+ (id)_attributedDisplayNameWithLocationGlyph:(id)a0 inFont:(id)a1;
+ (id)currentEventEntryModelWithEntryAndEventDate:(id)a0 atLocation:(id)a1 withDisplayName:(id)a2 chinaShiftedLocation:(id)a3 constantSun:(long long)a4 animationGroup:(id)a5 device:(id)a6;
+ (id)entryModelWithEntryDate:(id)a0 eventDate:(id)a1 atLocation:(id)a2 withDisplayName:(id)a3 chinaShiftedLocation:(id)a4 constantSun:(long long)a5 animationGroup:(id)a6 device:(id)a7;
+ (id)placeholderEntryModelWithEntryDate:(id)a0 animationGroup:(id)a1 device:(id)a2;

- (void).cxx_destruct;
- (id)description;
- (id)_graphicExtraLargeTemplate;
- (id)_imageProviderForImageSymbolName:(id)a0 imageAssetNamePrefix:(id)a1;
- (id)templateForComplicationFamily:(long long)a0;
- (id)_circularTemplateIsMedium:(BOOL)a0;
- (id)_eventTimeAndCountdownAbbreviated:(BOOL)a0 suppressCountdown:(BOOL)a1 suppressCommaSeparator:(BOOL)a2;
- (id)_extraLargeTemplate;
- (id)_graphicCircularTemplate;
- (id)_graphicCornerTemplate;
- (id)_graphicRectangularTemplate;
- (id)_largeModularTemplate;
- (id)_largeUtilityTemplateSuppressCountdown:(BOOL)a0;
- (id)_smallModularTemplate;
- (id)_smallUtilityTemplate;
- (id)_swapPlaceholderString:(id)a0 withTimeStringForDate:(id)a1 inString:(id)a2 usingBaseFont:(id)a3 smallCapsBaseFont:(id)a4;
- (id)initWithEntryDate:(id)a0 eventDate:(id)a1 atLocation:(id)a2 withDisplayName:(id)a3 chinaShiftedLocation:(id)a4 constantSun:(long long)a5 currentEvent:(BOOL)a6 animationGroup:(id)a7 device:(id)a8;

@end
