@class NSString, UIColor;

@interface MKSearchFoundationBusinessHoursAndDistanceRichText : MKSearchFoundationRichText

@property (getter=isBusinessHoursResolved) BOOL businessHoursResolved;
@property (getter=isDistanceResolved) BOOL distanceResolved;
@property (retain) NSString *hoursString;
@property (retain) UIColor *hoursColor;

- (void)resolveDistanceString:(id)a0 lines:(id)a1;
- (void)resolveBusinessHoursByMapItem:(id)a0 lines:(id)a1;
- (void).cxx_destruct;
- (void)updateFormattedTextForLines:(id)a0;
- (BOOL)isRichTextResolved;
- (void)resolveDistanceNotFound;

@end
