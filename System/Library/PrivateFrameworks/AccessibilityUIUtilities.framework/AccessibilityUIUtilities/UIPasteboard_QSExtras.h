@interface UIPasteboard_QSExtras : __UIPasteboard_QSExtras_super

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
+ (id)generalPasteboard;
+ (id)pasteboardWithName:(id)a0 create:(BOOL)a1;
+ (id)pasteboardWithUniqueName;
+ (id)_accessibilityQuickSpeakPasteboard;
+ (void)_accessibilitySetUseQuickSpeakPasteBoard:(BOOL)a0;
+ (BOOL)_accessibilityUseQuickSpeakPasteBoard;

- (long long)changeCount;
- (long long)numberOfItems;
- (id)items;
- (id)images;
- (void)setItems:(id)a0;
- (id)colors;
- (id)image;
- (id)URL;
- (id)URLs;
- (void)setStrings:(id)a0;
- (id)string;
- (void)addItems:(id)a0;
- (id)color;
- (id)strings;
- (id)pasteboardTypes;
- (BOOL)containsPasteboardTypes:(id)a0;
- (BOOL)containsPasteboardTypes:(id)a0 inItemSet:(id)a1;
- (id)dataForPasteboardType:(id)a0;
- (id)dataForPasteboardType:(id)a0 inItemSet:(id)a1;
- (id)itemSetWithPasteboardTypes:(id)a0;
- (id)pasteboardTypesForItemSet:(id)a0;
- (void)setData:(id)a0 forPasteboardType:(id)a1;
- (void)setValue:(id)a0 forPasteboardType:(id)a1;
- (id)valueForPasteboardType:(id)a0;
- (id)valuesForPasteboardType:(id)a0 inItemSet:(id)a1;
- (BOOL)_accessibilityShouldSwapReceiverWithQuickSpeakPasteboard;

@end
