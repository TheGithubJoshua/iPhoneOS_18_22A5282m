@interface TipKit.TipKitViewModel : NSObject <TipKit.TPKContentControllerDelegate> {
    void /* unknown type, empty encoding */ _hasContent;
    void /* unknown type, empty encoding */ tipContentController;
    void /* unknown type, empty encoding */ tipViewBackgroundColor;
    void /* unknown type, empty encoding */ tipViewContentBackgroundColor;
    void /* unknown type, empty encoding */ tipViewIcon;
    void /* unknown type, empty encoding */ customizationHandler;
    void /* unknown type, empty encoding */ personalizationHandler;
    void /* unknown type, empty encoding */ clientContextMapHandler;
    void /* unknown type, empty encoding */ eventOccurredHandler;
    void /* unknown type, empty encoding */ _tipContent;
}

- (id)init;
- (id)contentController:(id)a0 clientContextMapForKeys:(id)a1;
- (id)contentController:(id)a0 contentView:(id)a1 iconForCustomizationID:(long long)a2;
- (void).cxx_destruct;
- (void)contentController:(id)a0 didFinishWithContent:(id)a1 animated:(BOOL)a2;
- (void)contentController:(id)a0 contentDidBecomeAvailable:(id)a1 animated:(BOOL)a2;
- (void)contentController:(id)a0 eventOccurred:(long long)a1 content:(id)a2 context:(id)a3;
- (id)contentController:(id)a0 personalizedStringForID:(long long)a1 content:(id)a2;

@end
