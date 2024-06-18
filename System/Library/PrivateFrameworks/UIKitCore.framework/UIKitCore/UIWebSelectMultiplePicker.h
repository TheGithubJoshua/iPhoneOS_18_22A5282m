@class NSArray, DOMHTMLSelectElement, NSString;
@protocol UIWebSelectedItemPrivate;

@interface UIWebSelectMultiplePicker : UIPickerView <UIWebFormControl, UIPickerViewDataSource, UIPickerViewDelegate> {
    unsigned long long _singleSelectionIndex;
    double _fontSize;
    double _maximumTextWidth;
    long long _textAlignment;
    double _layoutWidth;
}

@property (retain, nonatomic) DOMHTMLSelectElement *_selectionNode;
@property (retain, nonatomic) NSArray *_cachedItems;
@property (retain, nonatomic) id<UIWebSelectedItemPrivate> _singleSelectionItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)controlView;
- (void)dealloc;
- (void)layoutSubviews;
- (long long)numberOfComponentsInPickerView:(id)a0;
- (int)_itemIndexForRowIndex:(int)a0;
- (void)controlBeginEditing;
- (void)controlEndEditing;
- (id)initWithDOMHTMLSelectElement:(id)a0 cachedItems:(id)a1 singleSelectionItem:(id)a2 singleSelectionIndex:(unsigned long long)a3 multipleSelection:(BOOL)a4;
- (long long)pickerView:(id)a0 numberOfRowsInComponent:(long long)a1;
- (void)pickerView:(id)a0 row:(int)a1 column:(int)a2 checked:(BOOL)a3;
- (id)pickerView:(id)a0 viewForRow:(long long)a1 forComponent:(long long)a2 reusingView:(id)a3;

@end