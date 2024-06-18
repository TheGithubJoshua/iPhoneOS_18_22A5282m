@interface UIKeyboardEmojiCollectionViewCellAccessibility : __UIKeyboardEmojiCollectionViewCellAccessibility_super

+ (Class)safeCategoryBaseClass;
+ (void)_accessibilityPerformValidations:(id)a0;
+ (id)safeCategoryTargetClassName;

- (long long)accessibilityContainerType;
- (BOOL)isAccessibilityElement;
- (id)accessibilityLabel;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (void)accessibilityElementDidBecomeFocused;
- (id)accessibilityHeaderElements;
- (void)setEmoji:(id)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })accessibilityRowRange;
- (BOOL)_accessibilityAllowsAlternativeCharacterActivation;
- (BOOL)_accessibilityHasVariantKeys;
- (BOOL)_accessibilityKeyboardKeyHasSignificantAlternateActions;
- (unsigned int)_accessibilityMediaAnalysisOptions;
- (id)_accessibilityVariantKeys;

@end
