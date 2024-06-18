@interface _UIDatePickerCalendarTimeLabelAccessibility : ___UIDatePickerCalendarTimeLabelAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (id)accessibilityElements;
- (long long)accessibilityContainerType;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })accessibilityFrame;
- (void)pushCurrentStateIntoUIAndNotify;
- (id)initWithTimeFormat:(id)a0 minuteInterval:(long long)a1;
- (unsigned long long)_accessibilityAutomationType;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })_accessibilitySelectedTextRange;
- (id)_accessibilityResponderElement;
- (void)_accessibilityFocusChanged:(id)a0;
- (id)_accessibilityHourElement;
- (id)_accessibilityMinuteElement;
- (BOOL)_axIsHoursEditing;
- (BOOL)_axIsMinutesEditing;
- (BOOL)_axSelfIsFirstResponder;

@end
