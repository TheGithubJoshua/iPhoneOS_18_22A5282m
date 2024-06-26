@class NSString, NSDateFormatter, NSCalendar, NSDate, NSLocale;

@interface PKDatePickerImpl_PickerView : UIPickerView <PKDatePickerInternalImplementationProtocol, UIPickerViewDataSource, UIPickerViewDelegate> {
    unsigned long long _calendarUnit;
    struct _NSRange { unsigned long long location; unsigned long long length; } _possibleRange;
    NSDateFormatter *_dateFormatter;
    NSCalendar *_calendar;
    NSLocale *_locale;
    id _changeTarget;
    SEL _changeAction;
}

@property (retain, nonatomic) NSDate *date;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)dealloc;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (unsigned long long)_numberOfItems;
- (void)pickerView:(id)a0 didSelectRow:(long long)a1 inComponent:(long long)a2;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (id)pickerView:(id)a0 titleForRow:(long long)a1 forComponent:(long long)a2;
- (double)pickerView:(id)a0 widthForComponent:(long long)a1;
- (unsigned long long)_defaultIndex;
- (id)_dateComponentsForCalendarUnit:(unsigned long long)a0 value:(long long)a1;
- (id)_dateForIndex:(unsigned long long)a0;
- (id)_dateFormatForCalendarUnit:(unsigned long long)a0;
- (id)_stringForIndex:(unsigned long long)a0;
- (id)initShowingDay:(BOOL)a0 month:(BOOL)a1 year:(BOOL)a2 useDarkAppearance:(BOOL)a3 locale:(id)a4 calendar:(id)a5;
- (void)prepareToDie;
- (void)setDateValueChangedTarget:(id)a0 action:(SEL)a1;

@end
