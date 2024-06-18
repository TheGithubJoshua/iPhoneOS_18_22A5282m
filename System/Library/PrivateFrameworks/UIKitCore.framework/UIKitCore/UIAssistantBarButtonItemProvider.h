@interface UIAssistantBarButtonItemProvider : NSObject

+ (BOOL)_isEmojiButtonVisible;
+ (id)unmodifiableSystemAssistantItem:(long long)a0;
+ (void)dismissFloatingKeyboardFromPencilKitIfNeeded;
+ (id)defaultSystemLeadingBarButtonGroupsForItem:(id)a0;
+ (BOOL)_isMinimizeAssistantBarButtonVisible;
+ (void)setScribbleLanguageIdentifier:(id)a0;
+ (void)updateFloatingAssistantBarIfNeeded;
+ (BOOL)_isKeyboardItemEnabled;
+ (void)dismissFloatingKeyboard;
+ (id)dictationMenu;
+ (id)languageIndicatorMenu:(BOOL)a0;
+ (id)barButtonItemForAssistantItemStyle:(long long)a0 target:(id)a1 forcePlainButton:(BOOL)a2;
+ (id)barButtonItemForAssistantItemStyle:(long long)a0 target:(id)a1;
+ (id)dictationActionForInputMode:(id)a0 inCurrentInputMode:(id)a1;
+ (id)inputWindowController;
+ (id)defaultSystemTrailingBarButtonGroupsForItem:(id)a0;
+ (BOOL)_isDismissButtonVisible;
+ (void)presentFloatingKeyboard;
+ (id)languageIndicatorImage;
+ (BOOL)_isScribbleButtonsVisible;
+ (BOOL)_isShowKeyboardButtonVisible;
+ (id)systemDefaultAssistantItem;
+ (id)languageIndicatorItem:(BOOL)a0;
+ (id)configuredSymbolImageWithName:(id)a0 size:(double)a1;
+ (id)imageSymbolConfigurationForAssistantBarWithPointSize:(double)a0;
+ (BOOL)_isInputModeVisible:(id)a0;
+ (BOOL)isKeyboardGroupVisible;
+ (void)setAssistantBarCompact:(BOOL)a0;
+ (id)compactSystemAssistantItem;
+ (BOOL)isFloatingKeyboardVisible;
+ (BOOL)_isDictationButtonVisible;
+ (id)actionForInputMode:(id)a0;

@end
