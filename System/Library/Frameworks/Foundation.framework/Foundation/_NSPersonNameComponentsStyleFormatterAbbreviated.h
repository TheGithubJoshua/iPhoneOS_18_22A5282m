@interface _NSPersonNameComponentsStyleFormatterAbbreviated : _NSPersonNameComponentsStyleFormatter

- (id)abbreviatedKeys;
- (BOOL)shouldIgnoreComponentsContainingSpecialCharacters;
- (id)_delimiterBetweenString:(id)a0 andString:(id)a1 isPhonetic:(BOOL)a2;
- (id)keysOfInterest;
- (id)fallbackStyleFormatter;
- (id)_formattedStringFromOrderedKeys:(id)a0 components:(id)a1 attributesByRange:(id)a2;

@end
