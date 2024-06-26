@interface SwiftUI.UIKitSearchBarCoordinator : SwiftUI.PlatformViewCoordinator <UISearchBarDelegate> {
    void /* unknown type, empty encoding */ triggerSubmission;
    void /* unknown type, empty encoding */ configuration;
    void /* unknown type, empty encoding */ scopes;
    void /* unknown type, empty encoding */ placement;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isViewUpdating;
    void /* unknown type, empty encoding */ oldText;
    void /* unknown type, empty encoding */ oldTokens;
}

- (void)searchBarCancelButtonClicked:(id)a0;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (void)searchBarTextDidEndEditing:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)searchBarTextDidBeginEditing:(id)a0;
- (void)searchBar:(id)a0 selectedScopeButtonIndexDidChange:(long long)a1;
- (void)primaryActionTriggered:(id)a0;

@end
