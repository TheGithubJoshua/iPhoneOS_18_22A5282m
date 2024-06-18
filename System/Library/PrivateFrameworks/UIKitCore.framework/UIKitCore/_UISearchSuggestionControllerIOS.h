@class UISearchBar, UIContextMenuInteraction, NSString, UISearchTextField, UITapGestureRecognizer;

@interface _UISearchSuggestionControllerIOS : _UISearchSuggestionController <UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate, _UIGeometryChangeObserver>

@property (retain, nonatomic) UIContextMenuInteraction *menuInteraction;
@property (retain, nonatomic) UITapGestureRecognizer *suggestionsRecoveryGesture;
@property (nonatomic) BOOL hasSetUpGeometryChangeResponse;
@property (readonly, weak, nonatomic) UISearchTextField *searchTextField;
@property (readonly, weak, nonatomic) UISearchBar *searchBar;
@property (readonly, nonatomic) BOOL hasVisibleMenu;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSearchTextField:(id)a0;
- (id)contextMenuInteraction:(id)a0 configurationForMenuAtLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)_geometryChanged:(const struct { int x0; struct CGPoint { double x0; double x1; } x1; struct CGPoint { double x0; double x1; } x2; struct CGSize { double x0; double x1; } x3; struct CGPoint { double x0; double x1; } x4; id x5; id x6; id x7; id x8; } *)a0 forAncestor:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (void)updateSuggestions:(id)a0 userInitiated:(BOOL)a1;
- (void)_suggestionsRecoveryGestureRecognized;
- (id)_contextMenuInteraction:(id)a0 styleForMenuWithConfiguration:(id)a1;
- (void).cxx_destruct;
- (void)contextMenuInteraction:(id)a0 willEndForConfiguration:(id)a1 animator:(id)a2;
- (id)_suggestionsMenu;
- (void)dismissMenuWithoutAnimation;
- (void)searchTextFieldDidGainSearchBar:(id)a0;
- (void)updateMenuWithSuggestions:(id)a0;

@end
