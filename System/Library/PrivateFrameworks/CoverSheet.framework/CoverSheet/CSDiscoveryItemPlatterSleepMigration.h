@class UIImageView, UIView;

@interface CSDiscoveryItemPlatterSleepMigration : PLPlatterDiscoveryView {
    UIView *_sleepSymbolBackgroundView;
    UIView *_sleepSymbolImageView;
    UIImageView *_deviceImageView;
}

- (void)_configureGraphicViewIfNecessary;
- (id)init;
- (void)_layoutGraphicView;
- (void).cxx_destruct;
- (void)visualStylingProviderDidChange:(id)a0 forCategory:(long long)a1 outgoingProvider:(id)a2;
- (void)layoutSubviews;

@end
