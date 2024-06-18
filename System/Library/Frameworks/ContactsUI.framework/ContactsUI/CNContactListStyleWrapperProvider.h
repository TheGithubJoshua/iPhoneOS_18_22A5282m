@class CNContactStyle;

@interface CNContactListStyleWrapperProvider : CNContactListStyleDefautProvider

@property (readonly, nonatomic) CNContactStyle *contactStyle;

- (id)bannerTitleTextColor;
- (id)cellBackgroundSelectedColor;
- (id)cellSearchResultTextDisabledColor;
- (id)cellBlueSelectionSecondaryTextColor;
- (BOOL)tableIsOpaque;
- (id)initWithContactStyle:(id)a0;
- (id)headerIndexTextColor;
- (id)cellSearchResultTextColor;
- (BOOL)navigationBarIsTranslucent;
- (id)headerBackgroundColor;
- (long long)searchBarStyle;
- (BOOL)usesInsetPlatterStyle;
- (id)searchBarTextColor;
- (id)cellBackgroundColor;
- (id)searchBarPlaceholderTextDisabledColor;
- (long long)tableSeparatorStyle;
- (id)cellNameTextEmphasisedFont;
- (BOOL)searchBarIsTranslucent;
- (void).cxx_destruct;
- (id)tableSectionIndexBackgroundColor;
- (long long)searchBarKeyboardAppearance;
- (id)searchBarPlaceholderTextColor;
- (long long)navigationBarStyle;
- (id)tableSeparatorColor;
- (id)cellNameTextFont;
- (BOOL)cellIsOpaque;
- (id)cellNameTextHighlightedColor;
- (long long)tableSeparatorOverlayBlendMode;
- (id)cellNameTextColor;
- (BOOL)cellIsVibrant;
- (id)tableBackgroundFilteredColor;
- (unsigned long long)tableNoContactsAvailableStyle;
- (id)cellSearchBackgroundColor;
- (id)tableBackgroundColor;
- (id)searchBarBackgroundColor;
- (id)searchBarTextDisabledColor;

@end
